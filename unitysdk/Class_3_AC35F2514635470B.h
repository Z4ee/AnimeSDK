#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_B0798E1629E01207.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Rendering/Universal/FXColorCorrection_FxScreenLightMode.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

class Class_1_8A50BFB20D9D2482;
namespace MoleMole { template <typename T> class TwoValue_1; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigEntityFXColorCorrection; }
namespace System { class String; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::NAPRenderPipeline0 { class VolumeProfile_NativeSRP; }
namespace UnityEngine::Rendering { class Volume; }
namespace UnityEngine::Rendering::Universal { class FXColorCorrection; }
namespace UnityEngine::Rendering::Universal { class WeatherConfigScriptableObject; }

#define CLASS_3_AC35F2514635470B_METHOD_3_219AAA5A92EB6CC7_OFFSET UNITYSDK_OFFSET(0x17F0AC00)
#define CLASS_3_AC35F2514635470B_METHOD_3_3DD3727BBA9D56BF_OFFSET UNITYSDK_OFFSET(0x17F1CFA0)
#define CLASS_3_AC35F2514635470B_METHOD_3_47CA68D718F35416_OFFSET UNITYSDK_OFFSET(0x16EA80D0)
#define CLASS_3_AC35F2514635470B_METHOD_3_4E49C7C19C3F38B9_OFFSET UNITYSDK_OFFSET(0x16EB33B0)
#define CLASS_3_AC35F2514635470B_METHOD_3_4FB28139FBD4F884_OFFSET UNITYSDK_OFFSET(0x17F13E40)
#define CLASS_3_AC35F2514635470B_METHOD_3_847D31E0F7541382_OFFSET UNITYSDK_OFFSET(0x16EBA990)
#define CLASS_3_AC35F2514635470B_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17F220B0)
#define CLASS_3_AC35F2514635470B__CTOR_OFFSET UNITYSDK_OFFSET(0x16EA74F0)

inline static constexpr unsigned int Class_3_AC35F2514635470B_TypeDefinitionIndex = 52344;

class Class_3_AC35F2514635470B : public ::Class_2_B0798E1629E01207<::UnityEngine::Rendering::Universal::FXColorCorrection*, ::MoleMole::Config::ConfigEntityFXColorCorrection*>
{
public:
	::MoleMole::TwoValue_1<::System::Single>* Field_3_8; // 0xA8
	::MoleMole::TwoValue_1<::UnityEngine::Color>* Field_3_110; // 0xB0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_72; // 0xB8
	::MoleMole::TwoValue_1<::UnityEngine::Vector3>* Field_3_6; // 0xC0
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_16; // 0xC8
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_76; // 0xD0
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_60; // 0xD8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_92; // 0xE0
	::MoleMole::TwoValue_1<::UnityEngine::Color>* Field_3_124; // 0xE8
	::MoleMole::TwoValue_1<::UnityEngine::Vector3>* Field_3_138; // 0xF0
	::MoleMole::TwoValue_1<::UnityEngine::Rendering::Universal::WeatherConfigScriptableObject*>* Field_3_10; // 0xF8
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_14; // 0x100
	::MoleMole::TwoValue_1<::System::Single>* Field_3_22; // 0x108
	::MoleMole::TwoValue_1<::System::Single>* Field_3_134; // 0x110
	::MoleMole::TwoValue_1<::System::Single>* Field_3_74; // 0x118
	::MoleMole::TwoValue_1<::UnityEngine::Color>* Field_3_50; // 0x120
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_132; // 0x128
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_130; // 0x130
	::MoleMole::TwoValue_1<::UnityEngine::Color>* Field_3_126; // 0x138
	::MoleMole::TwoValue_1<::UnityEngine::Vector2>* Field_3_116; // 0x140
	::MoleMole::TwoValue_1<::UnityEngine::Vector4>* Field_3_28; // 0x148
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_78; // 0x150
	::MoleMole::TwoValue_1<::System::Single>* Field_3_48; // 0x158
	::MoleMole::TwoValue_1<::UnityEngine::Texture*>* Field_3_30; // 0x160
	::MoleMole::TwoValue_1<::UnityEngine::Vector4>* Field_3_42; // 0x168
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_54; // 0x170
	::UnityEngine::Rendering::Universal::WeatherConfigScriptableObject* Field_3_9; // 0x178
	::MoleMole::TwoValue_1<::System::Single>* Field_3_98; // 0x180
	::MoleMole::TwoValue_1<::System::Single>* Field_3_0; // 0x188
	::MoleMole::TwoValue_1<::UnityEngine::Color>* Field_3_82; // 0x190
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_24; // 0x198
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_102; // 0x1A0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_26; // 0x1A8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_86; // 0x1B0
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_122; // 0x1B8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_4; // 0x1C0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_56; // 0x1C8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_96; // 0x1D0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_68; // 0x1D8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_84; // 0x1E0
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_112; // 0x1E8
	::UnityEngine::Texture* Field_3_135; // 0x1F0
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_66; // 0x1F8
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_90; // 0x200
	::MoleMole::TwoValue_1<::UnityEngine::Color>* Field_3_70; // 0x208
	::MoleMole::TwoValue_1<::UnityEngine::Color>* Field_3_64; // 0x210
	::MoleMole::TwoValue_1<::System::Single>* Field_3_46; // 0x218
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_118; // 0x220
	::MoleMole::TwoValue_1<::System::Single>* Field_3_62; // 0x228
	::MoleMole::TwoValue_1<::UnityEngine::Vector4>* Field_3_36; // 0x230
	::MoleMole::TwoValue_1<::System::Single>* Field_3_100; // 0x238
	::MoleMole::TwoValue_1<::UnityEngine::Vector4>* Field_3_38; // 0x240
	::MoleMole::TwoValue_1<::UnityEngine::Color>* Field_3_120; // 0x248
	::MoleMole::TwoValue_1<::System::Single>* Field_3_52; // 0x250
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_40; // 0x258
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_104; // 0x260
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_20; // 0x268
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_94; // 0x270
	::MoleMole::TwoValue_1<::UnityEngine::Color>* Field_3_80; // 0x278
	::MoleMole::TwoValue_1<::System::Single>* Field_3_106; // 0x280
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_2; // 0x288
	::MoleMole::TwoValue_1<::UnityEngine::Vector4>* Field_3_34; // 0x290
	::MoleMole::TwoValue_1<::System::Single>* Field_3_114; // 0x298
	::MoleMole::TwoValue_1<::System::Single>* Field_3_140; // 0x2A0
	::MoleMole::TwoValue_1<::UnityEngine::Rendering::Universal::FXColorCorrection_FxScreenLightMode>* Field_3_12; // 0x2A8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_58; // 0x2B0
	::UnityEngine::Texture* Field_3_29; // 0x2B8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_44; // 0x2C0
	::MoleMole::TwoValue_1<::UnityEngine::Texture*>* Field_3_128; // 0x2C8
	::MoleMole::TwoValue_1<::UnityEngine::Color>* Field_3_18; // 0x2D0
	::MoleMole::TwoValue_1<::UnityEngine::Vector4>* Field_3_32; // 0x2D8
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_136; // 0x2E0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_88; // 0x2E8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_142; // 0x2F0
	::MoleMole::TwoValue_1<::System::Single>* Field_3_108; // 0x2F8
	::System::Boolean Field_3_65; // 0x300
	::System::Boolean Field_3_119; // 0x301
	::System::Boolean Field_3_1; // 0x302
	::System::Single Field_3_99; // 0x304
	::System::Single Field_3_11; // 0x308
	::UnityEngine::Color Field_3_125; // 0x30C
	::System::Single Field_3_95; // 0x31C
	::System::Boolean Field_3_23; // 0x320
	::System::Boolean Field_3_139; // 0x321
	::System::Boolean Field_3_101; // 0x322
	::System::Boolean Field_3_93; // 0x323
	::System::Single Field_3_75; // 0x324
	::System::Single Field_3_55; // 0x328
	::System::Single Field_3_21; // 0x32C
	::System::Single Field_3_147; // 0x330
	::UnityEngine::Vector4 Field_3_33; // 0x334
	::UnityEngine::Rendering::Universal::FXColorCorrection_FxScreenLightMode Field_3_19; // 0x344
	::System::Single Field_3_105; // 0x348
	::UnityEngine::Color Field_3_49; // 0x34C
	::System::Single Field_3_85; // 0x35C
	::UnityEngine::Vector4 Field_3_39; // 0x360
	::System::Single Field_3_79; // 0x370
	::System::Single Field_3_63; // 0x374
	::UnityEngine::Color Field_3_131; // 0x378
	::UnityEngine::Vector4 Field_3_37; // 0x388
	::System::Single Field_3_107; // 0x398
	::System::Boolean Field_3_53; // 0x39C
	::System::Boolean Field_3_111; // 0x39D
	::System::Boolean Field_3_67; // 0x39E
	::System::Boolean Field_3_143; // 0x39F
	::System::Boolean Field_3_83; // 0x3A0
	::System::Boolean Field_3_89; // 0x3A1
	::System::Boolean Field_3_13; // 0x3A2
	::System::Boolean Field_3_31; // 0x3A3
	::System::Single Field_3_7; // 0x3A4
	::UnityEngine::Vector4 Field_3_35; // 0x3A8
	::UnityEngine::Vector3 Field_3_137; // 0x3B8
	::System::Single Field_3_59; // 0x3C4
	::UnityEngine::Vector3 Field_3_5; // 0x3C8
	::System::Boolean Field_3_77; // 0x3D4
	::System::Boolean Field_3_47; // 0x3D5
	::System::Boolean Field_3_117; // 0x3D6
	::System::Boolean Field_3_121; // 0x3D7
	::System::Single Field_3_25; // 0x3D8
	::UnityEngine::Color Field_3_87; // 0x3DC
	::UnityEngine::Vector2 Field_3_123; // 0x3EC
	::System::Single Field_3_57; // 0x3F4
	::UnityEngine::Vector4 Field_3_41; // 0x3F8
	::System::Single Field_3_91; // 0x408
	::System::Single Field_3_141; // 0x40C
	::System::Single Field_3_133; // 0x410
	::UnityEngine::Color Field_3_69; // 0x414
	::UnityEngine::Color Field_3_17; // 0x424
	::System::Boolean Field_3_27; // 0x434
	::System::Boolean Field_3_129; // 0x435
	::System::Single Field_3_73; // 0x438
	::UnityEngine::Color Field_3_71; // 0x43C
	::System::Single Field_3_15; // 0x44C
	::System::Single Field_3_115; // 0x450
	::UnityEngine::Color Field_3_109; // 0x454
	::System::Single Field_3_97; // 0x464
	::System::Single Field_3_45; // 0x468
	::UnityEngine::Color Field_3_81; // 0x46C
	::System::Single Field_3_113; // 0x47C
	::System::Single Field_3_51; // 0x480
	::UnityEngine::Color Field_3_127; // 0x484
	::System::Single Field_3_61; // 0x494
	::UnityEngine::Vector4 Field_3_43; // 0x498
	::System::Single Field_3_103; // 0x4A8

	::System::Void _ctor(::System::String* a1, ::MoleMole::Config::ConfigEntityFXColorCorrection* a2, ::UnityEngine::Rendering::Volume* a3, ::MoleMole::Battle::Entity* a4, ::Class_1_8A50BFB20D9D2482* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Config::ConfigEntityFXColorCorrection*, ::UnityEngine::Rendering::Volume*, ::MoleMole::Battle::Entity*, ::Class_1_8A50BFB20D9D2482*))((::PBYTE)hIl2Cpp + CLASS_3_AC35F2514635470B__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_47CA68D718F35416(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::FXColorCorrection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::FXColorCorrection*))((::PBYTE)hIl2Cpp + CLASS_3_AC35F2514635470B_METHOD_3_47CA68D718F35416_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_4E49C7C19C3F38B9(::UnityEngine::Rendering::Universal::FXColorCorrection* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::FXColorCorrection*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_AC35F2514635470B_METHOD_3_4E49C7C19C3F38B9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_847D31E0F7541382(::UnityEngine::Rendering::Universal::FXColorCorrection* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::FXColorCorrection*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_AC35F2514635470B_METHOD_3_847D31E0F7541382_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_219AAA5A92EB6CC7(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::FXColorCorrection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::FXColorCorrection*))((::PBYTE)hIl2Cpp + CLASS_3_AC35F2514635470B_METHOD_3_219AAA5A92EB6CC7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_4FB28139FBD4F884(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::FXColorCorrection* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::FXColorCorrection*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_AC35F2514635470B_METHOD_3_4FB28139FBD4F884_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_3DD3727BBA9D56BF(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::FXColorCorrection* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::FXColorCorrection*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_AC35F2514635470B_METHOD_3_3DD3727BBA9D56BF_OFFSET))(this, a1, a2, a3);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AC35F2514635470B_TOSTRING_OFFSET))(this);
	}
};
