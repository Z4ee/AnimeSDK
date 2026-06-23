#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_9201EB3268983C13.h"
#include "unitysdk/Class_4_121B841D6D63A1D3_16_Struct_2_52AD02145F5FCE3A_24.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Rendering/Universal/BlendModes.h"
#include "unitysdk/UnityEngine/Rendering/Universal/ChannelMapping.h"
#include "unitysdk/UnityEngine/Rendering/Universal/UvModes.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace MoleMole::Timeline { class ScreenEffectsBehaviour; }
namespace System { class Object; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering::Universal { class ScreenEffects; }

#define CLASS_4_121B841D6D63A1D3_16_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x18B532E0)
#define CLASS_4_121B841D6D63A1D3_16_METHOD_4_3E06E2491B129B22_OFFSET UNITYSDK_OFFSET(0x18B452B0)
#define CLASS_4_121B841D6D63A1D3_16_METHOD_4_71FCF7896B017C4C_OFFSET UNITYSDK_OFFSET(0x18B46EF0)
#define CLASS_4_121B841D6D63A1D3_16_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x18B532F0)
#define CLASS_4_121B841D6D63A1D3_16_METHOD_4_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x18B532D0)
#define CLASS_4_121B841D6D63A1D3_16_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x18B46300)
#define CLASS_4_121B841D6D63A1D3_16_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x18B4E790)
#define CLASS_4_121B841D6D63A1D3_16__CTOR_OFFSET UNITYSDK_OFFSET(0x18B53170)

inline static constexpr unsigned int Class_4_121B841D6D63A1D3_16_TypeDefinitionIndex = 72106;

class Class_4_121B841D6D63A1D3_16 : public ::Class_3_9201EB3268983C13<::UnityEngine::Rendering::Universal::ScreenEffects*, ::MoleMole::Timeline::ScreenEffectsBehaviour*>
{
public:
	::UnityEngine::Texture* Field_4_50; // 0x38
	::UnityEngine::Texture* Field_4_88; // 0x40
	::UnityEngine::Texture* Field_4_40; // 0x48
	::Class_4_121B841D6D63A1D3_16_Struct_2_52AD02145F5FCE3A_24 Field_4_0; // 0x50
	::UnityEngine::Texture* Field_4_66; // 0x3A8
	::UnityEngine::Texture* Field_4_20; // 0x3B0
	::UnityEngine::Texture* Field_4_106; // 0x3B8
	::System::Boolean Field_4_99; // 0x3C0
	::System::Boolean Field_4_169; // 0x3C1
	::System::Boolean Field_4_131; // 0x3C2
	::System::Boolean Field_4_65; // 0x3C3
	::UnityEngine::Vector2 Field_4_38; // 0x3C4
	::System::Single Field_4_112; // 0x3CC
	::System::Boolean Field_4_49; // 0x3D0
	::System::Boolean Field_4_73; // 0x3D1
	::System::Boolean Field_4_67; // 0x3D2
	::System::Boolean Field_4_26; // 0x3D3
	::System::Single Field_4_132; // 0x3D4
	::System::Boolean Field_4_51; // 0x3D8
	::System::Boolean Field_4_63; // 0x3D9
	::System::Boolean Field_4_45; // 0x3DA
	::System::Boolean Field_4_64; // 0x3DB
	::System::Single Field_4_10; // 0x3DC
	::UnityEngine::Vector3 Field_4_120; // 0x3E0
	::System::Boolean Field_4_77; // 0x3EC
	::System::Boolean Field_4_157; // 0x3ED
	::System::Boolean Field_4_87; // 0x3EE
	::System::Boolean Field_4_117; // 0x3EF
	::System::Single Field_4_80; // 0x3F0
	::System::Single Field_4_148; // 0x3F4
	::UnityEngine::Vector2 Field_4_60; // 0x3F8
	::System::Single Field_4_140; // 0x400
	::System::Int32 Field_4_104; // 0x404
	::UnityEngine::Rendering::Universal::UvModes Field_4_42; // 0x408
	::UnityEngine::Rendering::Universal::ChannelMapping Field_4_56; // 0x40C
	::UnityEngine::Vector4 Field_4_70; // 0x410
	::System::Boolean Field_4_76; // 0x420
	::System::Boolean Field_4_155; // 0x421
	::System::Boolean Field_4_159; // 0x422
	::System::Boolean Field_4_151; // 0x423
	::UnityEngine::Vector2 Field_4_110; // 0x424
	::UnityEngine::Color Field_4_34; // 0x42C
	::UnityEngine::Color Field_4_32; // 0x43C
	::UnityEngine::Vector2 Field_4_74; // 0x44C
	::System::Boolean Field_4_153; // 0x454
	::System::Boolean Field_4_101; // 0x455
	::System::Boolean Field_4_123; // 0x456
	::System::Boolean Field_4_119; // 0x457
	::System::Boolean Field_4_125; // 0x458
	::System::Boolean Field_4_98; // 0x459
	::System::Boolean Field_4_135; // 0x45A
	::System::Boolean Field_4_11; // 0x45B
	::System::Boolean Field_4_121; // 0x45C
	::System::Boolean Field_4_27; // 0x45D
	::System::Boolean Field_4_75; // 0x45E
	::System::Boolean Field_4_35; // 0x45F
	::System::Boolean Field_4_107; // 0x460
	::System::Boolean Field_4_141; // 0x461
	::System::Boolean Field_4_71; // 0x462
	::System::Boolean Field_4_111; // 0x463
	::UnityEngine::Rendering::Universal::BlendModes Field_4_4; // 0x464
	::System::Single Field_4_82; // 0x468
	::System::Single Field_4_126; // 0x46C
	::System::Boolean Field_4_174; // 0x470
	::System::Boolean Field_4_171; // 0x471
	::System::Boolean Field_4_149; // 0x472
	::System::Boolean Field_4_19; // 0x473
	::System::Boolean Field_4_139; // 0x474
	::System::Boolean Field_4_53; // 0x475
	::System::Boolean Field_4_18; // 0x476
	::System::Boolean Field_4_62; // 0x477
	::UnityEngine::Vector4 Field_4_24; // 0x478
	::System::Single Field_4_134; // 0x488
	::UnityEngine::Rendering::Universal::ChannelMapping Field_4_72; // 0x48C
	::System::Boolean Field_4_103; // 0x490
	::System::Boolean Field_4_31; // 0x491
	::System::Boolean Field_4_3; // 0x492
	::System::Boolean Field_4_143; // 0x493
	::System::Boolean Field_4_25; // 0x494
	::System::Boolean Field_4_47; // 0x495
	::System::Boolean Field_4_97; // 0x496
	::System::Boolean Field_4_13; // 0x497
	::System::Single Field_4_142; // 0x498
	::System::Boolean Field_4_29; // 0x49C
	::System::Boolean Field_4_57; // 0x49D
	::System::Boolean Field_4_173; // 0x49E
	::System::Boolean Field_4_59; // 0x49F
	::System::Boolean Field_4_102; // 0x4A0
	::System::Boolean Field_4_116; // 0x4A1
	::System::Boolean Field_4_1; // 0x4A2
	::System::Boolean Field_4_61; // 0x4A3
	::System::Single Field_4_78; // 0x4A4
	::System::Boolean Field_4_93; // 0x4A8
	::System::Boolean Field_4_2; // 0x4A9
	::System::Boolean Field_4_176; // 0x4AA
	::System::Boolean Field_4_43; // 0x4AB
	::System::Single Field_4_6; // 0x4AC
	::System::Boolean Field_4_9; // 0x4B0
	::System::Boolean Field_4_100; // 0x4B1
	::System::Boolean Field_4_85; // 0x4B2
	::System::Boolean Field_4_21; // 0x4B3
	::System::Boolean Field_4_95; // 0x4B4
	::System::Boolean Field_4_89; // 0x4B5
	::System::Boolean Field_4_23; // 0x4B6
	::System::Boolean Field_4_170; // 0x4B7
	::System::Boolean Field_4_33; // 0x4B8
	::System::Boolean Field_4_147; // 0x4B9
	::System::Boolean Field_4_5; // 0x4BA
	::System::Boolean Field_4_166; // 0x4BB
	::System::Single Field_4_158; // 0x4BC
	::UnityEngine::Rendering::Universal::UvModes Field_4_22; // 0x4C0
	::System::Boolean Field_4_163; // 0x4C4
	::System::Boolean Field_4_86; // 0x4C5
	::System::Boolean Field_4_161; // 0x4C6
	::System::Boolean Field_4_109; // 0x4C7
	::UnityEngine::Rendering::Universal::UvModes Field_4_8; // 0x4C8
	::System::Single Field_4_36; // 0x4CC
	::System::Int32 Field_4_122; // 0x4D0
	::UnityEngine::Rendering::Universal::ChannelMapping Field_4_28; // 0x4D4
	::System::Single Field_4_152; // 0x4D8
	::UnityEngine::Vector2 Field_4_48; // 0x4DC
	::System::Single Field_4_16; // 0x4E4
	::System::Single Field_4_128; // 0x4E8
	::System::Boolean Field_4_133; // 0x4EC
	::System::Boolean Field_4_91; // 0x4ED
	::System::Boolean Field_4_175; // 0x4EE
	::System::Boolean Field_4_113; // 0x4EF
	::System::Single Field_4_94; // 0x4F0
	::UnityEngine::Color Field_4_138; // 0x4F4
	::System::Boolean Field_4_145; // 0x504
	::System::Boolean Field_4_137; // 0x505
	::System::Boolean Field_4_79; // 0x506
	::System::Boolean Field_4_17; // 0x507
	::System::Single Field_4_144; // 0x508
	::UnityEngine::Vector2 Field_4_108; // 0x50C
	::System::Single Field_4_136; // 0x514
	::System::Boolean Field_4_129; // 0x518
	::System::Boolean Field_4_55; // 0x519
	::System::Boolean Field_4_167; // 0x51A
	::System::Boolean Field_4_69; // 0x51B
	::System::Boolean Field_4_37; // 0x51C
	::System::Boolean Field_4_41; // 0x51D
	::System::Boolean Field_4_127; // 0x51E
	::System::Boolean Field_4_7; // 0x51F
	::System::Boolean Field_4_115; // 0x520
	::System::Boolean Field_4_81; // 0x521
	::System::Boolean Field_4_15; // 0x522
	::System::Boolean Field_4_118; // 0x523
	::UnityEngine::Color Field_4_146; // 0x524
	::UnityEngine::Rendering::Universal::UvModes Field_4_52; // 0x534
	::System::Single Field_4_14; // 0x538
	::UnityEngine::Vector2 Field_4_96; // 0x53C
	::System::Single Field_4_168; // 0x544
	::UnityEngine::Rendering::Universal::UvModes Field_4_68; // 0x548
	::System::Single Field_4_150; // 0x54C
	::System::Single Field_4_84; // 0x550
	::UnityEngine::Rendering::Universal::ChannelMapping Field_4_30; // 0x554
	::System::Single Field_4_124; // 0x558
	::System::Single Field_4_172; // 0x55C
	::UnityEngine::Vector4 Field_4_92; // 0x560
	::UnityEngine::Color Field_4_164; // 0x570
	::UnityEngine::Vector4 Field_4_54; // 0x580
	::System::Single Field_4_114; // 0x590
	::UnityEngine::Color Field_4_162; // 0x594
	::System::Single Field_4_160; // 0x5A4
	::System::Single Field_4_156; // 0x5A8
	::System::Single Field_4_58; // 0x5AC
	::System::Single Field_4_12; // 0x5B0
	::UnityEngine::Rendering::Universal::UvModes Field_4_90; // 0x5B4
	::System::Boolean Field_4_105; // 0x5B8
	::System::Boolean Field_4_165; // 0x5B9
	::System::Boolean Field_4_39; // 0x5BA
	::System::Boolean Field_4_83; // 0x5BB
	::UnityEngine::Color Field_4_130; // 0x5BC
	::UnityEngine::Color Field_4_154; // 0x5CC
	::UnityEngine::Rendering::Universal::ChannelMapping Field_4_46; // 0x5DC
	::UnityEngine::Vector4 Field_4_44; // 0x5E0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_16__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_3E06E2491B129B22()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_16_METHOD_4_3E06E2491B129B22_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_16_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_16_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_71FCF7896B017C4C(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_16_METHOD_4_71FCF7896B017C4C_OFFSET))(this, a1);
	}

	::System::Void Method_4_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_16_METHOD_4_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_16_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
	}

	::System::Void Method_4_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_16_METHOD_4_832295EC279E5994_OFFSET))(this);
	}
};
