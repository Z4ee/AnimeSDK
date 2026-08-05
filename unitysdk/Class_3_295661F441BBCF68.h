#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_B0798E1629E01207.h"
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

#define CLASS_3_295661F441BBCF68_METHOD_3_42C5E0514DA877A6_OFFSET UNITYSDK_OFFSET(0x19F551F0)
#define CLASS_3_295661F441BBCF68_METHOD_3_457562173AF02473_OFFSET UNITYSDK_OFFSET(0x14562220)
#define CLASS_3_295661F441BBCF68_METHOD_3_68AC01417557EB5D_OFFSET UNITYSDK_OFFSET(0x19F552F0)
#define CLASS_3_295661F441BBCF68_METHOD_3_6D44C03F490A953F_OFFSET UNITYSDK_OFFSET(0x19F5E360)
#define CLASS_3_295661F441BBCF68_METHOD_3_997ABD4B45F1A0E9_OFFSET UNITYSDK_OFFSET(0x19F4B010)
#define CLASS_3_295661F441BBCF68_METHOD_3_A946A512C3EB1E30_1_OFFSET UNITYSDK_OFFSET(0x19F41E40)
#define CLASS_3_295661F441BBCF68_METHOD_3_A946A512C3EB1E30_OFFSET UNITYSDK_OFFSET(0x145570D0)
#define CLASS_3_295661F441BBCF68_METHOD_3_AF605B1FCAA63016_OFFSET UNITYSDK_OFFSET(0x1456AF90)
#define CLASS_3_295661F441BBCF68_METHOD_3_B9D8FD15D18938A0_OFFSET UNITYSDK_OFFSET(0x19F5E570)
#define CLASS_3_295661F441BBCF68_METHOD_3_CAD6F2AC6699EAB4_OFFSET UNITYSDK_OFFSET(0x19F5E460)
#define CLASS_3_295661F441BBCF68_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19F59F10)
#define CLASS_3_295661F441BBCF68__CTOR_OFFSET UNITYSDK_OFFSET(0x145562A0)

inline static constexpr unsigned int Class_3_295661F441BBCF68_TypeDefinitionIndex = 56005;

class Class_3_295661F441BBCF68 : public ::Class_2_B0798E1629E01207<::UnityEngine::Rendering::Universal::ScreenEffects*, ::MoleMole::Config::ConfigEntityScreenEffect*>
{
public:
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_118; // 0xA8
	::MoleMole::TwoValue_1<::UnityEngine::Vector2>* Field_3_74; // 0xB0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_94; // 0xB8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_6; // 0xC0
	::MoleMole::TwoValue_1<::UnityEngine::Color>* Field_3_128; // 0xC8
	::MoleMole::Battle::Entity* Field_3_172; // 0xD0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_140; // 0xD8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_58; // 0xE0
	::UnityEngine::Texture* Field_3_49; // 0xE8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_76; // 0xF0
	::MoleMole::TwoValue_1<::UnityEngine::Texture*>* Field_3_84; // 0xF8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_174; // 0x100
	::UnityEngine::Texture* Field_3_23; // 0x108
	::MoleMole::TwoValue_1<::UnityEngine::Vector4>* Field_3_88; // 0x110
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_116; // 0x118
	::MoleMole::TwoValue_1<::System::Single>* Field_3_134; // 0x120
	::MoleMole::TwoValue_1<::UnityEngine::Color>* Field_3_136; // 0x128
	::MoleMole::TwoValue_1<::System::Single>* Field_3_126; // 0x130
	::UnityEngine::Texture* Field_3_43; // 0x138
	::MoleMole::TwoValue_1<::System::Int32>* Field_3_100; // 0x140
	::MoleMole::TwoValue_1<::System::Single>* Field_3_170; // 0x148
	::MoleMole::TwoValue_1<::UnityEngine::Color>* Field_3_160; // 0x150
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_26; // 0x158
	::MoleMole::TwoValue_1<::UnityEngine::Texture*>* Field_3_16; // 0x160
	::MoleMole::TwoValue_1<::UnityEngine::Vector4>* Field_3_70; // 0x168
	::MoleMole::TwoValue_1<::System::Single>* Field_3_14; // 0x170
	::MoleMole::TwoValue_1<::System::Single>* Field_3_150; // 0x178
	::MoleMole::TwoValue_1<::System::Int32>* Field_3_120; // 0x180
	::MoleMole::TwoValue_1<::System::Single>* Field_3_130; // 0x188
	::MoleMole::TwoValue_1<::UnityEngine::Vector2>* Field_3_110; // 0x190
	::MoleMole::TwoValue_1<::UnityEngine::Rendering::Universal::ChannelMapping>* Field_3_68; // 0x198
	::MoleMole::TwoValue_1<::System::Single>* Field_3_114; // 0x1A0
	::MoleMole::TwoValue_1<::UnityEngine::Rendering::Universal::BlendModes>* Field_3_0; // 0x1A8
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_86; // 0x1B0
	::MoleMole::TwoValue_1<::UnityEngine::Rendering::Universal::ChannelMapping>* Field_3_52; // 0x1B8
	::MoleMole::TwoValue_1<::UnityEngine::Rendering::Universal::UvModes>* Field_3_90; // 0x1C0
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_98; // 0x1C8
	::MoleMole::TwoValue_1<::UnityEngine::Color>* Field_3_166; // 0x1D0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_8; // 0x1D8
	::MoleMole::TwoValue_1<::UnityEngine::Vector4>* Field_3_40; // 0x1E0
	::MoleMole::TwoValue_1<::UnityEngine::Vector2>* Field_3_104; // 0x1E8
	::MoleMole::TwoValue_1<::UnityEngine::Rendering::Universal::UvModes>* Field_3_42; // 0x1F0
	::MoleMole::TwoValue_1<::UnityEngine::Color>* Field_3_152; // 0x1F8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_12; // 0x200
	::MoleMole::TwoValue_1<::UnityEngine::Vector3>* Field_3_122; // 0x208
	::MoleMole::TwoValue_1<::UnityEngine::Vector2>* Field_3_44; // 0x210
	::MoleMole::TwoValue_1<::UnityEngine::Texture*>* Field_3_106; // 0x218
	::MoleMole::TwoValue_1<::UnityEngine::Texture*>* Field_3_36; // 0x220
	::MoleMole::TwoValue_1<::System::Single>* Field_3_78; // 0x228
	::UnityEngine::Texture* Field_3_65; // 0x230
	::UnityEngine::Texture* Field_3_91; // 0x238
	::MoleMole::TwoValue_1<::UnityEngine::Rendering::Universal::UvModes>* Field_3_48; // 0x240
	::MoleMole::TwoValue_1<::UnityEngine::Color>* Field_3_28; // 0x248
	::MoleMole::TwoValue_1<::System::Single>* Field_3_10; // 0x250
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_96; // 0x258
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_168; // 0x260
	::MoleMole::TwoValue_1<::System::Single>* Field_3_146; // 0x268
	::MoleMole::TwoValue_1<::System::Single>* Field_3_142; // 0x270
	::MoleMole::TwoValue_1<::System::Single>* Field_3_156; // 0x278
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_164; // 0x280
	::MoleMole::TwoValue_1<::System::Single>* Field_3_80; // 0x288
	::MoleMole::TwoValue_1<::System::Single>* Field_3_138; // 0x290
	::MoleMole::TwoValue_1<::System::Single>* Field_3_82; // 0x298
	::MoleMole::TwoValue_1<::UnityEngine::Rendering::Universal::ChannelMapping>* Field_3_30; // 0x2A0
	::MoleMole::TwoValue_1<::UnityEngine::Rendering::Universal::ChannelMapping>* Field_3_24; // 0x2A8
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_18; // 0x2B0
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_102; // 0x2B8
	::MoleMole::TwoValue_1<::UnityEngine::Vector2>* Field_3_92; // 0x2C0
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_62; // 0x2C8
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_60; // 0x2D0
	::MoleMole::TwoValue_1<::UnityEngine::Color>* Field_3_34; // 0x2D8
	::MoleMole::TwoValue_1<::UnityEngine::Vector4>* Field_3_54; // 0x2E0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_124; // 0x2E8
	::MoleMole::TwoValue_1<::UnityEngine::Vector2>* Field_3_38; // 0x2F0
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_72; // 0x2F8
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_2; // 0x300
	::MoleMole::TwoValue_1<::UnityEngine::Rendering::Universal::UvModes>* Field_3_64; // 0x308
	::MoleMole::TwoValue_1<::UnityEngine::Vector2>* Field_3_56; // 0x310
	::MoleMole::TwoValue_1<::System::Single>* Field_3_162; // 0x318
	::MoleMole::TwoValue_1<::System::Single>* Field_3_132; // 0x320
	::MoleMole::TwoValue_1<::UnityEngine::Texture*>* Field_3_66; // 0x328
	::MoleMole::TwoValue_1<::UnityEngine::Color>* Field_3_144; // 0x330
	::MoleMole::TwoValue_1<::UnityEngine::Rendering::Universal::UvModes>* Field_3_22; // 0x338
	::MoleMole::TwoValue_1<::System::Single>* Field_3_158; // 0x340
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_112; // 0x348
	::MoleMole::TwoValue_1<::UnityEngine::Texture*>* Field_3_50; // 0x350
	::MoleMole::TwoValue_1<::System::Single>* Field_3_154; // 0x358
	::MoleMole::TwoValue_1<::System::Single>* Field_3_32; // 0x360
	::MoleMole::TwoValue_1<::UnityEngine::Rendering::Universal::ChannelMapping>* Field_3_46; // 0x368
	::UnityEngine::Texture* Field_3_105; // 0x370
	::MoleMole::TwoValue_1<::UnityEngine::Rendering::Universal::UvModes>* Field_3_4; // 0x378
	::MoleMole::TwoValue_1<::System::Single>* Field_3_108; // 0x380
	::MoleMole::TwoValue_1<::System::Single>* Field_3_148; // 0x388
	::MoleMole::TwoValue_1<::UnityEngine::Vector4>* Field_3_20; // 0x390
	::System::Boolean Field_3_119; // 0x398
	::System::Boolean Field_3_175; // 0x399
	::System::Boolean Field_3_171; // 0x39A
	::System::Boolean Field_3_1; // 0x39B
	::System::Single Field_3_129; // 0x39C
	::System::Single Field_3_77; // 0x3A0
	::UnityEngine::Vector4 Field_3_47; // 0x3A4
	::UnityEngine::Vector2 Field_3_99; // 0x3B4
	::UnityEngine::Rendering::Universal::ChannelMapping Field_3_31; // 0x3BC
	::System::Single Field_3_141; // 0x3C0
	::UnityEngine::Vector4 Field_3_53; // 0x3C4
	::UnityEngine::Vector4 Field_3_95; // 0x3D4
	::System::Single Field_3_161; // 0x3E4
	::UnityEngine::Color Field_3_33; // 0x3E8
	::System::Single Field_3_115; // 0x3F8
	::System::Boolean Field_3_25; // 0x3FC
	::System::Boolean Field_3_79; // 0x3FD
	::System::Single Field_3_163; // 0x400
	::UnityEngine::Color Field_3_159; // 0x404
	::UnityEngine::Vector2 Field_3_37; // 0x414
	::UnityEngine::Color Field_3_167; // 0x41C
	::System::Single Field_3_131; // 0x42C
	::UnityEngine::Rendering::Universal::ChannelMapping Field_3_29; // 0x430
	::UnityEngine::Rendering::Universal::UvModes Field_3_89; // 0x434
	::UnityEngine::Color Field_3_143; // 0x438
	::System::Single Field_3_5; // 0x448
	::System::Boolean Field_3_123; // 0x44C
	::System::Boolean Field_3_97; // 0x44D
	::System::Boolean Field_3_178; // 0x44E
	::System::Boolean Field_3_61; // 0x44F
	::System::Single Field_3_147; // 0x450
	::System::Single Field_3_15; // 0x454
	::System::Single Field_3_57; // 0x458
	::UnityEngine::Rendering::Universal::UvModes Field_3_55; // 0x45C
	::UnityEngine::Vector4 Field_3_27; // 0x460
	::UnityEngine::Vector2 Field_3_63; // 0x470
	::UnityEngine::Rendering::Universal::UvModes Field_3_21; // 0x478
	::System::Single Field_3_9; // 0x47C
	::UnityEngine::Vector2 Field_3_73; // 0x480
	::UnityEngine::Color Field_3_135; // 0x488
	::System::Single Field_3_157; // 0x498
	::UnityEngine::Rendering::Universal::UvModes Field_3_71; // 0x49C
	::System::Single Field_3_87; // 0x4A0
	::System::Single Field_3_145; // 0x4A4
	::System::Single Field_3_93; // 0x4A8
	::System::Single Field_3_83; // 0x4AC
	::UnityEngine::Rendering::Universal::BlendModes Field_3_7; // 0x4B0
	::System::Int32 Field_3_127; // 0x4B4
	::System::Int32 Field_3_107; // 0x4B8
	::System::Single Field_3_39; // 0x4BC
	::UnityEngine::Rendering::Universal::ChannelMapping Field_3_59; // 0x4C0
	::UnityEngine::Color Field_3_165; // 0x4C4
	::System::Single Field_3_133; // 0x4D4
	::UnityEngine::Color Field_3_151; // 0x4D8
	::System::Single Field_3_155; // 0x4E8
	::UnityEngine::Vector2 Field_3_109; // 0x4EC
	::System::Single Field_3_139; // 0x4F4
	::System::Single Field_3_137; // 0x4F8
	::System::Single Field_3_173; // 0x4FC
	::UnityEngine::Rendering::Universal::ChannelMapping Field_3_45; // 0x500
	::UnityEngine::Vector4 Field_3_69; // 0x504
	::UnityEngine::Vector2 Field_3_51; // 0x514
	::UnityEngine::Vector2 Field_3_111; // 0x51C
	::System::Single Field_3_81; // 0x524
	::System::Single Field_3_149; // 0x528
	::UnityEngine::Rendering::Universal::UvModes Field_3_41; // 0x52C
	::System::Boolean Field_3_117; // 0x530
	::System::Boolean Field_3_67; // 0x531
	::System::Boolean Field_3_85; // 0x532
	::System::Single Field_3_153; // 0x534
	::System::Single Field_3_169; // 0x538
	::System::Single Field_3_113; // 0x53C
	::UnityEngine::Rendering::Universal::ChannelMapping Field_3_75; // 0x540
	::System::Single Field_3_13; // 0x544
	::UnityEngine::Color Field_3_35; // 0x548
	::UnityEngine::Vector3 Field_3_121; // 0x558
	::System::Single Field_3_125; // 0x564
	::UnityEngine::Rendering::Universal::UvModes Field_3_11; // 0x568
	::System::Boolean Field_3_101; // 0x56C
	::System::Boolean Field_3_103; // 0x56D
	::System::Boolean Field_3_179; // 0x56E
	::System::Boolean Field_3_17; // 0x56F
	::System::Single Field_3_19; // 0x570

	::System::Void _ctor(::System::String* a1, ::MoleMole::Config::ConfigEntityScreenEffect* a2, ::UnityEngine::Rendering::Volume* a3, ::MoleMole::Battle::Entity* a4, ::Class_1_8A50BFB20D9D2482* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Config::ConfigEntityScreenEffect*, ::UnityEngine::Rendering::Volume*, ::MoleMole::Battle::Entity*, ::Class_1_8A50BFB20D9D2482*))((::PBYTE)hIl2Cpp + CLASS_3_295661F441BBCF68__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_A946A512C3EB1E30(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::ScreenEffects* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::ScreenEffects*))((::PBYTE)hIl2Cpp + CLASS_3_295661F441BBCF68_METHOD_3_A946A512C3EB1E30_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_457562173AF02473(::UnityEngine::Rendering::Universal::ScreenEffects* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::ScreenEffects*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_295661F441BBCF68_METHOD_3_457562173AF02473_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_AF605B1FCAA63016(::UnityEngine::Rendering::Universal::ScreenEffects* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::ScreenEffects*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_295661F441BBCF68_METHOD_3_AF605B1FCAA63016_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_A946A512C3EB1E30_1(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::ScreenEffects* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::ScreenEffects*))((::PBYTE)hIl2Cpp + CLASS_3_295661F441BBCF68_METHOD_3_A946A512C3EB1E30_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_997ABD4B45F1A0E9(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::ScreenEffects* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::ScreenEffects*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_295661F441BBCF68_METHOD_3_997ABD4B45F1A0E9_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_68AC01417557EB5D(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::ScreenEffects* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::ScreenEffects*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_295661F441BBCF68_METHOD_3_68AC01417557EB5D_OFFSET))(this, a1, a2, a3);
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
