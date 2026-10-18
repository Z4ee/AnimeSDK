#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class TargetSeqOperation; }
namespace SimpleJSON { class JSONNode; }

#define CLASS_1_980FCF6039272C63___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D7EAC60)
#define CLASS_1_980FCF6039272C63___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7EACA0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_0_OFFSET UNITYSDK_OFFSET(0x1D7EACB0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_100_OFFSET UNITYSDK_OFFSET(0x1D7EBEF0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_101_OFFSET UNITYSDK_OFFSET(0x1D7EBF00)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_102_OFFSET UNITYSDK_OFFSET(0x1D7EBF10)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_103_OFFSET UNITYSDK_OFFSET(0x1D7EBF20)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_104_OFFSET UNITYSDK_OFFSET(0x1D7EBF60)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_105_OFFSET UNITYSDK_OFFSET(0x1D7EBF90)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_106_OFFSET UNITYSDK_OFFSET(0x1D7EBFA0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_107_OFFSET UNITYSDK_OFFSET(0x1D7EBFB0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_108_OFFSET UNITYSDK_OFFSET(0x1D7EBFE0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_109_OFFSET UNITYSDK_OFFSET(0x1D7EBFF0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_10_OFFSET UNITYSDK_OFFSET(0x1D7EAF90)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_110_OFFSET UNITYSDK_OFFSET(0x1D7EC020)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_111_OFFSET UNITYSDK_OFFSET(0x1D7EC030)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_112_OFFSET UNITYSDK_OFFSET(0x1D7EC080)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_113_OFFSET UNITYSDK_OFFSET(0x1D7EC090)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_114_OFFSET UNITYSDK_OFFSET(0x1D7EC0A0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_115_OFFSET UNITYSDK_OFFSET(0x1D7EC0E0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_116_OFFSET UNITYSDK_OFFSET(0x1D7EC110)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_117_OFFSET UNITYSDK_OFFSET(0x1D7EC120)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_118_OFFSET UNITYSDK_OFFSET(0x1D7EC130)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_119_OFFSET UNITYSDK_OFFSET(0x1D7EC140)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_11_OFFSET UNITYSDK_OFFSET(0x1D7EAFE0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_120_OFFSET UNITYSDK_OFFSET(0x1D7EC150)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_121_OFFSET UNITYSDK_OFFSET(0x1D7EC180)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_122_OFFSET UNITYSDK_OFFSET(0x1D7EC190)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_123_OFFSET UNITYSDK_OFFSET(0x1D7EC1C0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_124_OFFSET UNITYSDK_OFFSET(0x1D7EC1D0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_125_OFFSET UNITYSDK_OFFSET(0x1D7EC210)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_126_OFFSET UNITYSDK_OFFSET(0x1D7EC220)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_127_OFFSET UNITYSDK_OFFSET(0x1D7EC230)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_128_OFFSET UNITYSDK_OFFSET(0x1D7EC240)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_129_OFFSET UNITYSDK_OFFSET(0x1D7EC270)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_12_OFFSET UNITYSDK_OFFSET(0x1D7EB020)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_130_OFFSET UNITYSDK_OFFSET(0x1D7EC2A0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_131_OFFSET UNITYSDK_OFFSET(0x1D7EC2D0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_132_OFFSET UNITYSDK_OFFSET(0x1D7EC300)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_133_OFFSET UNITYSDK_OFFSET(0x1D7EC350)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_134_OFFSET UNITYSDK_OFFSET(0x1D7EC3E0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_135_OFFSET UNITYSDK_OFFSET(0x1D7EC410)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_136_OFFSET UNITYSDK_OFFSET(0x1D7EC450)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_137_OFFSET UNITYSDK_OFFSET(0x1D7EC490)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_138_OFFSET UNITYSDK_OFFSET(0x1D7EC4D0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_139_OFFSET UNITYSDK_OFFSET(0x1D7EC510)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_13_OFFSET UNITYSDK_OFFSET(0x1D7EB060)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_140_OFFSET UNITYSDK_OFFSET(0x1D7EC520)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_141_OFFSET UNITYSDK_OFFSET(0x1D7EC560)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_142_OFFSET UNITYSDK_OFFSET(0x1D7EC5A0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_143_OFFSET UNITYSDK_OFFSET(0x1D7EC5E0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_144_OFFSET UNITYSDK_OFFSET(0x1D7EC610)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_145_OFFSET UNITYSDK_OFFSET(0x1D7EC640)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_146_OFFSET UNITYSDK_OFFSET(0x1D7EC650)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_147_OFFSET UNITYSDK_OFFSET(0x1D7EC680)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_148_OFFSET UNITYSDK_OFFSET(0x1D7EC690)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_149_OFFSET UNITYSDK_OFFSET(0x1D7EC6D0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_14_OFFSET UNITYSDK_OFFSET(0x1D7EB090)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_150_OFFSET UNITYSDK_OFFSET(0x1D7EC6E0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_151_OFFSET UNITYSDK_OFFSET(0x1D7EC710)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_152_OFFSET UNITYSDK_OFFSET(0x1D7EC740)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_153_OFFSET UNITYSDK_OFFSET(0x1D7EC750)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_154_OFFSET UNITYSDK_OFFSET(0x1D7EC780)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_155_OFFSET UNITYSDK_OFFSET(0x1D7EC790)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_156_OFFSET UNITYSDK_OFFSET(0x1D7EC7D0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_157_OFFSET UNITYSDK_OFFSET(0x1D7EC7E0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_158_OFFSET UNITYSDK_OFFSET(0x1D7EC7F0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_159_OFFSET UNITYSDK_OFFSET(0x1D7EC820)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_15_OFFSET UNITYSDK_OFFSET(0x1D7EB0F0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_160_OFFSET UNITYSDK_OFFSET(0x1D7EC830)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_161_OFFSET UNITYSDK_OFFSET(0x1D7EC870)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_162_OFFSET UNITYSDK_OFFSET(0x1D7EC880)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_163_OFFSET UNITYSDK_OFFSET(0x1D7EC890)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_164_OFFSET UNITYSDK_OFFSET(0x1D7EC8C0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_165_OFFSET UNITYSDK_OFFSET(0x1D7EC8D0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_166_OFFSET UNITYSDK_OFFSET(0x1D7EC910)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_167_OFFSET UNITYSDK_OFFSET(0x1D7EC980)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_168_OFFSET UNITYSDK_OFFSET(0x1D7EC990)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_169_OFFSET UNITYSDK_OFFSET(0x1D7EC9A0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_16_OFFSET UNITYSDK_OFFSET(0x1D7EB120)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_170_OFFSET UNITYSDK_OFFSET(0x1D7EC9F0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_171_OFFSET UNITYSDK_OFFSET(0x1D7ECA20)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_172_OFFSET UNITYSDK_OFFSET(0x1D7ECA30)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_173_OFFSET UNITYSDK_OFFSET(0x1D7ECA80)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_174_OFFSET UNITYSDK_OFFSET(0x1D7ECAB0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_175_OFFSET UNITYSDK_OFFSET(0x1D7ECB00)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_176_OFFSET UNITYSDK_OFFSET(0x1D7ECB50)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_177_OFFSET UNITYSDK_OFFSET(0x1D7ECB80)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_178_OFFSET UNITYSDK_OFFSET(0x1D7ECBD0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_179_OFFSET UNITYSDK_OFFSET(0x1D7ECC00)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_17_OFFSET UNITYSDK_OFFSET(0x1D7EB160)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_180_OFFSET UNITYSDK_OFFSET(0x1D7ECC50)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_181_OFFSET UNITYSDK_OFFSET(0x1D7ECCA0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_182_OFFSET UNITYSDK_OFFSET(0x1D7ECCD0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_183_OFFSET UNITYSDK_OFFSET(0x1D7ECD20)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_184_OFFSET UNITYSDK_OFFSET(0x1D7ECD70)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_185_OFFSET UNITYSDK_OFFSET(0x1D7ECDC0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_186_OFFSET UNITYSDK_OFFSET(0x1D7ECDF0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_187_OFFSET UNITYSDK_OFFSET(0x1D7ECE20)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_188_OFFSET UNITYSDK_OFFSET(0x1D7ECE50)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_189_OFFSET UNITYSDK_OFFSET(0x1D7ECEA0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_18_OFFSET UNITYSDK_OFFSET(0x1D7EB1A0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_190_OFFSET UNITYSDK_OFFSET(0x1D7ECEE0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_191_OFFSET UNITYSDK_OFFSET(0x1D7ECF30)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_19_OFFSET UNITYSDK_OFFSET(0x1D7EB1E0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_1_OFFSET UNITYSDK_OFFSET(0x1D7EACE0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_20_OFFSET UNITYSDK_OFFSET(0x1D7EB210)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_21_OFFSET UNITYSDK_OFFSET(0x1D7EB240)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_22_OFFSET UNITYSDK_OFFSET(0x1D7EB280)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_23_OFFSET UNITYSDK_OFFSET(0x1D7EB2C0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_24_OFFSET UNITYSDK_OFFSET(0x1D7EB300)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_25_OFFSET UNITYSDK_OFFSET(0x1D7EB350)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_26_OFFSET UNITYSDK_OFFSET(0x1D7EB3B0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_27_OFFSET UNITYSDK_OFFSET(0x1D7EB400)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_28_OFFSET UNITYSDK_OFFSET(0x1D7EB430)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_29_OFFSET UNITYSDK_OFFSET(0x1D7EB440)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_2_OFFSET UNITYSDK_OFFSET(0x1D7EAD30)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_30_OFFSET UNITYSDK_OFFSET(0x1D7EB450)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_31_OFFSET UNITYSDK_OFFSET(0x1D7EB480)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_32_OFFSET UNITYSDK_OFFSET(0x1D7EB490)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_33_OFFSET UNITYSDK_OFFSET(0x1D7EB4A0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_34_OFFSET UNITYSDK_OFFSET(0x1D7EB4B0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_35_OFFSET UNITYSDK_OFFSET(0x1D7EB4C0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_36_OFFSET UNITYSDK_OFFSET(0x1D7EB4D0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_37_OFFSET UNITYSDK_OFFSET(0x1D7EB510)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_38_OFFSET UNITYSDK_OFFSET(0x1D7EB520)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_39_OFFSET UNITYSDK_OFFSET(0x1D7EB560)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_3_OFFSET UNITYSDK_OFFSET(0x1D7EAD60)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_40_OFFSET UNITYSDK_OFFSET(0x1D7EB5A0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_41_OFFSET UNITYSDK_OFFSET(0x1D7EB5F0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_42_OFFSET UNITYSDK_OFFSET(0x1D7EB640)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_43_OFFSET UNITYSDK_OFFSET(0x1D7EB690)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_44_OFFSET UNITYSDK_OFFSET(0x1D7EB6C0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_45_OFFSET UNITYSDK_OFFSET(0x1D7EB700)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_46_OFFSET UNITYSDK_OFFSET(0x1D7EB730)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_47_OFFSET UNITYSDK_OFFSET(0x1D7EB760)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_48_OFFSET UNITYSDK_OFFSET(0x1D7EB770)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_49_OFFSET UNITYSDK_OFFSET(0x1D7EB7A0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_4_OFFSET UNITYSDK_OFFSET(0x1D7EADB0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_50_OFFSET UNITYSDK_OFFSET(0x1D7EB7B0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_51_OFFSET UNITYSDK_OFFSET(0x1D7EB7F0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_52_OFFSET UNITYSDK_OFFSET(0x1D7EB800)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_53_OFFSET UNITYSDK_OFFSET(0x1D7EB810)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_54_OFFSET UNITYSDK_OFFSET(0x1D7EB850)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_55_OFFSET UNITYSDK_OFFSET(0x1D7EB860)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_56_OFFSET UNITYSDK_OFFSET(0x1D7EB890)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_57_OFFSET UNITYSDK_OFFSET(0x1D7EB8A0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_58_OFFSET UNITYSDK_OFFSET(0x1D7EB8E0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_59_OFFSET UNITYSDK_OFFSET(0x1D7EB930)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_5_OFFSET UNITYSDK_OFFSET(0x1D7EADF0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_60_OFFSET UNITYSDK_OFFSET(0x1D7EB960)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_61_OFFSET UNITYSDK_OFFSET(0x1D7EB970)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_62_OFFSET UNITYSDK_OFFSET(0x1D7EB9C0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_63_OFFSET UNITYSDK_OFFSET(0x1D7EB9D0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_64_OFFSET UNITYSDK_OFFSET(0x1D7EB9E0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_65_OFFSET UNITYSDK_OFFSET(0x1D7EBA10)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_66_OFFSET UNITYSDK_OFFSET(0x1D7EBA50)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_67_OFFSET UNITYSDK_OFFSET(0x1D7EBA60)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_68_OFFSET UNITYSDK_OFFSET(0x1D7EBA70)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_69_OFFSET UNITYSDK_OFFSET(0x1D7EBA80)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_6_OFFSET UNITYSDK_OFFSET(0x1D7EAE40)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_70_OFFSET UNITYSDK_OFFSET(0x1D7EBA90)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_71_OFFSET UNITYSDK_OFFSET(0x1D7EBAD0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_72_OFFSET UNITYSDK_OFFSET(0x1D7EBB10)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_73_OFFSET UNITYSDK_OFFSET(0x1D7EBB50)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_74_OFFSET UNITYSDK_OFFSET(0x1D7EBB60)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_75_OFFSET UNITYSDK_OFFSET(0x1D7EBBA0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_76_OFFSET UNITYSDK_OFFSET(0x1D7EBBB0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_77_OFFSET UNITYSDK_OFFSET(0x1D7EBBC0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_78_OFFSET UNITYSDK_OFFSET(0x1D7EBBD0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_79_OFFSET UNITYSDK_OFFSET(0x1D7EBBE0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_7_OFFSET UNITYSDK_OFFSET(0x1D7EAE70)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_80_OFFSET UNITYSDK_OFFSET(0x1D7EBC20)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_81_OFFSET UNITYSDK_OFFSET(0x1D7EBC30)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_82_OFFSET UNITYSDK_OFFSET(0x1D7EBC70)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_83_OFFSET UNITYSDK_OFFSET(0x1D7EBCB0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_84_OFFSET UNITYSDK_OFFSET(0x1D7EBCC0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_85_OFFSET UNITYSDK_OFFSET(0x1D7EBCD0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_86_OFFSET UNITYSDK_OFFSET(0x1D7EBCE0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_87_OFFSET UNITYSDK_OFFSET(0x1D7EBCF0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_88_OFFSET UNITYSDK_OFFSET(0x1D7EBD00)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_89_OFFSET UNITYSDK_OFFSET(0x1D7EBD40)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_8_OFFSET UNITYSDK_OFFSET(0x1D7EAEE0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_90_OFFSET UNITYSDK_OFFSET(0x1D7EBD80)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_91_OFFSET UNITYSDK_OFFSET(0x1D7EBDC0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_92_OFFSET UNITYSDK_OFFSET(0x1D7EBDF0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_93_OFFSET UNITYSDK_OFFSET(0x1D7EBE30)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_94_OFFSET UNITYSDK_OFFSET(0x1D7EBE40)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_95_OFFSET UNITYSDK_OFFSET(0x1D7EBE50)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_96_OFFSET UNITYSDK_OFFSET(0x1D7EBE60)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_97_OFFSET UNITYSDK_OFFSET(0x1D7EBE70)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_98_OFFSET UNITYSDK_OFFSET(0x1D7EBEB0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_99_OFFSET UNITYSDK_OFFSET(0x1D7EBEC0)
#define CLASS_1_980FCF6039272C63___C___CCTOR_B__2_9_OFFSET UNITYSDK_OFFSET(0x1D7EAF10)

inline static constexpr unsigned int Class_1_980FCF6039272C63___c_TypeDefinitionIndex = 23859;

class Class_1_980FCF6039272C63___c : public ::System::Object
{
public:
	static ::Class_1_980FCF6039272C63___c** StaticGet___9()
	{
		return (::Class_1_980FCF6039272C63___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_980FCF6039272C63___c_TypeDefinitionIndex)->GetStaticField(0x42FC0);
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

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_190(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_190_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetSeqOperation* __cctor_b__2_191(::SimpleJSON::JSONNode* a1)
	{
		return ((::RPG::GameCore::TargetSeqOperation*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_980FCF6039272C63___C___CCTOR_B__2_191_OFFSET))(this, a1);
	}
};
