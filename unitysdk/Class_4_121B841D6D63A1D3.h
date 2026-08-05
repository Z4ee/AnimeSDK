#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_3E5380ECFB145ED5.h"
#include "unitysdk/Class_4_121B841D6D63A1D3_Struct_2_52AD02145F5FCE3A.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/NapBloomQuality.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Rendering/Universal/BloomResolution.h"
#include "unitysdk/UnityEngine/Rendering/Universal/HQBloomMode.h"
#include "unitysdk/UnityEngine/Rendering/Universal/PP_Quality.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace MoleMole::Timeline { class NAPBloomBehaviour; }
namespace System { class Object; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::NAPRenderPipeline0 { class FlareProfile_NativeSRP; }
namespace UnityEngine::Rendering::Universal { class NapBloom; }

#define CLASS_4_121B841D6D63A1D3_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x13EF9A30)
#define CLASS_4_121B841D6D63A1D3_METHOD_4_659C19FB38867695_OFFSET UNITYSDK_OFFSET(0x13EF0390)
#define CLASS_4_121B841D6D63A1D3_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x153E10F0)
#define CLASS_4_121B841D6D63A1D3_METHOD_4_9D8CB5E47C1952BD_OFFSET UNITYSDK_OFFSET(0x13EEEC80)
#define CLASS_4_121B841D6D63A1D3_METHOD_4_E5E342154D4EA5F5_OFFSET UNITYSDK_OFFSET(0x153E1100)
#define CLASS_4_121B841D6D63A1D3_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x13EEF950)
#define CLASS_4_121B841D6D63A1D3_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x13EF6240)
#define CLASS_4_121B841D6D63A1D3__CTOR_OFFSET UNITYSDK_OFFSET(0x13EF9850)

inline static constexpr unsigned int Class_4_121B841D6D63A1D3_TypeDefinitionIndex = 41451;

class Class_4_121B841D6D63A1D3 : public ::Class_3_3E5380ECFB145ED5<::UnityEngine::Rendering::Universal::NapBloom*, ::MoleMole::Timeline::NAPBloomBehaviour*>
{
public:
	::UnityEngine::NAPRenderPipeline0::FlareProfile_NativeSRP* Field_4_113; // 0x38
	::Class_4_121B841D6D63A1D3_Struct_2_52AD02145F5FCE3A Field_4_1; // 0x40
	::UnityEngine::Texture* Field_4_95; // 0x298
	::System::Int32 Field_4_115; // 0x2A0
	::System::Single Field_4_49; // 0x2A4
	::System::Single Field_4_141; // 0x2A8
	::System::Single Field_4_73; // 0x2AC
	::System::Single Field_4_53; // 0x2B0
	::System::Single Field_4_111; // 0x2B4
	::System::Single Field_4_41; // 0x2B8
	::System::Single Field_4_27; // 0x2BC
	::System::Single Field_4_61; // 0x2C0
	::System::Single Field_4_33; // 0x2C4
	::UnityEngine::Rendering::Universal::PP_Quality Field_4_5; // 0x2C8
	::System::Single Field_4_11; // 0x2CC
	::System::Boolean Field_4_146; // 0x2D0
	::System::Boolean Field_4_102; // 0x2D1
	::System::Boolean Field_4_24; // 0x2D2
	::System::Boolean Field_4_44; // 0x2D3
	::System::Single Field_4_93; // 0x2D4
	::System::Single Field_4_107; // 0x2D8
	::System::Single Field_4_17; // 0x2DC
	::System::Boolean Field_4_130; // 0x2E0
	::System::Boolean Field_4_67; // 0x2E1
	::System::Boolean Field_4_110; // 0x2E2
	::System::Boolean Field_4_6; // 0x2E3
	::System::Boolean Field_4_92; // 0x2E4
	::System::Boolean Field_4_140; // 0x2E5
	::System::Boolean Field_4_86; // 0x2E6
	::System::Boolean Field_4_74; // 0x2E7
	::System::Single Field_4_69; // 0x2E8
	::System::Single Field_4_145; // 0x2EC
	::System::Single Field_4_81; // 0x2F0
	::UnityEngine::Vector4 Field_4_79; // 0x2F4
	::System::Boolean Field_4_138; // 0x304
	::System::Boolean Field_4_26; // 0x305
	::System::Boolean Field_4_119; // 0x306
	::System::Boolean Field_4_46; // 0x307
	::System::Single Field_4_75; // 0x308
	::System::Single Field_4_135; // 0x30C
	::System::Single Field_4_131; // 0x310
	::System::Boolean Field_4_134; // 0x314
	::System::Boolean Field_4_56; // 0x315
	::System::Boolean Field_4_128; // 0x316
	::System::Boolean Field_4_120; // 0x317
	::System::Boolean Field_4_30; // 0x318
	::System::Boolean Field_4_28; // 0x319
	::System::Boolean Field_4_82; // 0x31A
	::System::Boolean Field_4_68; // 0x31B
	::System::Boolean Field_4_97; // 0x31C
	::System::Boolean Field_4_38; // 0x31D
	::System::Boolean Field_4_4; // 0x31E
	::System::Boolean Field_4_32; // 0x31F
	::System::Single Field_4_45; // 0x320
	::System::Single Field_4_35; // 0x324
	::System::Single Field_4_31; // 0x328
	::System::Boolean Field_4_94; // 0x32C
	::System::Boolean Field_4_104; // 0x32D
	::System::Boolean Field_4_64; // 0x32E
	::System::Boolean Field_4_54; // 0x32F
	::System::Single Field_4_83; // 0x330
	::System::Single Field_4_125; // 0x334
	::System::Boolean Field_4_116; // 0x338
	::System::Boolean Field_4_48; // 0x339
	::System::Boolean Field_4_80; // 0x33A
	::System::Boolean Field_4_144; // 0x33B
	::System::Int32 Field_4_87; // 0x33C
	::System::Single Field_4_133; // 0x340
	::System::Single Field_4_101; // 0x344
	::System::Single Field_4_123; // 0x348
	::System::Single Field_4_47; // 0x34C
	::System::Boolean Field_4_106; // 0x350
	::System::Boolean Field_4_100; // 0x351
	::System::Boolean Field_4_52; // 0x352
	::System::Single Field_4_21; // 0x354
	::System::Single Field_4_147; // 0x358
	::System::Single Field_4_143; // 0x35C
	::System::Boolean Field_4_142; // 0x360
	::System::Boolean Field_4_149; // 0x361
	::System::Boolean Field_4_36; // 0x362
	::System::Boolean Field_4_122; // 0x363
	::UnityEngine::Rendering::Universal::BloomResolution Field_4_57; // 0x364
	::System::Single Field_4_25; // 0x368
	::System::Single Field_4_29; // 0x36C
	::System::Single Field_4_77; // 0x370
	::System::Single Field_4_139; // 0x374
	::UnityEngine::Vector4 Field_4_91; // 0x378
	::System::Single Field_4_137; // 0x388
	::System::Boolean Field_4_90; // 0x38C
	::System::Boolean Field_4_132; // 0x38D
	::System::Boolean Field_4_10; // 0x38E
	::System::Boolean Field_4_20; // 0x38F
	::System::Single Field_4_109; // 0x390
	::System::Single Field_4_127; // 0x394
	::UnityEngine::NAPRenderPipeline0::NapBloomQuality Field_4_85; // 0x398
	::System::Boolean Field_4_62; // 0x39C
	::System::Boolean Field_4_40; // 0x39D
	::System::Boolean Field_4_65; // 0x39E
	::System::Boolean Field_4_14; // 0x39F
	::System::Single Field_4_121; // 0x3A0
	::System::Single Field_4_105; // 0x3A4
	::System::Boolean Field_4_18; // 0x3A8
	::System::Boolean Field_4_50; // 0x3A9
	::System::Single Field_4_103; // 0x3AC
	::System::Single Field_4_39; // 0x3B0
	::System::Single Field_4_71; // 0x3B4
	::System::Single Field_4_15; // 0x3B8
	::System::Boolean Field_4_88; // 0x3BC
	::System::Boolean Field_4_108; // 0x3BD
	::System::Boolean Field_4_78; // 0x3BE
	::System::Boolean Field_4_76; // 0x3BF
	::System::Single Field_4_117; // 0x3C0
	::UnityEngine::Color Field_4_59; // 0x3C4
	::System::Boolean Field_4_34; // 0x3D4
	::System::Boolean Field_4_126; // 0x3D5
	::System::Boolean Field_4_58; // 0x3D6
	::System::Boolean Field_4_16; // 0x3D7
	::System::Single Field_4_43; // 0x3D8
	::System::Single Field_4_37; // 0x3DC
	::System::Single Field_4_13; // 0x3E0
	::System::Boolean Field_4_42; // 0x3E4
	::System::Boolean Field_4_136; // 0x3E5
	::System::Boolean Field_4_72; // 0x3E6
	::System::Boolean Field_4_150; // 0x3E7
	::System::Int32 Field_4_89; // 0x3E8
	::System::Single Field_4_129; // 0x3EC
	::System::Boolean Field_4_98; // 0x3F0
	::System::Boolean Field_4_124; // 0x3F1
	::System::Boolean Field_4_114; // 0x3F2
	::System::Boolean Field_4_66; // 0x3F3
	::System::Boolean Field_4_22; // 0x3F4
	::System::Boolean Field_4_70; // 0x3F5
	::System::Boolean Field_4_99; // 0x3F6
	::System::Boolean Field_4_84; // 0x3F7
	::System::Single Field_4_23; // 0x3F8
	::System::Boolean Field_4_8; // 0x3FC
	::System::Boolean Field_4_112; // 0x3FD
	::System::Boolean Field_4_118; // 0x3FE
	::System::Boolean Field_4_12; // 0x3FF
	::System::Single Field_4_51; // 0x400
	::System::Single Field_4_55; // 0x404
	::System::Single Field_4_151; // 0x408
	::UnityEngine::Rendering::Universal::HQBloomMode Field_4_7; // 0x40C
	::System::Boolean Field_4_60; // 0x410
	::System::Boolean Field_4_63; // 0x411
	::System::Boolean Field_4_0; // 0x412
	::System::Boolean Field_4_96; // 0x413
	::System::Single Field_4_9; // 0x414
	::System::Single Field_4_19; // 0x418

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_9D8CB5E47C1952BD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_METHOD_4_9D8CB5E47C1952BD_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_ONPLAYABLEDESTROY_OFFSET))(this, a1);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
	}

	::System::Void Method_4_659C19FB38867695(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_METHOD_4_659C19FB38867695_OFFSET))(this, a1);
	}

	::System::Void Method_4_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_METHOD_4_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_4_E5E342154D4EA5F5(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_121B841D6D63A1D3_METHOD_4_E5E342154D4EA5F5_OFFSET))(this, a1, a2, a3);
	}
};
