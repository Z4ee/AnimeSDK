#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_9201EB3268983C13.h"
#include "unitysdk/Class_4_121B841D6D63A1D3_19_Struct_2_52AD02145F5FCE3A_26.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/VREffects_NativeSRP_ColorBlendMethod.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Rendering/Universal/ChannelMapping.h"
#include "unitysdk/UnityEngine/Rendering/Universal/DistanceDistortionBlendMode.h"
#include "unitysdk/UnityEngine/Rendering/Universal/ScanMaskType.h"
#include "unitysdk/UnityEngine/Rendering/Universal/ScanType.h"
#include "unitysdk/UnityEngine/Rendering/Universal/ScanlineBlendMode.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace MoleMole::Timeline { class VREffectsBehaviour; }
namespace System { class Object; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering::Universal { class VREffects; }

#define CLASS_4_121B841D6D63A1D3_19_METHOD_4_045F1AAB54606068_OFFSET UNITYSDK_OFFSET(0x19524790)
#define CLASS_4_121B841D6D63A1D3_19_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x1953A7F0)
#define CLASS_4_121B841D6D63A1D3_19_METHOD_4_71FCF7896B017C4C_OFFSET UNITYSDK_OFFSET(0x19527B60)
#define CLASS_4_121B841D6D63A1D3_19_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x1953A800)
#define CLASS_4_121B841D6D63A1D3_19_METHOD_4_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x1953A7E0)
#define CLASS_4_121B841D6D63A1D3_19_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x195268A0)
#define CLASS_4_121B841D6D63A1D3_19_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x19533530)
#define CLASS_4_121B841D6D63A1D3_19__CTOR_OFFSET UNITYSDK_OFFSET(0x1953A4F0)

inline static constexpr unsigned int Class_4_121B841D6D63A1D3_19_TypeDefinitionIndex = 74895;

class Class_4_121B841D6D63A1D3_19 : public ::Class_3_9201EB3268983C13<::UnityEngine::Rendering::Universal::VREffects*, ::MoleMole::Timeline::VREffectsBehaviour*>
{
public:
	::UnityEngine::Texture* Field_4_218; // 0x38
	::UnityEngine::Texture* Field_4_40; // 0x40
	::Class_4_121B841D6D63A1D3_19_Struct_2_52AD02145F5FCE3A_26 Field_4_0; // 0x48
	::UnityEngine::Texture* Field_4_254; // 0x5A8
	::UnityEngine::Texture* Field_4_178; // 0x5B0
	::UnityEngine::Texture* Field_4_192; // 0x5B8
	::UnityEngine::Texture* Field_4_220; // 0x5C0
	::System::Boolean Field_4_73; // 0x5C8
	::System::Boolean Field_4_153; // 0x5C9
	::System::Boolean Field_4_237; // 0x5CA
	::System::Boolean Field_4_16; // 0x5CB
	::System::Single Field_4_174; // 0x5CC
	::System::Boolean Field_4_205; // 0x5D0
	::System::Boolean Field_4_269; // 0x5D1
	::System::Boolean Field_4_45; // 0x5D2
	::System::Boolean Field_4_99; // 0x5D3
	::System::Single Field_4_226; // 0x5D4
	::System::Boolean Field_4_252; // 0x5D8
	::System::Boolean Field_4_117; // 0x5D9
	::System::Boolean Field_4_2; // 0x5DA
	::System::Boolean Field_4_149; // 0x5DB
	::System::Single Field_4_66; // 0x5DC
	::System::Boolean Field_4_37; // 0x5E0
	::System::Boolean Field_4_211; // 0x5E1
	::System::Boolean Field_4_102; // 0x5E2
	::System::Boolean Field_4_249; // 0x5E3
	::System::Boolean Field_4_147; // 0x5E4
	::System::Boolean Field_4_25; // 0x5E5
	::UnityEngine::Color Field_4_86; // 0x5E8
	::UnityEngine::Color Field_4_46; // 0x5F8
	::System::Boolean Field_4_195; // 0x608
	::System::Boolean Field_4_17; // 0x609
	::System::Boolean Field_4_101; // 0x60A
	::System::Boolean Field_4_111; // 0x60B
	::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod Field_4_136; // 0x60C
	::System::Single Field_4_98; // 0x610
	::System::Boolean Field_4_13; // 0x614
	::System::Boolean Field_4_59; // 0x615
	::System::Boolean Field_4_217; // 0x616
	::System::Boolean Field_4_181; // 0x617
	::System::Single Field_4_144; // 0x618
	::System::Single Field_4_238; // 0x61C
	::UnityEngine::Color Field_4_164; // 0x620
	::System::Single Field_4_156; // 0x630
	::System::Boolean Field_4_29; // 0x634
	::System::Boolean Field_4_223; // 0x635
	::System::Boolean Field_4_49; // 0x636
	::System::Boolean Field_4_63; // 0x637
	::UnityEngine::Color Field_4_222; // 0x638
	::System::Single Field_4_142; // 0x648
	::System::Single Field_4_266; // 0x64C
	::System::Boolean Field_4_262; // 0x650
	::System::Boolean Field_4_133; // 0x651
	::System::Boolean Field_4_229; // 0x652
	::System::Boolean Field_4_23; // 0x653
	::System::Single Field_4_120; // 0x654
	::System::Boolean Field_4_163; // 0x658
	::System::Boolean Field_4_27; // 0x659
	::System::Boolean Field_4_203; // 0x65A
	::System::Boolean Field_4_50; // 0x65B
	::System::Single Field_4_114; // 0x65C
	::System::Boolean Field_4_15; // 0x660
	::System::Boolean Field_4_41; // 0x661
	::System::Boolean Field_4_209; // 0x662
	::System::Boolean Field_4_95; // 0x663
	::UnityEngine::Vector2 Field_4_42; // 0x664
	::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod Field_4_148; // 0x66C
	::UnityEngine::Vector2 Field_4_180; // 0x670
	::System::Single Field_4_150; // 0x678
	::System::Single Field_4_28; // 0x67C
	::System::Single Field_4_248; // 0x680
	::System::Boolean Field_4_109; // 0x684
	::System::Boolean Field_4_135; // 0x685
	::System::Boolean Field_4_231; // 0x686
	::System::Boolean Field_4_103; // 0x687
	::System::Single Field_4_138; // 0x688
	::System::Boolean Field_4_216; // 0x68C
	::System::Boolean Field_4_193; // 0x68D
	::System::Boolean Field_4_5; // 0x68E
	::System::Boolean Field_4_115; // 0x68F
	::System::Boolean Field_4_213; // 0x690
	::System::Boolean Field_4_57; // 0x691
	::System::Boolean Field_4_11; // 0x692
	::System::Boolean Field_4_255; // 0x693
	::System::Single Field_4_118; // 0x694
	::UnityEngine::Rendering::Universal::DistanceDistortionBlendMode Field_4_246; // 0x698
	::System::Single Field_4_152; // 0x69C
	::System::Single Field_4_12; // 0x6A0
	::System::Single Field_4_228; // 0x6A4
	::UnityEngine::Vector2 Field_4_186; // 0x6A8
	::System::Single Field_4_242; // 0x6B0
	::System::Single Field_4_32; // 0x6B4
	::System::Single Field_4_62; // 0x6B8
	::System::Boolean Field_4_137; // 0x6BC
	::System::Boolean Field_4_155; // 0x6BD
	::System::Boolean Field_4_167; // 0x6BE
	::System::Boolean Field_4_65; // 0x6BF
	::System::Single Field_4_240; // 0x6C0
	::System::Boolean Field_4_197; // 0x6C4
	::System::Boolean Field_4_165; // 0x6C5
	::System::Boolean Field_4_19; // 0x6C6
	::System::Boolean Field_4_247; // 0x6C7
	::System::Boolean Field_4_55; // 0x6C8
	::System::Boolean Field_4_24; // 0x6C9
	::System::Boolean Field_4_53; // 0x6CA
	::System::Boolean Field_4_89; // 0x6CB
	::UnityEngine::Rendering::Universal::ChannelMapping Field_4_194; // 0x6CC
	::System::Single Field_4_82; // 0x6D0
	::System::Boolean Field_4_7; // 0x6D4
	::System::Boolean Field_4_187; // 0x6D5
	::System::Boolean Field_4_176; // 0x6D6
	::System::Boolean Field_4_127; // 0x6D7
	::UnityEngine::Color Field_4_84; // 0x6D8
	::System::Single Field_4_212; // 0x6E8
	::UnityEngine::Color Field_4_54; // 0x6EC
	::System::Boolean Field_4_235; // 0x6FC
	::System::Boolean Field_4_131; // 0x6FD
	::System::Boolean Field_4_31; // 0x6FE
	::System::Boolean Field_4_107; // 0x6FF
	::UnityEngine::Vector4 Field_4_258; // 0x700
	::UnityEngine::Rendering::Universal::ScanMaskType Field_4_190; // 0x710
	::System::Single Field_4_204; // 0x714
	::UnityEngine::Vector2 Field_4_68; // 0x718
	::UnityEngine::Color Field_4_158; // 0x720
	::UnityEngine::Vector3 Field_4_250; // 0x730
	::System::Single Field_4_244; // 0x73C
	::System::Boolean Field_4_157; // 0x740
	::System::Boolean Field_4_22; // 0x741
	::System::Boolean Field_4_191; // 0x742
	::System::Boolean Field_4_257; // 0x743
	::UnityEngine::Rendering::Universal::ScanlineBlendMode Field_4_260; // 0x744
	::System::Single Field_4_130; // 0x748
	::System::Boolean Field_4_271; // 0x74C
	::System::Boolean Field_4_81; // 0x74D
	::System::Boolean Field_4_3; // 0x74E
	::System::Boolean Field_4_185; // 0x74F
	::System::Single Field_4_270; // 0x750
	::System::Boolean Field_4_141; // 0x754
	::System::Boolean Field_4_151; // 0x755
	::System::Boolean Field_4_159; // 0x756
	::System::Boolean Field_4_219; // 0x757
	::UnityEngine::Color Field_4_134; // 0x758
	::System::Boolean Field_4_21; // 0x768
	::System::Boolean Field_4_67; // 0x769
	::System::Boolean Field_4_265; // 0x76A
	::System::Boolean Field_4_169; // 0x76B
	::System::Boolean Field_4_175; // 0x76C
	::System::Boolean Field_4_93; // 0x76D
	::System::Boolean Field_4_39; // 0x76E
	::System::Boolean Field_4_143; // 0x76F
	::System::Single Field_4_116; // 0x770
	::UnityEngine::Color Field_4_172; // 0x774
	::System::Single Field_4_272; // 0x784
	::System::Single Field_4_18; // 0x788
	::System::Boolean Field_4_61; // 0x78C
	::System::Boolean Field_4_214; // 0x78D
	::System::Boolean Field_4_145; // 0x78E
	::System::Boolean Field_4_139; // 0x78F
	::System::Single Field_4_100; // 0x790
	::UnityEngine::Color Field_4_168; // 0x794
	::System::Single Field_4_92; // 0x7A4
	::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod Field_4_112; // 0x7A8
	::System::Single Field_4_268; // 0x7AC
	::System::Single Field_4_94; // 0x7B0
	::System::Single Field_4_78; // 0x7B4
	::System::Single Field_4_88; // 0x7B8
	::System::Single Field_4_208; // 0x7BC
	::System::Boolean Field_4_183; // 0x7C0
	::System::Boolean Field_4_125; // 0x7C1
	::System::Boolean Field_4_105; // 0x7C2
	::System::Boolean Field_4_97; // 0x7C3
	::UnityEngine::Color Field_4_56; // 0x7C4
	::UnityEngine::Vector3 Field_4_236; // 0x7D4
	::UnityEngine::Rendering::Universal::ScanType Field_4_48; // 0x7E0
	::UnityEngine::Vector2 Field_4_170; // 0x7E4
	::UnityEngine::Color Field_4_10; // 0x7EC
	::System::Boolean Field_4_161; // 0x7FC
	::System::Boolean Field_4_69; // 0x7FD
	::System::Boolean Field_4_233; // 0x7FE
	::System::Boolean Field_4_274; // 0x7FF
	::System::Single Field_4_202; // 0x800
	::UnityEngine::Vector2 Field_4_184; // 0x804
	::UnityEngine::Vector2 Field_4_182; // 0x80C
	::System::Single Field_4_14; // 0x814
	::System::Boolean Field_4_8; // 0x818
	::System::Boolean Field_4_261; // 0x819
	::System::Boolean Field_4_129; // 0x81A
	::System::Boolean Field_4_1; // 0x81B
	::System::Single Field_4_224; // 0x81C
	::System::Single Field_4_126; // 0x820
	::UnityEngine::Vector2 Field_4_198; // 0x824
	::System::Single Field_4_90; // 0x82C
	::UnityEngine::Color Field_4_146; // 0x830
	::System::Boolean Field_4_253; // 0x840
	::System::Boolean Field_4_43; // 0x841
	::System::Boolean Field_4_87; // 0x842
	::System::Boolean Field_4_189; // 0x843
	::System::Single Field_4_6; // 0x844
	::System::Boolean Field_4_77; // 0x848
	::System::Boolean Field_4_263; // 0x849
	::System::Boolean Field_4_215; // 0x84A
	::System::Boolean Field_4_177; // 0x84B
	::System::Single Field_4_30; // 0x84C
	::System::Boolean Field_4_38; // 0x850
	::System::Boolean Field_4_33; // 0x851
	::System::Boolean Field_4_35; // 0x852
	::System::Boolean Field_4_75; // 0x853
	::System::Single Field_4_34; // 0x854
	::System::Single Field_4_52; // 0x858
	::System::Single Field_4_154; // 0x85C
	::UnityEngine::Color Field_4_60; // 0x860
	::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod Field_4_160; // 0x870
	::System::Boolean Field_4_113; // 0x874
	::System::Boolean Field_4_71; // 0x875
	::System::Boolean Field_4_199; // 0x876
	::System::Boolean Field_4_91; // 0x877
	::System::Single Field_4_128; // 0x878
	::System::Single Field_4_132; // 0x87C
	::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod Field_4_124; // 0x880
	::UnityEngine::Vector2 Field_4_200; // 0x884
	::UnityEngine::Vector2 Field_4_196; // 0x88C
	::System::Boolean Field_4_72; // 0x894
	::System::Boolean Field_4_9; // 0x895
	::System::Boolean Field_4_85; // 0x896
	::System::Boolean Field_4_243; // 0x897
	::System::Boolean Field_4_241; // 0x898
	::System::Boolean Field_4_47; // 0x899
	::System::Boolean Field_4_123; // 0x89A
	::System::Boolean Field_4_259; // 0x89B
	::UnityEngine::Color Field_4_36; // 0x89C
	::System::Int32 Field_4_44; // 0x8AC
	::System::Boolean Field_4_201; // 0x8B0
	::System::Boolean Field_4_79; // 0x8B1
	::System::Boolean Field_4_227; // 0x8B2
	::System::Boolean Field_4_83; // 0x8B3
	::UnityEngine::Vector2 Field_4_166; // 0x8B4
	::System::Single Field_4_64; // 0x8BC
	::System::Single Field_4_140; // 0x8C0
	::UnityEngine::Color Field_4_106; // 0x8C4
	::System::Single Field_4_232; // 0x8D4
	::System::Single Field_4_206; // 0x8D8
	::UnityEngine::Color Field_4_122; // 0x8DC
	::System::Boolean Field_4_239; // 0x8EC
	::System::Boolean Field_4_51; // 0x8ED
	::System::Boolean Field_4_119; // 0x8EE
	::System::Boolean Field_4_245; // 0x8EF
	::System::Single Field_4_104; // 0x8F0
	::System::Boolean Field_4_4; // 0x8F4
	::System::Boolean Field_4_173; // 0x8F5
	::System::Boolean Field_4_273; // 0x8F6
	::System::Boolean Field_4_251; // 0x8F7
	::System::Single Field_4_210; // 0x8F8
	::UnityEngine::Vector2 Field_4_188; // 0x8FC
	::UnityEngine::Vector2 Field_4_162; // 0x904
	::System::Single Field_4_76; // 0x90C
	::UnityEngine::Vector3 Field_4_230; // 0x910
	::UnityEngine::Color Field_4_110; // 0x91C
	::System::Single Field_4_26; // 0x92C
	::System::Single Field_4_80; // 0x930
	::System::Single Field_4_96; // 0x934
	::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod Field_4_108; // 0x938
	::System::Boolean Field_4_221; // 0x93C
	::System::Boolean Field_4_207; // 0x93D
	::System::Boolean Field_4_179; // 0x93E
	::System::Boolean Field_4_171; // 0x93F
	::UnityEngine::Color Field_4_58; // 0x940
	::System::Single Field_4_234; // 0x950
	::System::Single Field_4_20; // 0x954
	::System::Single Field_4_70; // 0x958
	::UnityEngine::Vector2 Field_4_264; // 0x95C
	::System::Single Field_4_74; // 0x964
	::System::Boolean Field_4_121; // 0x968
	::System::Boolean Field_4_267; // 0x969
	::System::Boolean Field_4_256; // 0x96A
	::System::Boolean Field_4_225; // 0x96B

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_19__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_045F1AAB54606068()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_19_METHOD_4_045F1AAB54606068_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_19_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_19_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_19_METHOD_4_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_19_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
	}

	::System::Void Method_4_71FCF7896B017C4C(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_19_METHOD_4_71FCF7896B017C4C_OFFSET))(this, a1);
	}

	::System::Void Method_4_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_19_METHOD_4_832295EC279E5994_OFFSET))(this);
	}
};
