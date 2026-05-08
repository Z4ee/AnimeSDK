#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_DCFFBB6D22760266.h"
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

#define CLASS_3_AC4A30C6B10898C4_METHOD_3_1966BC60ACBE9F6A_OFFSET UNITYSDK_OFFSET(0x120FED30)
#define CLASS_3_AC4A30C6B10898C4_METHOD_3_1C3FD49C832AD361_1_OFFSET UNITYSDK_OFFSET(0x17F6FBD0)
#define CLASS_3_AC4A30C6B10898C4_METHOD_3_1C3FD49C832AD361_OFFSET UNITYSDK_OFFSET(0x17F6FBA0)
#define CLASS_3_AC4A30C6B10898C4_METHOD_3_2EA24B012C3B3D08_OFFSET UNITYSDK_OFFSET(0x17F53070)
#define CLASS_3_AC4A30C6B10898C4_METHOD_3_57BE99FF6B5F2421_1_OFFSET UNITYSDK_OFFSET(0x17F6FBE0)
#define CLASS_3_AC4A30C6B10898C4_METHOD_3_57BE99FF6B5F2421_2_OFFSET UNITYSDK_OFFSET(0x17F6FBF0)
#define CLASS_3_AC4A30C6B10898C4_METHOD_3_57BE99FF6B5F2421_OFFSET UNITYSDK_OFFSET(0x17F6FBC0)
#define CLASS_3_AC4A30C6B10898C4_METHOD_3_634E6F4303080601_OFFSET UNITYSDK_OFFSET(0x17F46EC0)
#define CLASS_3_AC4A30C6B10898C4_METHOD_3_86D67B570EA3C031_OFFSET UNITYSDK_OFFSET(0x120F3A90)
#define CLASS_3_AC4A30C6B10898C4_METHOD_3_8DDE6AF74C73E11E_OFFSET UNITYSDK_OFFSET(0x17F6FBB0)
#define CLASS_3_AC4A30C6B10898C4_METHOD_3_997ABD4B45F1A0E9_OFFSET UNITYSDK_OFFSET(0x17F5C3C0)
#define CLASS_3_AC4A30C6B10898C4_METHOD_3_A29F39D6EDFF36F8_OFFSET UNITYSDK_OFFSET(0x17F6FB90)
#define CLASS_3_AC4A30C6B10898C4_METHOD_3_A3C11DAABEADB6D8_OFFSET UNITYSDK_OFFSET(0x17F53000)
#define CLASS_3_AC4A30C6B10898C4_METHOD_3_CC7841E04D5BC26D_OFFSET UNITYSDK_OFFSET(0x17F6FB50)
#define CLASS_3_AC4A30C6B10898C4_METHOD_3_D0B68C1DD4B91F49_OFFSET UNITYSDK_OFFSET(0x17F6F8D0)
#define CLASS_3_AC4A30C6B10898C4_METHOD_3_EAA3CD3AB6192364_OFFSET UNITYSDK_OFFSET(0x17F6FB00)
#define CLASS_3_AC4A30C6B10898C4_METHOD_3_EC8400E1F9FDF921_OFFSET UNITYSDK_OFFSET(0x17F66990)
#define CLASS_3_AC4A30C6B10898C4_METHOD_3_F788DB431F3F0579_OFFSET UNITYSDK_OFFSET(0x17F6FA10)
#define CLASS_3_AC4A30C6B10898C4_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17F6B440)
#define CLASS_3_AC4A30C6B10898C4__CTOR_OFFSET UNITYSDK_OFFSET(0x120F2C60)

inline static constexpr unsigned int Class_3_AC4A30C6B10898C4_TypeDefinitionIndex = 50500;

class Class_3_AC4A30C6B10898C4 : public ::Class_2_DCFFBB6D22760266<::UnityEngine::Rendering::Universal::ScreenEffects*, ::MoleMole::Config::ConfigEntityScreenEffect*>
{
public:
	::MoleMole::TwoValue_1<::UnityEngine::Color>* Field_3_146; // 0xA8
	::MoleMole::TwoValue_1<::UnityEngine::Vector4>* Field_3_68; // 0xB0
	::MoleMole::TwoValue_1<::UnityEngine::Rendering::Universal::UvModes>* Field_3_6; // 0xB8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_124; // 0xC0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_160; // 0xC8
	::MoleMole::TwoValue_1<::UnityEngine::Texture*>* Field_3_18; // 0xD0
	::MoleMole::TwoValue_1<::UnityEngine::Rendering::Universal::UvModes>* Field_3_40; // 0xD8
	::MoleMole::TwoValue_1<::UnityEngine::Vector4>* Field_3_42; // 0xE0
	::MoleMole::TwoValue_1<::UnityEngine::Vector4>* Field_3_52; // 0xE8
	::MoleMole::TwoValue_1<::UnityEngine::Rendering::Universal::UvModes>* Field_3_50; // 0xF0
	::MoleMole::TwoValue_1<::UnityEngine::Vector2>* Field_3_46; // 0xF8
	::MoleMole::TwoValue_1<::UnityEngine::Vector2>* Field_3_108; // 0x100
	::MoleMole::TwoValue_1<::System::Single>* Field_3_132; // 0x108
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_84; // 0x110
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_116; // 0x118
	::MoleMole::TwoValue_1<::UnityEngine::Vector2>* Field_3_94; // 0x120
	::MoleMole::TwoValue_1<::UnityEngine::Rendering::Universal::UvModes>* Field_3_20; // 0x128
	::MoleMole::TwoValue_1<::System::Single>* Field_3_112; // 0x130
	::MoleMole::TwoValue_1<::System::Single>* Field_3_142; // 0x138
	::MoleMole::TwoValue_1<::System::Single>* Field_3_92; // 0x140
	::MoleMole::TwoValue_1<::System::Single>* Field_3_144; // 0x148
	::MoleMole::TwoValue_1<::UnityEngine::Color>* Field_3_164; // 0x150
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_166; // 0x158
	::MoleMole::TwoValue_1<::System::Single>* Field_3_10; // 0x160
	::MoleMole::TwoValue_1<::UnityEngine::Color>* Field_3_138; // 0x168
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_114; // 0x170
	::MoleMole::TwoValue_1<::UnityEngine::Texture*>* Field_3_64; // 0x178
	::MoleMole::TwoValue_1<::System::Single>* Field_3_168; // 0x180
	::MoleMole::TwoValue_1<::UnityEngine::Rendering::Universal::ChannelMapping>* Field_3_28; // 0x188
	::MoleMole::TwoValue_1<::UnityEngine::Rendering::Universal::ChannelMapping>* Field_3_44; // 0x190
	::UnityEngine::Texture* Field_3_49; // 0x198
	::MoleMole::TwoValue_1<::System::Single>* Field_3_12; // 0x1A0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_80; // 0x1A8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_126; // 0x1B0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_14; // 0x1B8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_4; // 0x1C0
	::UnityEngine::Texture* Field_3_65; // 0x1C8
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_74; // 0x1D0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_136; // 0x1D8
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_98; // 0x1E0
	::MoleMole::Battle::Entity* Field_3_174; // 0x1E8
	::MoleMole::TwoValue_1<::UnityEngine::Color>* Field_3_154; // 0x1F0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_76; // 0x1F8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_150; // 0x200
	::MoleMole::TwoValue_1<::UnityEngine::Texture*>* Field_3_48; // 0x208
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_96; // 0x210
	::MoleMole::TwoValue_1<::System::Single>* Field_3_148; // 0x218
	::MoleMole::TwoValue_1<::System::Single>* Field_3_140; // 0x220
	::MoleMole::TwoValue_1<::System::Single>* Field_3_158; // 0x228
	::MoleMole::TwoValue_1<::UnityEngine::Texture*>* Field_3_38; // 0x230
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_24; // 0x238
	::MoleMole::TwoValue_1<::System::Single>* Field_3_128; // 0x240
	::MoleMole::TwoValue_1<::UnityEngine::Color>* Field_3_162; // 0x248
	::MoleMole::TwoValue_1<::System::Single>* Field_3_8; // 0x250
	::MoleMole::TwoValue_1<::UnityEngine::Vector2>* Field_3_58; // 0x258
	::MoleMole::TwoValue_1<::UnityEngine::Vector4>* Field_3_22; // 0x260
	::MoleMole::TwoValue_1<::System::Single>* Field_3_78; // 0x268
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_16; // 0x270
	::UnityEngine::Texture* Field_3_19; // 0x278
	::MoleMole::TwoValue_1<::System::Single>* Field_3_34; // 0x280
	::UnityEngine::Texture* Field_3_39; // 0x288
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_60; // 0x290
	::MoleMole::TwoValue_1<::UnityEngine::Rendering::Universal::ChannelMapping>* Field_3_54; // 0x298
	::MoleMole::TwoValue_1<::UnityEngine::Vector2>* Field_3_106; // 0x2A0
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_100; // 0x2A8
	::MoleMole::TwoValue_1<::UnityEngine::Vector2>* Field_3_36; // 0x2B0
	::MoleMole::TwoValue_1<::UnityEngine::Rendering::Universal::BlendModes>* Field_3_2; // 0x2B8
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_118; // 0x2C0
	::MoleMole::TwoValue_1<::UnityEngine::Color>* Field_3_30; // 0x2C8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_82; // 0x2D0
	::MoleMole::TwoValue_1<::UnityEngine::Rendering::Universal::ChannelMapping>* Field_3_26; // 0x2D8
	::MoleMole::TwoValue_1<::UnityEngine::Rendering::Universal::UvModes>* Field_3_88; // 0x2E0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_152; // 0x2E8
	::MoleMole::TwoValue_1<::UnityEngine::Vector2>* Field_3_72; // 0x2F0
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_62; // 0x2F8
	::MoleMole::TwoValue_1<::System::Int32>* Field_3_122; // 0x300
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_170; // 0x308
	::MoleMole::TwoValue_1<::UnityEngine::Rendering::Universal::ChannelMapping>* Field_3_70; // 0x310
	::MoleMole::TwoValue_1<::System::Single>* Field_3_156; // 0x318
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_0; // 0x320
	::MoleMole::TwoValue_1<::UnityEngine::Color>* Field_3_130; // 0x328
	::MoleMole::TwoValue_1<::System::Single>* Field_3_172; // 0x330
	::MoleMole::TwoValue_1<::UnityEngine::Texture*>* Field_3_104; // 0x338
	::MoleMole::TwoValue_1<::System::Single>* Field_3_56; // 0x340
	::MoleMole::TwoValue_1<::System::Single>* Field_3_134; // 0x348
	::MoleMole::TwoValue_1<::UnityEngine::Texture*>* Field_3_86; // 0x350
	::MoleMole::TwoValue_1<::UnityEngine::Rendering::Universal::UvModes>* Field_3_66; // 0x358
	::MoleMole::TwoValue_1<::UnityEngine::Vector3>* Field_3_120; // 0x360
	::UnityEngine::Texture* Field_3_105; // 0x368
	::MoleMole::TwoValue_1<::System::Single>* Field_3_110; // 0x370
	::MoleMole::TwoValue_1<::System::Int32>* Field_3_102; // 0x378
	::MoleMole::TwoValue_1<::UnityEngine::Color>* Field_3_32; // 0x380
	::MoleMole::TwoValue_1<::UnityEngine::Vector4>* Field_3_90; // 0x388
	::UnityEngine::Texture* Field_3_87; // 0x390
	::System::Single Field_3_9; // 0x398
	::System::Single Field_3_93; // 0x39C
	::System::Boolean Field_3_97; // 0x3A0
	::System::Boolean Field_3_175; // 0x3A1
	::System::Single Field_3_157; // 0x3A4
	::UnityEngine::Color Field_3_147; // 0x3A8
	::UnityEngine::Rendering::Universal::UvModes Field_3_89; // 0x3B8
	::System::Boolean Field_3_85; // 0x3BC
	::System::Boolean Field_3_75; // 0x3BD
	::System::Boolean Field_3_17; // 0x3BE
	::System::Boolean Field_3_176; // 0x3BF
	::UnityEngine::Rendering::Universal::UvModes Field_3_51; // 0x3C0
	::UnityEngine::Vector4 Field_3_91; // 0x3C4
	::System::Single Field_3_81; // 0x3D4
	::System::Single Field_3_15; // 0x3D8
	::UnityEngine::Rendering::Universal::UvModes Field_3_41; // 0x3DC
	::UnityEngine::Rendering::Universal::ChannelMapping Field_3_27; // 0x3E0
	::UnityEngine::Vector4 Field_3_53; // 0x3E4
	::System::Single Field_3_173; // 0x3F4
	::System::Single Field_3_137; // 0x3F8
	::UnityEngine::Rendering::Universal::BlendModes Field_3_3; // 0x3FC
	::UnityEngine::Vector2 Field_3_73; // 0x400
	::System::Single Field_3_159; // 0x408
	::UnityEngine::Vector2 Field_3_47; // 0x40C
	::System::Single Field_3_151; // 0x414
	::System::Single Field_3_133; // 0x418
	::System::Boolean Field_3_119; // 0x41C
	::System::Boolean Field_3_117; // 0x41D
	::System::Boolean Field_3_25; // 0x41E
	::UnityEngine::Vector4 Field_3_69; // 0x420
	::System::Single Field_3_129; // 0x430
	::System::Single Field_3_13; // 0x434
	::System::Single Field_3_135; // 0x438
	::System::Single Field_3_57; // 0x43C
	::System::Single Field_3_145; // 0x440
	::UnityEngine::Vector2 Field_3_109; // 0x444
	::System::Single Field_3_111; // 0x44C
	::System::Single Field_3_83; // 0x450
	::System::Single Field_3_5; // 0x454
	::System::Single Field_3_127; // 0x458
	::UnityEngine::Color Field_3_155; // 0x45C
	::System::Single Field_3_125; // 0x46C
	::System::Single Field_3_161; // 0x470
	::UnityEngine::Color Field_3_33; // 0x474
	::UnityEngine::Vector3 Field_3_121; // 0x484
	::System::Single Field_3_153; // 0x490
	::UnityEngine::Rendering::Universal::ChannelMapping Field_3_71; // 0x494
	::UnityEngine::Color Field_3_165; // 0x498
	::UnityEngine::Color Field_3_131; // 0x4A8
	::UnityEngine::Vector2 Field_3_59; // 0x4B8
	::UnityEngine::Rendering::Universal::UvModes Field_3_7; // 0x4C0
	::System::Single Field_3_141; // 0x4C4
	::System::Single Field_3_77; // 0x4C8
	::UnityEngine::Vector2 Field_3_95; // 0x4CC
	::UnityEngine::Vector2 Field_3_107; // 0x4D4
	::UnityEngine::Rendering::Universal::UvModes Field_3_67; // 0x4DC
	::System::Single Field_3_149; // 0x4E0
	::UnityEngine::Vector4 Field_3_43; // 0x4E4
	::System::Single Field_3_35; // 0x4F4
	::UnityEngine::Color Field_3_139; // 0x4F8
	::System::Boolean Field_3_63; // 0x508
	::System::Boolean Field_3_61; // 0x509
	::System::Boolean Field_3_115; // 0x50A
	::System::Boolean Field_3_167; // 0x50B
	::UnityEngine::Vector2 Field_3_37; // 0x50C
	::UnityEngine::Rendering::Universal::ChannelMapping Field_3_55; // 0x514
	::System::Single Field_3_169; // 0x518
	::UnityEngine::Rendering::Universal::ChannelMapping Field_3_45; // 0x51C
	::System::Int32 Field_3_103; // 0x520
	::UnityEngine::Vector4 Field_3_23; // 0x524
	::System::Single Field_3_143; // 0x534
	::System::Int32 Field_3_123; // 0x538
	::UnityEngine::Rendering::Universal::ChannelMapping Field_3_29; // 0x53C
	::UnityEngine::Color Field_3_31; // 0x540
	::UnityEngine::Color Field_3_163; // 0x550
	::System::Single Field_3_79; // 0x560
	::System::Boolean Field_3_171; // 0x564
	::System::Boolean Field_3_101; // 0x565
	::System::Boolean Field_3_1; // 0x566
	::System::Boolean Field_3_99; // 0x567
	::System::Single Field_3_11; // 0x568
	::System::Single Field_3_113; // 0x56C
	::UnityEngine::Rendering::Universal::UvModes Field_3_21; // 0x570

	::System::Void _ctor(::System::String* a1, ::MoleMole::Config::ConfigEntityScreenEffect* a2, ::UnityEngine::Rendering::Volume* a3, ::MoleMole::Battle::Entity* a4, ::Class_1_8A50BFB20D9D2482* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Config::ConfigEntityScreenEffect*, ::UnityEngine::Rendering::Volume*, ::MoleMole::Battle::Entity*, ::Class_1_8A50BFB20D9D2482*))((::PBYTE)hIl2Cpp + CLASS_3_AC4A30C6B10898C4__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_86D67B570EA3C031(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::ScreenEffects* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::ScreenEffects*))((::PBYTE)hIl2Cpp + CLASS_3_AC4A30C6B10898C4_METHOD_3_86D67B570EA3C031_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_1966BC60ACBE9F6A(::UnityEngine::Rendering::Universal::ScreenEffects* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::ScreenEffects*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_AC4A30C6B10898C4_METHOD_3_1966BC60ACBE9F6A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_634E6F4303080601(::UnityEngine::Rendering::Universal::ScreenEffects* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::ScreenEffects*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_AC4A30C6B10898C4_METHOD_3_634E6F4303080601_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_2EA24B012C3B3D08(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::ScreenEffects* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::ScreenEffects*))((::PBYTE)hIl2Cpp + CLASS_3_AC4A30C6B10898C4_METHOD_3_2EA24B012C3B3D08_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_997ABD4B45F1A0E9(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::ScreenEffects* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::ScreenEffects*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_AC4A30C6B10898C4_METHOD_3_997ABD4B45F1A0E9_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_EC8400E1F9FDF921(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::ScreenEffects* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::ScreenEffects*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_AC4A30C6B10898C4_METHOD_3_EC8400E1F9FDF921_OFFSET))(this, a1, a2, a3);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AC4A30C6B10898C4_TOSTRING_OFFSET))(this);
	}

	::System::Void Method_3_A3C11DAABEADB6D8(::UnityEngine::Rendering::Universal::ScreenEffects* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::ScreenEffects*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_AC4A30C6B10898C4_METHOD_3_A3C11DAABEADB6D8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_F788DB431F3F0579(::System::String* a1, ::System::Single a2, ::System::Action* a3, ::MoleMole::Battle::Entity* a4, ::System::Boolean a5, ::System::String* a6, ::MoleMole::Config::ConfigPosRot* a7, ::System::Boolean a8)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::System::Action*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_AC4A30C6B10898C4_METHOD_3_F788DB431F3F0579_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::MoleMole::Battle::Entity* Method_3_EAA3CD3AB6192364()
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AC4A30C6B10898C4_METHOD_3_EAA3CD3AB6192364_OFFSET))(this);
	}

	::System::String* Method_3_CC7841E04D5BC26D()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AC4A30C6B10898C4_METHOD_3_CC7841E04D5BC26D_OFFSET))(this);
	}

	::System::Void Method_3_D0B68C1DD4B91F49(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_AC4A30C6B10898C4_METHOD_3_D0B68C1DD4B91F49_OFFSET))(this, a1);
	}

	::System::Void Method_3_A29F39D6EDFF36F8(::System::String* a1, ::System::Single a2, ::System::Action* a3, ::MoleMole::Battle::Entity* a4, ::System::Boolean a5, ::System::String* a6, ::MoleMole::Config::ConfigPosRot* a7, ::System::Boolean a8)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::System::Action*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::String*, ::MoleMole::Config::ConfigPosRot*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_AC4A30C6B10898C4_METHOD_3_A29F39D6EDFF36F8_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Void Method_3_1C3FD49C832AD361(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::ScreenEffects* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::ScreenEffects*))((::PBYTE)hIl2Cpp + CLASS_3_AC4A30C6B10898C4_METHOD_3_1C3FD49C832AD361_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_8DDE6AF74C73E11E(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::ScreenEffects* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::ScreenEffects*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_AC4A30C6B10898C4_METHOD_3_8DDE6AF74C73E11E_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_57BE99FF6B5F2421(::UnityEngine::Rendering::Universal::ScreenEffects* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::ScreenEffects*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_AC4A30C6B10898C4_METHOD_3_57BE99FF6B5F2421_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_1C3FD49C832AD361_1(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::ScreenEffects* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::ScreenEffects*))((::PBYTE)hIl2Cpp + CLASS_3_AC4A30C6B10898C4_METHOD_3_1C3FD49C832AD361_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_57BE99FF6B5F2421_1(::UnityEngine::Rendering::Universal::ScreenEffects* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::ScreenEffects*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_AC4A30C6B10898C4_METHOD_3_57BE99FF6B5F2421_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_57BE99FF6B5F2421_2(::UnityEngine::Rendering::Universal::ScreenEffects* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::ScreenEffects*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_AC4A30C6B10898C4_METHOD_3_57BE99FF6B5F2421_2_OFFSET))(this, a1, a2);
	}
};
