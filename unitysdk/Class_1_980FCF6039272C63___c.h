#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class TargetSeqOperation; }
namespace SimpleJSON { class JSONNode; }

#define CLASS_1_980FCF6039272C63___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DA193E0)
#define CLASS_1_980FCF6039272C63___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1DA19420)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_0_OFFSET UNITYSDK_OFFSET(0x1DA19430)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_100_OFFSET UNITYSDK_OFFSET(0x1DA1A690)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_101_OFFSET UNITYSDK_OFFSET(0x1DA1A6A0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_102_OFFSET UNITYSDK_OFFSET(0x1DA1A6B0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_103_OFFSET UNITYSDK_OFFSET(0x1DA1A6F0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_104_OFFSET UNITYSDK_OFFSET(0x1DA1A720)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_105_OFFSET UNITYSDK_OFFSET(0x1DA1A730)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_106_OFFSET UNITYSDK_OFFSET(0x1DA1A740)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_107_OFFSET UNITYSDK_OFFSET(0x1DA1A770)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_108_OFFSET UNITYSDK_OFFSET(0x1DA1A780)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_109_OFFSET UNITYSDK_OFFSET(0x1DA1A7B0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_10_OFFSET UNITYSDK_OFFSET(0x1DA19710)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_110_OFFSET UNITYSDK_OFFSET(0x1DA1A7C0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_111_OFFSET UNITYSDK_OFFSET(0x1DA1A7D0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_112_OFFSET UNITYSDK_OFFSET(0x1DA1A7E0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_113_OFFSET UNITYSDK_OFFSET(0x1DA1A820)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_114_OFFSET UNITYSDK_OFFSET(0x1DA1A850)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_115_OFFSET UNITYSDK_OFFSET(0x1DA1A860)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_116_OFFSET UNITYSDK_OFFSET(0x1DA1A870)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_117_OFFSET UNITYSDK_OFFSET(0x1DA1A880)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_118_OFFSET UNITYSDK_OFFSET(0x1DA1A890)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_119_OFFSET UNITYSDK_OFFSET(0x1DA1A8C0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_11_OFFSET UNITYSDK_OFFSET(0x1DA19760)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_120_OFFSET UNITYSDK_OFFSET(0x1DA1A8D0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_121_OFFSET UNITYSDK_OFFSET(0x1DA1A900)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_122_OFFSET UNITYSDK_OFFSET(0x1DA1A910)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_123_OFFSET UNITYSDK_OFFSET(0x1DA1A950)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_124_OFFSET UNITYSDK_OFFSET(0x1DA1A960)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_125_OFFSET UNITYSDK_OFFSET(0x1DA1A970)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_126_OFFSET UNITYSDK_OFFSET(0x1DA1A980)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_127_OFFSET UNITYSDK_OFFSET(0x1DA1A9B0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_128_OFFSET UNITYSDK_OFFSET(0x1DA1A9E0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_129_OFFSET UNITYSDK_OFFSET(0x1DA1AA10)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_12_OFFSET UNITYSDK_OFFSET(0x1DA197A0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_130_OFFSET UNITYSDK_OFFSET(0x1DA1AA40)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_131_OFFSET UNITYSDK_OFFSET(0x1DA1AA90)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_132_OFFSET UNITYSDK_OFFSET(0x1DA1AB20)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_133_OFFSET UNITYSDK_OFFSET(0x1DA1AB50)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_134_OFFSET UNITYSDK_OFFSET(0x1DA1AB90)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_135_OFFSET UNITYSDK_OFFSET(0x1DA1ABD0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_136_OFFSET UNITYSDK_OFFSET(0x1DA1AC10)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_137_OFFSET UNITYSDK_OFFSET(0x1DA1AC50)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_138_OFFSET UNITYSDK_OFFSET(0x1DA1AC60)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_139_OFFSET UNITYSDK_OFFSET(0x1DA1ACA0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_13_OFFSET UNITYSDK_OFFSET(0x1DA197E0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_140_OFFSET UNITYSDK_OFFSET(0x1DA1ACE0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_141_OFFSET UNITYSDK_OFFSET(0x1DA1AD20)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_142_OFFSET UNITYSDK_OFFSET(0x1DA1AD50)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_143_OFFSET UNITYSDK_OFFSET(0x1DA1AD80)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_144_OFFSET UNITYSDK_OFFSET(0x1DA1AD90)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_145_OFFSET UNITYSDK_OFFSET(0x1DA1ADC0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_146_OFFSET UNITYSDK_OFFSET(0x1DA1ADD0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_147_OFFSET UNITYSDK_OFFSET(0x1DA1AE10)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_148_OFFSET UNITYSDK_OFFSET(0x1DA1AE20)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_149_OFFSET UNITYSDK_OFFSET(0x1DA1AE50)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_14_OFFSET UNITYSDK_OFFSET(0x1DA19810)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_150_OFFSET UNITYSDK_OFFSET(0x1DA1AE80)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_151_OFFSET UNITYSDK_OFFSET(0x1DA1AE90)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_152_OFFSET UNITYSDK_OFFSET(0x1DA1AEC0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_153_OFFSET UNITYSDK_OFFSET(0x1DA1AED0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_154_OFFSET UNITYSDK_OFFSET(0x1DA1AF10)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_155_OFFSET UNITYSDK_OFFSET(0x1DA1AF20)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_156_OFFSET UNITYSDK_OFFSET(0x1DA1AF30)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_157_OFFSET UNITYSDK_OFFSET(0x1DA1AF60)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_158_OFFSET UNITYSDK_OFFSET(0x1DA1AF70)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_159_OFFSET UNITYSDK_OFFSET(0x1DA1AFB0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_15_OFFSET UNITYSDK_OFFSET(0x1DA19870)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_160_OFFSET UNITYSDK_OFFSET(0x1DA1AFC0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_161_OFFSET UNITYSDK_OFFSET(0x1DA1AFD0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_162_OFFSET UNITYSDK_OFFSET(0x1DA1B000)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_163_OFFSET UNITYSDK_OFFSET(0x1DA1B010)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_164_OFFSET UNITYSDK_OFFSET(0x1DA1B050)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_165_OFFSET UNITYSDK_OFFSET(0x1DA1B0C0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_166_OFFSET UNITYSDK_OFFSET(0x1DA1B0D0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_167_OFFSET UNITYSDK_OFFSET(0x1DA1B0E0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_168_OFFSET UNITYSDK_OFFSET(0x1DA1B130)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_169_OFFSET UNITYSDK_OFFSET(0x1DA1B160)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_16_OFFSET UNITYSDK_OFFSET(0x1DA198A0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_170_OFFSET UNITYSDK_OFFSET(0x1DA1B170)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_171_OFFSET UNITYSDK_OFFSET(0x1DA1B1C0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_172_OFFSET UNITYSDK_OFFSET(0x1DA1B1F0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_173_OFFSET UNITYSDK_OFFSET(0x1DA1B220)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_174_OFFSET UNITYSDK_OFFSET(0x1DA1B270)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_175_OFFSET UNITYSDK_OFFSET(0x1DA1B2A0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_176_OFFSET UNITYSDK_OFFSET(0x1DA1B2F0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_177_OFFSET UNITYSDK_OFFSET(0x1DA1B320)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_178_OFFSET UNITYSDK_OFFSET(0x1DA1B370)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_179_OFFSET UNITYSDK_OFFSET(0x1DA1B3C0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_17_OFFSET UNITYSDK_OFFSET(0x1DA198E0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_180_OFFSET UNITYSDK_OFFSET(0x1DA1B3F0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_181_OFFSET UNITYSDK_OFFSET(0x1DA1B440)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_182_OFFSET UNITYSDK_OFFSET(0x1DA1B490)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_183_OFFSET UNITYSDK_OFFSET(0x1DA1B4E0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_184_OFFSET UNITYSDK_OFFSET(0x1DA1B510)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_185_OFFSET UNITYSDK_OFFSET(0x1DA1B540)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_186_OFFSET UNITYSDK_OFFSET(0x1DA1B570)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_187_OFFSET UNITYSDK_OFFSET(0x1DA1B5C0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_188_OFFSET UNITYSDK_OFFSET(0x1DA1B600)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_189_OFFSET UNITYSDK_OFFSET(0x1DA1B650)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_18_OFFSET UNITYSDK_OFFSET(0x1DA19920)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_19_OFFSET UNITYSDK_OFFSET(0x1DA19960)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_1_OFFSET UNITYSDK_OFFSET(0x1DA19460)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_20_OFFSET UNITYSDK_OFFSET(0x1DA19990)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_21_OFFSET UNITYSDK_OFFSET(0x1DA199C0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_22_OFFSET UNITYSDK_OFFSET(0x1DA19A00)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_23_OFFSET UNITYSDK_OFFSET(0x1DA19A40)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_24_OFFSET UNITYSDK_OFFSET(0x1DA19A80)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_25_OFFSET UNITYSDK_OFFSET(0x1DA19AD0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_26_OFFSET UNITYSDK_OFFSET(0x1DA19B30)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_27_OFFSET UNITYSDK_OFFSET(0x1DA19B80)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_28_OFFSET UNITYSDK_OFFSET(0x1DA19BB0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_29_OFFSET UNITYSDK_OFFSET(0x1DA19BC0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_2_OFFSET UNITYSDK_OFFSET(0x1DA194B0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_30_OFFSET UNITYSDK_OFFSET(0x1DA19BD0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_31_OFFSET UNITYSDK_OFFSET(0x1DA19C00)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_32_OFFSET UNITYSDK_OFFSET(0x1DA19C10)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_33_OFFSET UNITYSDK_OFFSET(0x1DA19C20)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_34_OFFSET UNITYSDK_OFFSET(0x1DA19C30)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_35_OFFSET UNITYSDK_OFFSET(0x1DA19C40)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_36_OFFSET UNITYSDK_OFFSET(0x1DA19C80)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_37_OFFSET UNITYSDK_OFFSET(0x1DA19CC0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_38_OFFSET UNITYSDK_OFFSET(0x1DA19CD0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_39_OFFSET UNITYSDK_OFFSET(0x1DA19D10)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_3_OFFSET UNITYSDK_OFFSET(0x1DA194E0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_40_OFFSET UNITYSDK_OFFSET(0x1DA19D50)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_41_OFFSET UNITYSDK_OFFSET(0x1DA19DA0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_42_OFFSET UNITYSDK_OFFSET(0x1DA19DF0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_43_OFFSET UNITYSDK_OFFSET(0x1DA19E40)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_44_OFFSET UNITYSDK_OFFSET(0x1DA19E70)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_45_OFFSET UNITYSDK_OFFSET(0x1DA19EB0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_46_OFFSET UNITYSDK_OFFSET(0x1DA19EE0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_47_OFFSET UNITYSDK_OFFSET(0x1DA19F10)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_48_OFFSET UNITYSDK_OFFSET(0x1DA19F20)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_49_OFFSET UNITYSDK_OFFSET(0x1DA19F50)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_4_OFFSET UNITYSDK_OFFSET(0x1DA19530)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_50_OFFSET UNITYSDK_OFFSET(0x1DA19F60)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_51_OFFSET UNITYSDK_OFFSET(0x1DA19FA0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_52_OFFSET UNITYSDK_OFFSET(0x1DA19FB0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_53_OFFSET UNITYSDK_OFFSET(0x1DA19FC0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_54_OFFSET UNITYSDK_OFFSET(0x1DA1A000)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_55_OFFSET UNITYSDK_OFFSET(0x1DA1A010)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_56_OFFSET UNITYSDK_OFFSET(0x1DA1A040)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_57_OFFSET UNITYSDK_OFFSET(0x1DA1A050)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_58_OFFSET UNITYSDK_OFFSET(0x1DA1A090)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_59_OFFSET UNITYSDK_OFFSET(0x1DA1A0C0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_5_OFFSET UNITYSDK_OFFSET(0x1DA19570)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_60_OFFSET UNITYSDK_OFFSET(0x1DA1A110)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_61_OFFSET UNITYSDK_OFFSET(0x1DA1A120)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_62_OFFSET UNITYSDK_OFFSET(0x1DA1A170)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_63_OFFSET UNITYSDK_OFFSET(0x1DA1A180)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_64_OFFSET UNITYSDK_OFFSET(0x1DA1A190)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_65_OFFSET UNITYSDK_OFFSET(0x1DA1A1C0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_66_OFFSET UNITYSDK_OFFSET(0x1DA1A200)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_67_OFFSET UNITYSDK_OFFSET(0x1DA1A210)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_68_OFFSET UNITYSDK_OFFSET(0x1DA1A220)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_69_OFFSET UNITYSDK_OFFSET(0x1DA1A230)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_6_OFFSET UNITYSDK_OFFSET(0x1DA195C0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_70_OFFSET UNITYSDK_OFFSET(0x1DA1A240)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_71_OFFSET UNITYSDK_OFFSET(0x1DA1A280)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_72_OFFSET UNITYSDK_OFFSET(0x1DA1A2C0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_73_OFFSET UNITYSDK_OFFSET(0x1DA1A300)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_74_OFFSET UNITYSDK_OFFSET(0x1DA1A310)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_75_OFFSET UNITYSDK_OFFSET(0x1DA1A320)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_76_OFFSET UNITYSDK_OFFSET(0x1DA1A330)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_77_OFFSET UNITYSDK_OFFSET(0x1DA1A340)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_78_OFFSET UNITYSDK_OFFSET(0x1DA1A350)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_79_OFFSET UNITYSDK_OFFSET(0x1DA1A390)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_7_OFFSET UNITYSDK_OFFSET(0x1DA195F0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_80_OFFSET UNITYSDK_OFFSET(0x1DA1A3A0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_81_OFFSET UNITYSDK_OFFSET(0x1DA1A3E0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_82_OFFSET UNITYSDK_OFFSET(0x1DA1A420)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_83_OFFSET UNITYSDK_OFFSET(0x1DA1A430)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_84_OFFSET UNITYSDK_OFFSET(0x1DA1A440)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_85_OFFSET UNITYSDK_OFFSET(0x1DA1A450)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_86_OFFSET UNITYSDK_OFFSET(0x1DA1A460)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_87_OFFSET UNITYSDK_OFFSET(0x1DA1A470)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_88_OFFSET UNITYSDK_OFFSET(0x1DA1A4B0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_89_OFFSET UNITYSDK_OFFSET(0x1DA1A4F0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_8_OFFSET UNITYSDK_OFFSET(0x1DA19660)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_90_OFFSET UNITYSDK_OFFSET(0x1DA1A530)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_91_OFFSET UNITYSDK_OFFSET(0x1DA1A560)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_92_OFFSET UNITYSDK_OFFSET(0x1DA1A5A0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_93_OFFSET UNITYSDK_OFFSET(0x1DA1A5B0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_94_OFFSET UNITYSDK_OFFSET(0x1DA1A5C0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_95_OFFSET UNITYSDK_OFFSET(0x1DA1A5D0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_96_OFFSET UNITYSDK_OFFSET(0x1DA1A5E0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_97_OFFSET UNITYSDK_OFFSET(0x1DA1A620)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_98_OFFSET UNITYSDK_OFFSET(0x1DA1A630)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_99_OFFSET UNITYSDK_OFFSET(0x1DA1A680)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_9_OFFSET UNITYSDK_OFFSET(0x1DA19690)

inline static constexpr unsigned int Class_1_980FCF6039272C63___c_TypeDefinitionIndex = 23585;

class Class_1_980FCF6039272C63___c : public ::System::Object
{
public:
	static ::Class_1_980FCF6039272C63___c** StaticGet___9()
	{
		return (::Class_1_980FCF6039272C63___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_980FCF6039272C63___c_TypeDefinitionIndex)->GetStaticField(0x35740);
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
