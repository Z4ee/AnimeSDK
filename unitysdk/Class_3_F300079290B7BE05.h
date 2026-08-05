#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_B0798E1629E01207.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/NapBloomQuality.h"
#include "unitysdk/UnityEngine/Rendering/Universal/BloomResolution.h"
#include "unitysdk/UnityEngine/Rendering/Universal/HQBloomMode.h"
#include "unitysdk/UnityEngine/Rendering/Universal/PP_Quality.h"
#include "unitysdk/UnityEngine/Vector4.h"

class Class_1_8A50BFB20D9D2482;
namespace MoleMole { template <typename T> class TwoValue_1; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigNapBloom; }
namespace System { class String; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::NAPRenderPipeline0 { class FlareProfile_NativeSRP; }
namespace UnityEngine::NAPRenderPipeline0 { class VolumeProfile_NativeSRP; }
namespace UnityEngine::Rendering { class Volume; }
namespace UnityEngine::Rendering::Universal { class NapBloom; }

#define CLASS_3_F300079290B7BE05_METHOD_3_1187AE99EAE46FC1_OFFSET UNITYSDK_OFFSET(0x159D6200)
#define CLASS_3_F300079290B7BE05_METHOD_3_1876887CE0AEB832_OFFSET UNITYSDK_OFFSET(0x159DEEE0)
#define CLASS_3_F300079290B7BE05_METHOD_3_1ACBA69F4CA12916_OFFSET UNITYSDK_OFFSET(0x147A7F40)
#define CLASS_3_F300079290B7BE05_METHOD_3_5D293A9B2F9F26D3_OFFSET UNITYSDK_OFFSET(0x147B1DC0)
#define CLASS_3_F300079290B7BE05_METHOD_3_8E02E5B17DA0BB16_OFFSET UNITYSDK_OFFSET(0x147B9200)
#define CLASS_3_F300079290B7BE05_METHOD_3_CEB9BAC28502FF01_OFFSET UNITYSDK_OFFSET(0x159CE550)
#define CLASS_3_F300079290B7BE05_TOSTRING_OFFSET UNITYSDK_OFFSET(0x159E2850)
#define CLASS_3_F300079290B7BE05__CTOR_OFFSET UNITYSDK_OFFSET(0x147A7380)

inline static constexpr unsigned int Class_3_F300079290B7BE05_TypeDefinitionIndex = 47296;

class Class_3_F300079290B7BE05 : public ::Class_2_B0798E1629E01207<::UnityEngine::Rendering::Universal::NapBloom*, ::MoleMole::Config::ConfigNapBloom*>
{
public:
	::MoleMole::TwoValue_1<::System::Single>* Field_3_66; // 0xA8
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_124; // 0xB0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_32; // 0xB8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_6; // 0xC0
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_94; // 0xC8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_138; // 0xD0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_62; // 0xD8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_54; // 0xE0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_110; // 0xE8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_4; // 0xF0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_56; // 0xF8
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_126; // 0x100
	::MoleMole::TwoValue_1<::System::Single>* Field_3_130; // 0x108
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_48; // 0x110
	::MoleMole::TwoValue_1<::System::Single>* Field_3_100; // 0x118
	::MoleMole::TwoValue_1<::System::Single>* Field_3_12; // 0x120
	::MoleMole::TwoValue_1<::UnityEngine::Rendering::Universal::BloomResolution>* Field_3_88; // 0x128
	::MoleMole::TwoValue_1<::System::Single>* Field_3_2; // 0x130
	::MoleMole::TwoValue_1<::System::Single>* Field_3_26; // 0x138
	::MoleMole::TwoValue_1<::System::Single>* Field_3_10; // 0x140
	::MoleMole::TwoValue_1<::System::Single>* Field_3_24; // 0x148
	::MoleMole::TwoValue_1<::System::Single>* Field_3_72; // 0x150
	::MoleMole::TwoValue_1<::System::Single>* Field_3_70; // 0x158
	::MoleMole::TwoValue_1<::System::Single>* Field_3_0; // 0x160
	::MoleMole::TwoValue_1<::UnityEngine::Texture*>* Field_3_122; // 0x168
	::MoleMole::TwoValue_1<::System::Single>* Field_3_84; // 0x170
	::MoleMole::TwoValue_1<::UnityEngine::Rendering::Universal::HQBloomMode>* Field_3_8; // 0x178
	::MoleMole::TwoValue_1<::System::Single>* Field_3_40; // 0x180
	::MoleMole::TwoValue_1<::System::Single>* Field_3_18; // 0x188
	::MoleMole::TwoValue_1<::System::Single>* Field_3_52; // 0x190
	::MoleMole::TwoValue_1<::System::Single>* Field_3_16; // 0x198
	::MoleMole::TwoValue_1<::System::Single>* Field_3_134; // 0x1A0
	::MoleMole::TwoValue_1<::UnityEngine::NAPRenderPipeline0::NapBloomQuality>* Field_3_112; // 0x1A8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_104; // 0x1B0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_38; // 0x1B8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_74; // 0x1C0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_20; // 0x1C8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_64; // 0x1D0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_34; // 0x1D8
	::MoleMole::TwoValue_1<::System::Int32>* Field_3_114; // 0x1E0
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_96; // 0x1E8
	::UnityEngine::NAPRenderPipeline0::FlareProfile_NativeSRP* Field_3_147; // 0x1F0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_80; // 0x1F8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_22; // 0x200
	::MoleMole::TwoValue_1<::System::Single>* Field_3_82; // 0x208
	::MoleMole::TwoValue_1<::System::Single>* Field_3_60; // 0x210
	::MoleMole::TwoValue_1<::System::Single>* Field_3_86; // 0x218
	::MoleMole::TwoValue_1<::System::Single>* Field_3_42; // 0x220
	::MoleMole::TwoValue_1<::System::Single>* Field_3_102; // 0x228
	::MoleMole::TwoValue_1<::System::Single>* Field_3_30; // 0x230
	::MoleMole::TwoValue_1<::System::Single>* Field_3_36; // 0x238
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_98; // 0x240
	::MoleMole::TwoValue_1<::System::Single>* Field_3_58; // 0x248
	::MoleMole::TwoValue_1<::System::Int32>* Field_3_142; // 0x250
	::MoleMole::TwoValue_1<::UnityEngine::Vector4>* Field_3_106; // 0x258
	::MoleMole::TwoValue_1<::System::Single>* Field_3_44; // 0x260
	::UnityEngine::Texture* Field_3_121; // 0x268
	::MoleMole::TwoValue_1<::System::Single>* Field_3_28; // 0x270
	::MoleMole::TwoValue_1<::UnityEngine::Vector4>* Field_3_118; // 0x278
	::MoleMole::TwoValue_1<::System::Single>* Field_3_136; // 0x280
	::MoleMole::TwoValue_1<::System::Single>* Field_3_78; // 0x288
	::MoleMole::TwoValue_1<::System::Single>* Field_3_92; // 0x290
	::MoleMole::TwoValue_1<::System::Single>* Field_3_50; // 0x298
	::MoleMole::TwoValue_1<::System::Single>* Field_3_46; // 0x2A0
	::MoleMole::TwoValue_1<::UnityEngine::NAPRenderPipeline0::FlareProfile_NativeSRP*>* Field_3_140; // 0x2A8
	::MoleMole::TwoValue_1<::System::Int32>* Field_3_116; // 0x2B0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_146; // 0x2B8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_68; // 0x2C0
	::MoleMole::TwoValue_1<::UnityEngine::Color>* Field_3_90; // 0x2C8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_132; // 0x2D0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_128; // 0x2D8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_108; // 0x2E0
	::MoleMole::TwoValue_1<::UnityEngine::Rendering::Universal::PP_Quality>* Field_3_14; // 0x2E8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_76; // 0x2F0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_120; // 0x2F8
	::System::Single Field_3_135; // 0x300
	::UnityEngine::Vector4 Field_3_117; // 0x304
	::System::Single Field_3_9; // 0x314
	::System::Single Field_3_67; // 0x318
	::System::Single Field_3_69; // 0x31C
	::System::Single Field_3_77; // 0x320
	::System::Single Field_3_75; // 0x324
	::System::Single Field_3_57; // 0x328
	::System::Single Field_3_51; // 0x32C
	::System::Single Field_3_133; // 0x330
	::System::Single Field_3_59; // 0x334
	::System::Single Field_3_79; // 0x338
	::System::Single Field_3_23; // 0x33C
	::System::Single Field_3_127; // 0x340
	::UnityEngine::Rendering::Universal::BloomResolution Field_3_95; // 0x344
	::System::Single Field_3_85; // 0x348
	::System::Single Field_3_129; // 0x34C
	::System::Single Field_3_61; // 0x350
	::System::Single Field_3_143; // 0x354
	::System::Single Field_3_71; // 0x358
	::System::Boolean Field_3_93; // 0x35C
	::System::Boolean Field_3_97; // 0x35D
	::System::Boolean Field_3_131; // 0x35E
	::System::Boolean Field_3_125; // 0x35F
	::System::Single Field_3_17; // 0x360
	::System::Single Field_3_33; // 0x364
	::System::Single Field_3_5; // 0x368
	::System::Single Field_3_139; // 0x36C
	::System::Single Field_3_29; // 0x370
	::System::Single Field_3_83; // 0x374
	::System::Int32 Field_3_141; // 0x378
	::System::Single Field_3_25; // 0x37C
	::System::Single Field_3_99; // 0x380
	::System::Boolean Field_3_103; // 0x384
	::System::Boolean Field_3_55; // 0x385
	::System::Single Field_3_1; // 0x388
	::System::Single Field_3_41; // 0x38C
	::System::Int32 Field_3_123; // 0x390
	::UnityEngine::Vector4 Field_3_105; // 0x394
	::System::Single Field_3_101; // 0x3A4
	::System::Single Field_3_43; // 0x3A8
	::System::Single Field_3_37; // 0x3AC
	::System::Single Field_3_7; // 0x3B0
	::System::Single Field_3_111; // 0x3B4
	::System::Single Field_3_65; // 0x3B8
	::System::Single Field_3_35; // 0x3BC
	::System::Single Field_3_145; // 0x3C0
	::System::Int32 Field_3_113; // 0x3C4
	::System::Single Field_3_45; // 0x3C8
	::System::Single Field_3_87; // 0x3CC
	::System::Single Field_3_63; // 0x3D0
	::System::Single Field_3_53; // 0x3D4
	::System::Single Field_3_73; // 0x3D8
	::UnityEngine::Color Field_3_89; // 0x3DC
	::UnityEngine::NAPRenderPipeline0::NapBloomQuality Field_3_119; // 0x3EC
	::System::Single Field_3_81; // 0x3F0
	::System::Single Field_3_11; // 0x3F4
	::System::Single Field_3_137; // 0x3F8
	::System::Single Field_3_115; // 0x3FC
	::System::Single Field_3_47; // 0x400
	::System::Single Field_3_109; // 0x404
	::System::Single Field_3_107; // 0x408
	::System::Single Field_3_91; // 0x40C
	::System::Single Field_3_49; // 0x410
	::System::Single Field_3_19; // 0x414
	::UnityEngine::Rendering::Universal::PP_Quality Field_3_13; // 0x418
	::System::Single Field_3_27; // 0x41C
	::System::Single Field_3_21; // 0x420
	::UnityEngine::Rendering::Universal::HQBloomMode Field_3_15; // 0x424
	::System::Single Field_3_31; // 0x428
	::System::Single Field_3_39; // 0x42C

	::System::Void _ctor(::System::String* a1, ::MoleMole::Config::ConfigNapBloom* a2, ::UnityEngine::Rendering::Volume* a3, ::MoleMole::Battle::Entity* a4, ::Class_1_8A50BFB20D9D2482* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Config::ConfigNapBloom*, ::UnityEngine::Rendering::Volume*, ::MoleMole::Battle::Entity*, ::Class_1_8A50BFB20D9D2482*))((::PBYTE)hIl2Cpp + CLASS_3_F300079290B7BE05__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_1ACBA69F4CA12916(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::NapBloom* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::NapBloom*))((::PBYTE)hIl2Cpp + CLASS_3_F300079290B7BE05_METHOD_3_1ACBA69F4CA12916_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_5D293A9B2F9F26D3(::UnityEngine::Rendering::Universal::NapBloom* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::NapBloom*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_F300079290B7BE05_METHOD_3_5D293A9B2F9F26D3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_8E02E5B17DA0BB16(::UnityEngine::Rendering::Universal::NapBloom* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::NapBloom*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_F300079290B7BE05_METHOD_3_8E02E5B17DA0BB16_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_CEB9BAC28502FF01(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::NapBloom* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::NapBloom*))((::PBYTE)hIl2Cpp + CLASS_3_F300079290B7BE05_METHOD_3_CEB9BAC28502FF01_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_1187AE99EAE46FC1(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::NapBloom* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::NapBloom*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_F300079290B7BE05_METHOD_3_1187AE99EAE46FC1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_1876887CE0AEB832(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::NapBloom* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::NapBloom*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_F300079290B7BE05_METHOD_3_1876887CE0AEB832_OFFSET))(this, a1, a2, a3);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F300079290B7BE05_TOSTRING_OFFSET))(this);
	}
};
