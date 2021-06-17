#include"libOne.h"
void gmain() {
    window(1000, 1000);
    float x, y, r;
    float s, c, t;
    float tx, ty;
    while (notQuit) {
        clear(0, 50, 0);
        mathAxis(3.1f,255);
        //�}�E�X���W���x�N�g���Ƃ���
        x = mathMouseX;
        y = mathMouseY;
        //���K���x�N�g�������߂�
        r = sqrt(x * x + y * y);
        c = x / r;
        s = y / r;
        //tan�Ƃ����߂�
        t = y / x;
        tx = s  * t;
        ty = -c * t;
        //���̃x�N�g����`��
        strokeWeight(4);
        stroke(128);
        mathArrow(0, 0, x, y);
        //�P�ʉ~��`��
        fill(0, 0, 0, 0);
        mathCircle(0, 0, 2);
        //���K���x�N�g����`��
        strokeWeight(10);
        stroke(200);
        mathArrow(0, 0, c, s);
        //cos�Ƃ�`��
        stroke(160, 200, 255);
        mathLine(0, 0, c, 0);
        //sin�Ƃ�`��
        stroke(255, 200, 200);
        mathLine(c, 0, c, s);
        //tan�Ƃ�`��
        stroke(255, 255, 200);
        mathLine(c, s, c+tx, s+ty);
    }
}














#if 1
#else
#include"libOne.h"
void gmain() {
    window(1000, 1000);
    angleMode(DEGREES);
    colorMode(HSV);
    float x, y, r;
    float sine, cosine, tangent;
    float tx, ty;
    while (notQuit) {
        clear(120, 255, 50);
        mathAxis(3.1f, 255);
        x = mathMouseX;
        y = mathMouseY;
        r = sqrt(x * x + y * y);
        sine = y / r;
        cosine = x / r;
        tangent = y / x;
        tx = sine * tangent;
        ty = -cosine * tangent;
        //tx = sine;
        //ty = -cosine;
        //���̃x�N�g��
        strokeWeight(4);
        stroke(0, 0, 128);
        mathArrow(0, 0, x, y);
        //�P�ʉ~
        fill(0, 0, 0, 0);
        mathCircle(0, 0, 2);
        //���K���x�N�g��
        strokeWeight(8);
        stroke(0, 0, 200);
        mathArrow(0, 0, cosine, sine);
        stroke(240, 64, 255);
        mathLine(0, 0, cosine, 0);
        stroke(0, 64, 255);
        mathLine(cosine, 0, cosine, sine);
        //�^���W�F���g
        stroke(60, 64, 255);
        mathLine(cosine, sine, cosine + tx, sine + ty);
        //mathLine(0, 0, tx, ty);
        //�e�L�X�g���
        textSize(50);
        fill(240, 64, 255);
        text((let)"sine=" + sine, 0, 50);
        fill(0, 64, 255);
        text((let)"cosine=" + cosine, 0, 100);
        fill(60, 64, 255);
        text((let)"tangent=" + tangent, 0, 150);
    }
}
#endif