#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class TargetSeqOperation; }
namespace SimpleJSON { class JSONNode; }

#define CLASS_1_980FCF6039272C63___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x184B7420)
#define CLASS_1_980FCF6039272C63___C__CTOR_OFFSET UNITYSDK_OFFSET(0x184B7460)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_0_OFFSET UNITYSDK_OFFSET(0x184B7470)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_100_OFFSET UNITYSDK_OFFSET(0x1BF45830)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_101_OFFSET UNITYSDK_OFFSET(0x1BF45840)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_102_OFFSET UNITYSDK_OFFSET(0x1BF45850)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_103_OFFSET UNITYSDK_OFFSET(0x1BF45890)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_104_OFFSET UNITYSDK_OFFSET(0x1BF458C0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_105_OFFSET UNITYSDK_OFFSET(0x1BF458D0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_106_OFFSET UNITYSDK_OFFSET(0x1BF458E0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_107_OFFSET UNITYSDK_OFFSET(0x1BF45910)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_108_OFFSET UNITYSDK_OFFSET(0x1BF45920)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_109_OFFSET UNITYSDK_OFFSET(0x1BF45950)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_10_OFFSET UNITYSDK_OFFSET(0x184B7750)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_110_OFFSET UNITYSDK_OFFSET(0x1BF45960)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_111_OFFSET UNITYSDK_OFFSET(0x1BF45970)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_112_OFFSET UNITYSDK_OFFSET(0x1BF45980)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_113_OFFSET UNITYSDK_OFFSET(0x1BF459C0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_114_OFFSET UNITYSDK_OFFSET(0x1BF459F0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_115_OFFSET UNITYSDK_OFFSET(0x1BF45A00)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_116_OFFSET UNITYSDK_OFFSET(0x1BF45A10)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_117_OFFSET UNITYSDK_OFFSET(0x1BF45A20)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_118_OFFSET UNITYSDK_OFFSET(0x1BF45A30)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_119_OFFSET UNITYSDK_OFFSET(0x1BF45A60)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_11_OFFSET UNITYSDK_OFFSET(0x184B77A0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_120_OFFSET UNITYSDK_OFFSET(0x1BF45A70)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_121_OFFSET UNITYSDK_OFFSET(0x1BF45AA0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_122_OFFSET UNITYSDK_OFFSET(0x1BF45AB0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_123_OFFSET UNITYSDK_OFFSET(0x1BF45AF0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_124_OFFSET UNITYSDK_OFFSET(0x1BF45B00)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_125_OFFSET UNITYSDK_OFFSET(0x1BF45B10)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_126_OFFSET UNITYSDK_OFFSET(0x1BF45B20)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_127_OFFSET UNITYSDK_OFFSET(0x1BF45B50)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_128_OFFSET UNITYSDK_OFFSET(0x1BF45B80)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_129_OFFSET UNITYSDK_OFFSET(0x1BF45BB0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_12_OFFSET UNITYSDK_OFFSET(0x184B77E0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_130_OFFSET UNITYSDK_OFFSET(0x1BF45BE0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_131_OFFSET UNITYSDK_OFFSET(0x1BF45C30)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_132_OFFSET UNITYSDK_OFFSET(0x1BF45C60)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_133_OFFSET UNITYSDK_OFFSET(0x1BF45C90)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_134_OFFSET UNITYSDK_OFFSET(0x1BF45CD0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_135_OFFSET UNITYSDK_OFFSET(0x1BF45D10)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_136_OFFSET UNITYSDK_OFFSET(0x1BF45D50)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_137_OFFSET UNITYSDK_OFFSET(0x1BF45D90)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_138_OFFSET UNITYSDK_OFFSET(0x1BF45DA0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_139_OFFSET UNITYSDK_OFFSET(0x1BF45DE0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_13_OFFSET UNITYSDK_OFFSET(0x184B7820)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_140_OFFSET UNITYSDK_OFFSET(0x1BF45E20)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_141_OFFSET UNITYSDK_OFFSET(0x1BF45E60)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_142_OFFSET UNITYSDK_OFFSET(0x1BF45E90)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_143_OFFSET UNITYSDK_OFFSET(0x1BF45EC0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_144_OFFSET UNITYSDK_OFFSET(0x1BF45ED0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_145_OFFSET UNITYSDK_OFFSET(0x1BF45F00)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_146_OFFSET UNITYSDK_OFFSET(0x1BF45F10)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_147_OFFSET UNITYSDK_OFFSET(0x1BF45F50)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_148_OFFSET UNITYSDK_OFFSET(0x1BF45F60)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_149_OFFSET UNITYSDK_OFFSET(0x1BF45F90)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_14_OFFSET UNITYSDK_OFFSET(0x184B7850)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_150_OFFSET UNITYSDK_OFFSET(0x1BF45FC0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_151_OFFSET UNITYSDK_OFFSET(0x1BF45FD0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_152_OFFSET UNITYSDK_OFFSET(0x1BF46000)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_153_OFFSET UNITYSDK_OFFSET(0x1BF46010)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_154_OFFSET UNITYSDK_OFFSET(0x1BF46050)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_155_OFFSET UNITYSDK_OFFSET(0x1BF46060)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_156_OFFSET UNITYSDK_OFFSET(0x1BF46070)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_157_OFFSET UNITYSDK_OFFSET(0x1BF460A0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_158_OFFSET UNITYSDK_OFFSET(0x1BF460B0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_159_OFFSET UNITYSDK_OFFSET(0x1BF460F0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_15_OFFSET UNITYSDK_OFFSET(0x184B78B0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_160_OFFSET UNITYSDK_OFFSET(0x1BF46100)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_161_OFFSET UNITYSDK_OFFSET(0x1BF46110)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_162_OFFSET UNITYSDK_OFFSET(0x1BF46140)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_163_OFFSET UNITYSDK_OFFSET(0x1BF46150)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_164_OFFSET UNITYSDK_OFFSET(0x1BF46190)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_165_OFFSET UNITYSDK_OFFSET(0x1BF46200)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_166_OFFSET UNITYSDK_OFFSET(0x1BF46210)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_167_OFFSET UNITYSDK_OFFSET(0x1BF46220)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_168_OFFSET UNITYSDK_OFFSET(0x1BF46270)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_169_OFFSET UNITYSDK_OFFSET(0x1BF462A0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_16_OFFSET UNITYSDK_OFFSET(0x184B78E0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_170_OFFSET UNITYSDK_OFFSET(0x1BF462B0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_171_OFFSET UNITYSDK_OFFSET(0x1BF46300)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_172_OFFSET UNITYSDK_OFFSET(0x1BF46330)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_173_OFFSET UNITYSDK_OFFSET(0x1BF46360)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_174_OFFSET UNITYSDK_OFFSET(0x1BF463B0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_175_OFFSET UNITYSDK_OFFSET(0x1BF463E0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_176_OFFSET UNITYSDK_OFFSET(0x1BF46430)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_177_OFFSET UNITYSDK_OFFSET(0x1BF46460)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_178_OFFSET UNITYSDK_OFFSET(0x1BF464B0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_179_OFFSET UNITYSDK_OFFSET(0x1BF46500)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_17_OFFSET UNITYSDK_OFFSET(0x184B7920)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_180_OFFSET UNITYSDK_OFFSET(0x1BF46530)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_181_OFFSET UNITYSDK_OFFSET(0x1BF46580)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_182_OFFSET UNITYSDK_OFFSET(0x1BF465D0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_183_OFFSET UNITYSDK_OFFSET(0x1BF46620)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_184_OFFSET UNITYSDK_OFFSET(0x1BF46650)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_185_OFFSET UNITYSDK_OFFSET(0x1BF46680)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_186_OFFSET UNITYSDK_OFFSET(0x1BF466B0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_187_OFFSET UNITYSDK_OFFSET(0x1BF46700)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_188_OFFSET UNITYSDK_OFFSET(0x1BF46740)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_189_OFFSET UNITYSDK_OFFSET(0x1BF46790)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_18_OFFSET UNITYSDK_OFFSET(0x184B7960)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_19_OFFSET UNITYSDK_OFFSET(0x184B79A0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_1_OFFSET UNITYSDK_OFFSET(0x184B74A0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_20_OFFSET UNITYSDK_OFFSET(0x184B79D0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_21_OFFSET UNITYSDK_OFFSET(0x1BF44B80)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_22_OFFSET UNITYSDK_OFFSET(0x1BF44BC0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_23_OFFSET UNITYSDK_OFFSET(0x1BF44C00)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_24_OFFSET UNITYSDK_OFFSET(0x1BF44C40)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_25_OFFSET UNITYSDK_OFFSET(0x1BF44C90)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_26_OFFSET UNITYSDK_OFFSET(0x1BF44CF0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_27_OFFSET UNITYSDK_OFFSET(0x1BF44D40)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_28_OFFSET UNITYSDK_OFFSET(0x1BF44D70)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_29_OFFSET UNITYSDK_OFFSET(0x1BF44D80)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_2_OFFSET UNITYSDK_OFFSET(0x184B74F0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_30_OFFSET UNITYSDK_OFFSET(0x1BF44D90)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_31_OFFSET UNITYSDK_OFFSET(0x1BF44DC0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_32_OFFSET UNITYSDK_OFFSET(0x1BF44DD0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_33_OFFSET UNITYSDK_OFFSET(0x1BF44DE0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_34_OFFSET UNITYSDK_OFFSET(0x1BF44DF0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_35_OFFSET UNITYSDK_OFFSET(0x1BF44E00)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_36_OFFSET UNITYSDK_OFFSET(0x1BF44E40)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_37_OFFSET UNITYSDK_OFFSET(0x1BF44E80)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_38_OFFSET UNITYSDK_OFFSET(0x1BF44E90)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_39_OFFSET UNITYSDK_OFFSET(0x1BF44ED0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_3_OFFSET UNITYSDK_OFFSET(0x184B7520)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_40_OFFSET UNITYSDK_OFFSET(0x1BF44F10)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_41_OFFSET UNITYSDK_OFFSET(0x1BF44F60)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_42_OFFSET UNITYSDK_OFFSET(0x1BF44FB0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_43_OFFSET UNITYSDK_OFFSET(0x1BF45000)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_44_OFFSET UNITYSDK_OFFSET(0x1BF45030)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_45_OFFSET UNITYSDK_OFFSET(0x1BF45070)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_46_OFFSET UNITYSDK_OFFSET(0x1BF450A0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_47_OFFSET UNITYSDK_OFFSET(0x1BF450D0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_48_OFFSET UNITYSDK_OFFSET(0x1BF450E0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_49_OFFSET UNITYSDK_OFFSET(0x1BF45110)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_4_OFFSET UNITYSDK_OFFSET(0x184B7570)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_50_OFFSET UNITYSDK_OFFSET(0x1BF45120)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_51_OFFSET UNITYSDK_OFFSET(0x1BF45160)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_52_OFFSET UNITYSDK_OFFSET(0x1BF45170)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_53_OFFSET UNITYSDK_OFFSET(0x1BF45180)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_54_OFFSET UNITYSDK_OFFSET(0x1BF451C0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_55_OFFSET UNITYSDK_OFFSET(0x1BF451D0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_56_OFFSET UNITYSDK_OFFSET(0x1BF45200)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_57_OFFSET UNITYSDK_OFFSET(0x1BF45210)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_58_OFFSET UNITYSDK_OFFSET(0x1BF45250)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_59_OFFSET UNITYSDK_OFFSET(0x1BF452A0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_5_OFFSET UNITYSDK_OFFSET(0x184B75B0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_60_OFFSET UNITYSDK_OFFSET(0x1BF452D0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_61_OFFSET UNITYSDK_OFFSET(0x1BF452E0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_62_OFFSET UNITYSDK_OFFSET(0x1BF45330)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_63_OFFSET UNITYSDK_OFFSET(0x1BF45340)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_64_OFFSET UNITYSDK_OFFSET(0x1BF45350)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_65_OFFSET UNITYSDK_OFFSET(0x1BF45380)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_66_OFFSET UNITYSDK_OFFSET(0x1BF453C0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_67_OFFSET UNITYSDK_OFFSET(0x1BF453D0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_68_OFFSET UNITYSDK_OFFSET(0x1BF453E0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_69_OFFSET UNITYSDK_OFFSET(0x1BF453F0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_6_OFFSET UNITYSDK_OFFSET(0x184B7600)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_70_OFFSET UNITYSDK_OFFSET(0x1BF45400)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_71_OFFSET UNITYSDK_OFFSET(0x1BF45440)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_72_OFFSET UNITYSDK_OFFSET(0x1BF45480)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_73_OFFSET UNITYSDK_OFFSET(0x1BF454C0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_74_OFFSET UNITYSDK_OFFSET(0x1BF454D0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_75_OFFSET UNITYSDK_OFFSET(0x1BF454E0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_76_OFFSET UNITYSDK_OFFSET(0x1BF454F0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_77_OFFSET UNITYSDK_OFFSET(0x1BF45500)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_78_OFFSET UNITYSDK_OFFSET(0x1BF45510)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_79_OFFSET UNITYSDK_OFFSET(0x1BF45550)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_7_OFFSET UNITYSDK_OFFSET(0x184B7630)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_80_OFFSET UNITYSDK_OFFSET(0x1BF45560)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_81_OFFSET UNITYSDK_OFFSET(0x1BF455A0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_82_OFFSET UNITYSDK_OFFSET(0x1BF455E0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_83_OFFSET UNITYSDK_OFFSET(0x1BF455F0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_84_OFFSET UNITYSDK_OFFSET(0x1BF45600)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_85_OFFSET UNITYSDK_OFFSET(0x1BF45610)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_86_OFFSET UNITYSDK_OFFSET(0x1BF45620)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_87_OFFSET UNITYSDK_OFFSET(0x1BF45630)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_88_OFFSET UNITYSDK_OFFSET(0x1BF45670)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_89_OFFSET UNITYSDK_OFFSET(0x1BF456B0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_8_OFFSET UNITYSDK_OFFSET(0x184B76A0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_90_OFFSET UNITYSDK_OFFSET(0x1BF456F0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_91_OFFSET UNITYSDK_OFFSET(0x1BF45720)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_92_OFFSET UNITYSDK_OFFSET(0x1BF45760)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_93_OFFSET UNITYSDK_OFFSET(0x1BF45770)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_94_OFFSET UNITYSDK_OFFSET(0x1BF45780)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_95_OFFSET UNITYSDK_OFFSET(0x1BF45790)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_96_OFFSET UNITYSDK_OFFSET(0x1BF457A0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_97_OFFSET UNITYSDK_OFFSET(0x1BF457E0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_98_OFFSET UNITYSDK_OFFSET(0x1BF457F0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_99_OFFSET UNITYSDK_OFFSET(0x1BF45820)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_9_OFFSET UNITYSDK_OFFSET(0x184B76D0)

inline static constexpr unsigned int Class_1_980FCF6039272C63___c_TypeDefinitionIndex = 23005;

class Class_1_980FCF6039272C63___c : public ::System::Object
{
public:
	static ::Class_1_980FCF6039272C63___c** StaticGet___9()
	{
		return (::Class_1_980FCF6039272C63___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_980FCF6039272C63___c_TypeDefinitionIndex)->GetStaticField(0x3D410);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_0(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_0_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_1(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_1_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_2(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_2_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_3(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_3_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_4(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_4_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_5(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_5_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_6(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_6_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_7(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_7_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_8(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_8_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_9(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_9_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_10(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_10_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_11(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_11_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_12(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_12_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_13(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_13_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_14(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_14_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_15(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_15_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_16(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_16_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_17(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_17_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_18(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_18_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_19(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_19_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_20(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_20_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_21(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_21_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_22(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_22_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_23(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_23_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_24(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_24_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_25(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_25_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_26(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_26_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_27(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_27_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_28(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_28_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_29(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_29_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_30(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_30_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_31(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_31_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_32(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_32_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_33(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_33_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_34(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_34_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_35(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_35_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_36(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_36_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_37(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_37_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_38(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_38_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_39(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_39_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_40(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_40_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_41(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_41_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_42(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_42_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_43(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_43_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_44(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_44_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_45(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_45_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_46(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_46_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_47(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_47_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_48(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_48_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_49(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_49_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_50(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_50_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_51(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_51_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_52(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_52_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_53(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_53_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_54(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_54_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_55(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_55_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_56(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_56_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_57(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_57_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_58(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_58_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_59(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_59_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_60(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_60_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_61(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_61_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_62(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_62_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_63(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_63_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_64(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_64_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_65(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_65_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_66(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_66_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_67(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_67_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_68(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_68_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_69(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_69_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_70(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_70_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_71(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_71_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_72(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_72_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_73(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_73_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_74(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_74_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_75(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_75_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_76(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_76_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_77(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_77_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_78(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_78_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_79(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_79_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_80(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_80_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_81(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_81_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_82(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_82_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_83(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_83_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_84(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_84_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_85(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_85_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_86(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_86_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_87(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_87_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_88(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_88_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_89(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_89_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_90(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_90_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_91(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_91_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_92(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_92_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_93(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_93_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_94(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_94_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_95(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_95_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_96(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_96_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_97(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_97_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_98(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_98_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_99(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_99_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_100(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_100_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_101(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_101_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_102(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_102_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_103(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_103_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_104(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_104_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_105(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_105_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_106(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_106_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_107(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_107_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_108(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_108_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_109(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_109_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_110(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_110_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_111(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_111_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_112(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_112_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_113(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_113_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_114(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_114_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_115(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_115_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_116(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_116_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_117(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_117_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_118(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_118_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_119(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_119_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_120(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_120_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_121(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_121_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_122(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_122_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_123(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_123_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_124(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_124_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_125(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_125_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_126(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_126_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_127(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_127_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_128(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_128_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_129(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_129_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_130(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_130_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_131(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_131_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_132(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_132_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_133(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_133_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_134(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_134_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_135(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_135_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_136(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_136_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_137(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_137_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_138(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_138_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_139(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_139_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_140(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_140_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_141(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_141_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_142(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_142_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_143(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_143_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_144(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_144_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_145(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_145_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_146(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_146_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_147(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_147_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_148(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_148_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_149(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_149_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_150(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_150_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_151(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_151_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_152(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_152_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_153(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_153_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_154(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_154_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_155(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_155_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_156(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_156_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_157(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_157_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_158(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_158_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_159(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_159_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_160(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_160_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_161(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_161_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_162(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_162_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_163(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_163_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_164(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_164_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_165(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_165_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_166(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_166_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_167(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_167_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_168(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_168_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_169(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_169_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_170(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_170_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_171(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_171_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_172(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_172_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_173(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_173_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_174(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_174_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_175(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_175_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_176(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_176_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_177(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_177_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_178(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_178_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_179(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_179_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_180(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_180_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_181(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_181_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_182(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_182_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_183(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_183_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_184(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_184_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_185(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_185_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_186(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_186_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_187(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_187_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_188(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_188_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_189(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_189_OFFSET))(this, a1);
	}
};
