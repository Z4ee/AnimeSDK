#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_CCFE785C3F41C676.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Rendering/Universal/BlendModes.h"
#include "unitysdk/UnityEngine/Rendering/Universal/ChannelMapping.h"
#include "unitysdk/UnityEngine/Rendering/Universal/UvModes.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

class Class_1_8A50BFB20D9D2482;
namespace MoleMole { template <typename T> class TwoValue_1; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigEntityScreenEffect; }
namespace MoleMole::Config { class ConfigPosRot; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::NAPRenderPipeline0 { class VolumeProfile_NativeSRP; }
namespace UnityEngine::Rendering { class Volume; }
namespace UnityEngine::Rendering::Universal { class ScreenEffects; }

#define CLASS_3_295661F441BBCF68_METHOD_3_1966BC60ACBE9F6A_OFFSET UNITYSDK_OFFSET(0x1A17A5F0)
#define CLASS_3_295661F441BBCF68_METHOD_3_2EA24B012C3B3D08_1_OFFSET UNITYSDK_OFFSET(0x1A18F840)
#define CLASS_3_295661F441BBCF68_METHOD_3_2EA24B012C3B3D08_OFFSET UNITYSDK_OFFSET(0x1A16F180)
#define CLASS_3_295661F441BBCF68_METHOD_3_42C5E0514DA877A6_OFFSET UNITYSDK_OFFSET(0x15D07450)
#define CLASS_3_295661F441BBCF68_METHOD_3_6D44C03F490A953F_OFFSET UNITYSDK_OFFSET(0x15D07550)
#define CLASS_3_295661F441BBCF68_METHOD_3_997ABD4B45F1A0E9_OFFSET UNITYSDK_OFFSET(0x1A198CA0)
#define CLASS_3_295661F441BBCF68_METHOD_3_AF605B1FCAA63016_OFFSET UNITYSDK_OFFSET(0x1A1836C0)
#define CLASS_3_295661F441BBCF68_METHOD_3_B9D8FD15D18938A0_OFFSET UNITYSDK_OFFSET(0x15D07760)
#define CLASS_3_295661F441BBCF68_METHOD_3_CAD6F2AC6699EAB4_OFFSET UNITYSDK_OFFSET(0x15D07650)
#define CLASS_3_295661F441BBCF68_METHOD_3_EC8400E1F9FDF921_OFFSET UNITYSDK_OFFSET(0x1A1A3450)
#define CLASS_3_295661F441BBCF68_TOSTRING_OFFSET UNITYSDK_OFFSET(0x15D02FF0)
#define CLASS_3_295661F441BBCF68__CTOR_OFFSET UNITYSDK_OFFSET(0x1A16E350)

inline static constexpr unsigned int Class_3_295661F441BBCF68_TypeDefinitionIndex = 62584;

class Class_3_295661F441BBCF68 : public ::Class_2_CCFE785C3F41C676<::UnityEngine::Rendering::Universal::ScreenEffects*, ::MoleMole::Config::ConfigEntityScreenEffect*>
{
public:
	::MoleMole::TwoValue_1<::UnityEngine::Vector2>* Field_3_46; // 0xA8
	::MoleMole::TwoValue_1<::UnityEngine::Vector3>* Field_3_120; // 0xB0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_112; // 0xB8
	::MoleMole::TwoValue_1<::UnityEngine::Rendering::Universal::ChannelMapping>* Field_3_44; // 0xC0
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_60; // 0xC8
	::MoleMole::TwoValue_1<::UnityEngine::Texture*>* Field_3_86; // 0xD0
	::MoleMole::TwoValue_1<::UnityEngine::Rendering::Universal::UvModes>* Field_3_66; // 0xD8
	::MoleMole::TwoValue_1<::UnityEngine::Rendering::Universal::ChannelMapping>* Field_3_28; // 0xE0
	::MoleMole::TwoValue_1<::UnityEngine::Rendering::Universal::UvModes>* Field_3_6; // 0xE8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_82; // 0xF0
	::MoleMole::TwoValue_1<::UnityEngine::Color>* Field_3_138; // 0xF8
	::MoleMole::TwoValue_1<::UnityEngine::Color>* Field_3_146; // 0x100
	::MoleMole::TwoValue_1<::System::Single>* Field_3_160; // 0x108
	::MoleMole::TwoValue_1<::System::Single>* Field_3_78; // 0x110
	::MoleMole::TwoValue_1<::System::Single>* Field_3_156; // 0x118
	::MoleMole::TwoValue_1<::UnityEngine::Color>* Field_3_162; // 0x120
	::MoleMole::TwoValue_1<::UnityEngine::Rendering::Universal::ChannelMapping>* Field_3_70; // 0x128
	::MoleMole::TwoValue_1<::UnityEngine::Color>* Field_3_32; // 0x130
	::MoleMole::TwoValue_1<::System::Single>* Field_3_14; // 0x138
	::MoleMole::TwoValue_1<::System::Single>* Field_3_80; // 0x140
	::MoleMole::TwoValue_1<::System::Single>* Field_3_144; // 0x148
	::MoleMole::TwoValue_1<::UnityEngine::Vector2>* Field_3_108; // 0x150
	::MoleMole::TwoValue_1<::UnityEngine::Rendering::Universal::UvModes>* Field_3_50; // 0x158
	::MoleMole::TwoValue_1<::UnityEngine::Texture*>* Field_3_64; // 0x160
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_170; // 0x168
	::MoleMole::TwoValue_1<::System::Single>* Field_3_8; // 0x170
	::MoleMole::TwoValue_1<::System::Single>* Field_3_76; // 0x178
	::MoleMole::TwoValue_1<::System::Single>* Field_3_126; // 0x180
	::MoleMole::TwoValue_1<::System::Single>* Field_3_168; // 0x188
	::MoleMole::TwoValue_1<::System::Single>* Field_3_128; // 0x190
	::MoleMole::TwoValue_1<::System::Single>* Field_3_172; // 0x198
	::MoleMole::TwoValue_1<::UnityEngine::Vector4>* Field_3_42; // 0x1A0
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_100; // 0x1A8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_34; // 0x1B0
	::MoleMole::Battle::Entity* Field_3_174; // 0x1B8
	::MoleMole::TwoValue_1<::UnityEngine::Vector2>* Field_3_94; // 0x1C0
	::UnityEngine::Texture* Field_3_39; // 0x1C8
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_96; // 0x1D0
	::MoleMole::TwoValue_1<::UnityEngine::Vector2>* Field_3_106; // 0x1D8
	::MoleMole::TwoValue_1<::UnityEngine::Vector4>* Field_3_22; // 0x1E0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_142; // 0x1E8
	::MoleMole::TwoValue_1<::UnityEngine::Vector2>* Field_3_58; // 0x1F0
	::UnityEngine::Texture* Field_3_105; // 0x1F8
	::MoleMole::TwoValue_1<::UnityEngine::Vector4>* Field_3_68; // 0x200
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_24; // 0x208
	::MoleMole::TwoValue_1<::System::Single>* Field_3_92; // 0x210
	::MoleMole::TwoValue_1<::System::Single>* Field_3_150; // 0x218
	::MoleMole::TwoValue_1<::System::Single>* Field_3_136; // 0x220
	::MoleMole::TwoValue_1<::UnityEngine::Color>* Field_3_164; // 0x228
	::MoleMole::TwoValue_1<::System::Single>* Field_3_140; // 0x230
	::MoleMole::TwoValue_1<::System::Single>* Field_3_124; // 0x238
	::MoleMole::TwoValue_1<::System::Single>* Field_3_12; // 0x240
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_118; // 0x248
	::MoleMole::TwoValue_1<::UnityEngine::Vector4>* Field_3_90; // 0x250
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_0; // 0x258
	::UnityEngine::Texture* Field_3_65; // 0x260
	::MoleMole::TwoValue_1<::System::Single>* Field_3_134; // 0x268
	::UnityEngine::Texture* Field_3_49; // 0x270
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_116; // 0x278
	::MoleMole::TwoValue_1<::System::Single>* Field_3_132; // 0x280
	::MoleMole::TwoValue_1<::UnityEngine::Vector2>* Field_3_72; // 0x288
	::MoleMole::TwoValue_1<::UnityEngine::Texture*>* Field_3_104; // 0x290
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_114; // 0x298
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_84; // 0x2A0
	::MoleMole::TwoValue_1<::UnityEngine::Color>* Field_3_30; // 0x2A8
	::MoleMole::TwoValue_1<::UnityEngine::Rendering::Universal::UvModes>* Field_3_20; // 0x2B0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_148; // 0x2B8
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_98; // 0x2C0
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_62; // 0x2C8
	::MoleMole::TwoValue_1<::System::Int32>* Field_3_122; // 0x2D0
	::UnityEngine::Texture* Field_3_19; // 0x2D8
	::MoleMole::TwoValue_1<::UnityEngine::Vector2>* Field_3_36; // 0x2E0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_4; // 0x2E8
	::MoleMole::TwoValue_1<::System::Int32>* Field_3_102; // 0x2F0
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_74; // 0x2F8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_158; // 0x300
	::MoleMole::TwoValue_1<::System::Single>* Field_3_152; // 0x308
	::UnityEngine::Texture* Field_3_87; // 0x310
	::MoleMole::TwoValue_1<::UnityEngine::Rendering::Universal::ChannelMapping>* Field_3_26; // 0x318
	::MoleMole::TwoValue_1<::UnityEngine::Rendering::Universal::UvModes>* Field_3_88; // 0x320
	::MoleMole::TwoValue_1<::UnityEngine::Rendering::Universal::UvModes>* Field_3_40; // 0x328
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_166; // 0x330
	::MoleMole::TwoValue_1<::UnityEngine::Vector4>* Field_3_52; // 0x338
	::MoleMole::TwoValue_1<::UnityEngine::Color>* Field_3_130; // 0x340
	::MoleMole::TwoValue_1<::UnityEngine::Texture*>* Field_3_18; // 0x348
	::MoleMole::TwoValue_1<::UnityEngine::Texture*>* Field_3_38; // 0x350
	::MoleMole::TwoValue_1<::UnityEngine::Color>* Field_3_154; // 0x358
	::MoleMole::TwoValue_1<::UnityEngine::Rendering::Universal::BlendModes>* Field_3_2; // 0x360
	::MoleMole::TwoValue_1<::UnityEngine::Texture*>* Field_3_48; // 0x368
	::MoleMole::TwoValue_1<::System::Single>* Field_3_56; // 0x370
	::MoleMole::TwoValue_1<::UnityEngine::Rendering::Universal::ChannelMapping>* Field_3_54; // 0x378
	::MoleMole::TwoValue_1<::System::Single>* Field_3_10; // 0x380
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_16; // 0x388
	::MoleMole::TwoValue_1<::System::Single>* Field_3_110; // 0x390
	::UnityEngine::Vector2 Field_3_107; // 0x398
	::System::Single Field_3_153; // 0x3A0
	::UnityEngine::Color Field_3_33; // 0x3A4
	::UnityEngine::Rendering::Universal::ChannelMapping Field_3_27; // 0x3B4
	::UnityEngine::Vector4 Field_3_43; // 0x3B8
	::System::Single Field_3_5; // 0x3C8
	::System::Single Field_3_125; // 0x3CC
	::System::Int32 Field_3_123; // 0x3D0
	::UnityEngine::Color Field_3_165; // 0x3D4
	::UnityEngine::Rendering::Universal::ChannelMapping Field_3_71; // 0x3E4
	::UnityEngine::Rendering::Universal::BlendModes Field_3_3; // 0x3E8
	::System::Single Field_3_11; // 0x3EC
	::System::Single Field_3_145; // 0x3F0
	::System::Single Field_3_57; // 0x3F4
	::System::Single Field_3_93; // 0x3F8
	::System::Single Field_3_135; // 0x3FC
	::UnityEngine::Vector2 Field_3_47; // 0x400
	::System::Single Field_3_143; // 0x408
	::System::Single Field_3_77; // 0x40C
	::UnityEngine::Vector2 Field_3_73; // 0x410
	::UnityEngine::Vector2 Field_3_95; // 0x418
	::System::Single Field_3_129; // 0x420
	::System::Single Field_3_133; // 0x424
	::UnityEngine::Vector4 Field_3_53; // 0x428
	::System::Single Field_3_13; // 0x438
	::System::Boolean Field_3_97; // 0x43C
	::System::Boolean Field_3_85; // 0x43D
	::System::Boolean Field_3_171; // 0x43E
	::System::Boolean Field_3_63; // 0x43F
	::UnityEngine::Vector4 Field_3_91; // 0x440
	::UnityEngine::Vector3 Field_3_121; // 0x450
	::System::Single Field_3_159; // 0x45C
	::UnityEngine::Color Field_3_163; // 0x460
	::System::Boolean Field_3_75; // 0x470
	::System::Boolean Field_3_99; // 0x471
	::System::Boolean Field_3_117; // 0x472
	::System::Boolean Field_3_17; // 0x473
	::UnityEngine::Rendering::Universal::UvModes Field_3_67; // 0x474
	::System::Int32 Field_3_103; // 0x478
	::System::Single Field_3_35; // 0x47C
	::UnityEngine::Color Field_3_131; // 0x480
	::System::Single Field_3_161; // 0x490
	::System::Boolean Field_3_1; // 0x494
	::System::Boolean Field_3_61; // 0x495
	::System::Single Field_3_81; // 0x498
	::System::Single Field_3_149; // 0x49C
	::System::Single Field_3_15; // 0x4A0
	::System::Single Field_3_169; // 0x4A4
	::System::Single Field_3_79; // 0x4A8
	::UnityEngine::Rendering::Universal::UvModes Field_3_89; // 0x4AC
	::UnityEngine::Rendering::Universal::UvModes Field_3_41; // 0x4B0
	::System::Single Field_3_111; // 0x4B4
	::System::Boolean Field_3_175; // 0x4B8
	::System::Boolean Field_3_101; // 0x4B9
	::System::Boolean Field_3_176; // 0x4BA
	::System::Single Field_3_141; // 0x4BC
	::UnityEngine::Rendering::Universal::UvModes Field_3_21; // 0x4C0
	::UnityEngine::Color Field_3_31; // 0x4C4
	::UnityEngine::Vector2 Field_3_59; // 0x4D4
	::UnityEngine::Color Field_3_155; // 0x4DC
	::UnityEngine::Color Field_3_147; // 0x4EC
	::System::Boolean Field_3_167; // 0x4FC
	::System::Boolean Field_3_115; // 0x4FD
	::System::Boolean Field_3_25; // 0x4FE
	::System::Boolean Field_3_119; // 0x4FF
	::UnityEngine::Rendering::Universal::UvModes Field_3_7; // 0x500
	::UnityEngine::Vector4 Field_3_69; // 0x504
	::UnityEngine::Rendering::Universal::ChannelMapping Field_3_29; // 0x514
	::System::Single Field_3_151; // 0x518
	::System::Single Field_3_173; // 0x51C
	::UnityEngine::Vector4 Field_3_23; // 0x520
	::System::Single Field_3_83; // 0x530
	::UnityEngine::Rendering::Universal::ChannelMapping Field_3_45; // 0x534
	::UnityEngine::Rendering::Universal::UvModes Field_3_51; // 0x538
	::System::Single Field_3_157; // 0x53C
	::UnityEngine::Rendering::Universal::ChannelMapping Field_3_55; // 0x540
	::System::Single Field_3_113; // 0x544
	::UnityEngine::Vector2 Field_3_109; // 0x548
	::UnityEngine::Color Field_3_139; // 0x550
	::System::Single Field_3_9; // 0x560
	::UnityEngine::Vector2 Field_3_37; // 0x564
	::System::Single Field_3_137; // 0x56C
	::System::Single Field_3_127; // 0x570

	::System::Void _ctor(::System::String* a1, ::MoleMole::Config::ConfigEntityScreenEffect* a2, ::UnityEngine::Rendering::Volume* a3, ::MoleMole::Battle::Entity* a4, ::Class_1_8A50BFB20D9D2482* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Config::ConfigEntityScreenEffect*, ::UnityEngine::Rendering::Volume*, ::MoleMole::Battle::Entity*, ::Class_1_8A50BFB20D9D2482*))((::PBYTE)hIl2Cpp + CLASS_3_295661F441BBCF68__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_2EA24B012C3B3D08(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::ScreenEffects* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::ScreenEffects*))((::PBYTE)hIl2Cpp + CLASS_3_295661F441BBCF68_METHOD_3_2EA24B012C3B3D08_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_1966BC60ACBE9F6A(::UnityEngine::Rendering::Universal::ScreenEffects* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::ScreenEffects*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_295661F441BBCF68_METHOD_3_1966BC60ACBE9F6A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_AF605B1FCAA63016(::UnityEngine::Rendering::Universal::ScreenEffects* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::ScreenEffects*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_295661F441BBCF68_METHOD_3_AF605B1FCAA63016_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_2EA24B012C3B3D08_1(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::ScreenEffects* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::ScreenEffects*))((::PBYTE)hIl2Cpp + CLASS_3_295661F441BBCF68_METHOD_3_2EA24B012C3B3D08_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_997ABD4B45F1A0E9(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::ScreenEffects* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::ScreenEffects*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_295661F441BBCF68_METHOD_3_997ABD4B45F1A0E9_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_EC8400E1F9FDF921(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::ScreenEffects* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::ScreenEffects*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_295661F441BBCF68_METHOD_3_EC8400E1F9FDF921_OFFSET))(this, a1, a2, a3);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_295661F441BBCF68_TOSTRING_OFFSET))(this);
	}

	::System::Void Method_3_42C5E0514DA877A6(::UnityEngine::Rendering::Universal::ScreenEffects* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::ScreenEffects*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_295661F441BBCF68_METHOD_3_42C5E0514DA877A6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_CAD6F2AC6699EAB4(::System::String* a1, ::System::Single a2, ::System::Action* a3, ::MoleMole::Battle::Entity* a4, ::System::Boolean a5, ::System::String* a6, ::MoleMole::Config::ConfigPosRot* a7, ::System::Boolean a8)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::System::Action*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_295661F441BBCF68_METHOD_3_CAD6F2AC6699EAB4_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::MoleMole::Battle::Entity* Method_3_B9D8FD15D18938A0()
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_295661F441BBCF68_METHOD_3_B9D8FD15D18938A0_OFFSET))(this);
	}

	::System::Void Method_3_6D44C03F490A953F(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_295661F441BBCF68_METHOD_3_6D44C03F490A953F_OFFSET))(this, a1);
	}
};
