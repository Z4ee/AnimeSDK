#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_17B78A87EAE1DCED.h"
#include "unitysdk/Enum_3_64FEF67DF2D01E84.h"
#include "unitysdk/Foundation/Tuple_3.h"
#include "unitysdk/MoleMole/Config/MatPropertySetting.h"
#include "unitysdk/MoleMole/Config/MaterialPropertyType.h"
#include "unitysdk/MoleMole/EffectSimulate/ESLoopable.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueBool.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueColor.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueFloat.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueTexture.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueVector.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace MoleMole { class ConfigAnimationCurveGroup; }
namespace MoleMole { class ConfigMaterialPropertyModifier; }
namespace MoleMole::Config { class ConfigMaterialPropertyModifierMap; }
namespace MoleMole::EffectSimulate { class Color01KeyframeCurve; }
namespace MoleMole::EffectSimulate { class ESAvatarMatChange_RendererPartInfo; }
namespace MoleMole::EffectSimulate { class Float01KeyframeCurve; }
namespace MoleMole::EffectSimulate { class UV01KeyframeCurve; }
namespace MoleMole::EffectSimulate { class Vector201KeyframeCurve; }
namespace MoleMole::EffectSimulate { class Vector401KeyframeCurve; }
namespace MoleMole::EffectSimulate { template <typename T> class Keyframeable01Curve_1; }
namespace Sirenix::OdinInspector { template <typename T> class ValueDropdownList_1; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Action_4; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Texture; }

#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_032DFEAD312377C0_OFFSET UNITYSDK_OFFSET(0x1104A330)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_0721A34A3F235CD6_OFFSET UNITYSDK_OFFSET(0x1104AB90)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_0A3CE4A741F45029_OFFSET UNITYSDK_OFFSET(0x1104BB40)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_0B1EB5C9B94BAB66_OFFSET UNITYSDK_OFFSET(0x11048170)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_0FF9BF68FEB50D87_OFFSET UNITYSDK_OFFSET(0x1104A7F0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_15589D72A798461B_OFFSET UNITYSDK_OFFSET(0x11045580)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_15DCCE49BC0108C7_OFFSET UNITYSDK_OFFSET(0x11046EB0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_167F9AB65FD3C1E9_OFFSET UNITYSDK_OFFSET(0x11042230)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_18F90A371677B540_OFFSET UNITYSDK_OFFSET(0x11047DC0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_1B8ECE9B8EFBF530_OFFSET UNITYSDK_OFFSET(0x1104AEA0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_1DC5C67BADA233F2_OFFSET UNITYSDK_OFFSET(0x1104B9D0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_1EC08054332D6E78_OFFSET UNITYSDK_OFFSET(0x1104BDB0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_1F35A34EF6B8D691_OFFSET UNITYSDK_OFFSET(0x11047420)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_25862DBE61A3FF7D_OFFSET UNITYSDK_OFFSET(0x11048D50)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x1104BAA0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_2A621E60C1B92639_OFFSET UNITYSDK_OFFSET(0x11049E20)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_30F055975532AFD2_OFFSET UNITYSDK_OFFSET(0x11042F90)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_3465AD12EDAA53AB_OFFSET UNITYSDK_OFFSET(0x1104C190)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_351C4FD1DB2A02BE_OFFSET UNITYSDK_OFFSET(0x110433F0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x11041D10)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_391A84BCD9F51317_2_OFFSET UNITYSDK_OFFSET(0x11044550)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_391A84BCD9F51317_3_OFFSET UNITYSDK_OFFSET(0x11044CB0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x11040FF0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_3B59663CDC1F907C_OFFSET UNITYSDK_OFFSET(0x11049520)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x110421A0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_3EB003E6F47D1FDF_1_OFFSET UNITYSDK_OFFSET(0x11049C80)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_3EB003E6F47D1FDF_OFFSET UNITYSDK_OFFSET(0x11043880)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_3F6D459B7BA17E37_OFFSET UNITYSDK_OFFSET(0x110425F0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_4272BE5198E6F216_OFFSET UNITYSDK_OFFSET(0x1104B7B0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0x1104A360)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_4343F372F34C05BF_2_OFFSET UNITYSDK_OFFSET(0x1104C9F0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x11041DA0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_49AC00594530B714_1_OFFSET UNITYSDK_OFFSET(0x11044C20)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_49AC00594530B714_OFFSET UNITYSDK_OFFSET(0x11041D50)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_49D41C826A66EA0F_OFFSET UNITYSDK_OFFSET(0x110418E0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_4AB4D5F3903D0133_OFFSET UNITYSDK_OFFSET(0x11046460)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_4AEBC27535CE7836_OFFSET UNITYSDK_OFFSET(0x110453F0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_4BD70257E617DEC0_OFFSET UNITYSDK_OFFSET(0x11043E70)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_4EF39E24235C05BA_OFFSET UNITYSDK_OFFSET(0x110419B0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_4F127FCB7C2E8AED_OFFSET UNITYSDK_OFFSET(0x11043A50)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_523E7766224C5985_OFFSET UNITYSDK_OFFSET(0x1104AC80)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_595E641DF1B4387D_1_OFFSET UNITYSDK_OFFSET(0x1104B7C0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_595E641DF1B4387D_OFFSET UNITYSDK_OFFSET(0x11043670)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_5C27C8EFFB7EF72B_OFFSET UNITYSDK_OFFSET(0x110450D0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_6020561CA0348DF2_OFFSET UNITYSDK_OFFSET(0x110444F0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_60E1F7F58CCF739F_OFFSET UNITYSDK_OFFSET(0x1104A4C0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_64890C014C2E0CC0_OFFSET UNITYSDK_OFFSET(0x11047740)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_66193B8782064F5D_OFFSET UNITYSDK_OFFSET(0x11043570)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_681E224EC188A7D5_OFFSET UNITYSDK_OFFSET(0x11041030)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_6C766F53B1CC8109_OFFSET UNITYSDK_OFFSET(0x110445E0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_71F8914B71084768_OFFSET UNITYSDK_OFFSET(0x11043D00)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_74DF49A67006D1EF_OFFSET UNITYSDK_OFFSET(0x1104C2D0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_74F298BDAF021C94_OFFSET UNITYSDK_OFFSET(0x110476D0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_77254DE60C8D74CE_OFFSET UNITYSDK_OFFSET(0x1104A570)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_7EAAFC58338571AC_OFFSET UNITYSDK_OFFSET(0x110454A0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_84995642A381B4E7_OFFSET UNITYSDK_OFFSET(0x110438E0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_8558E387859BE466_OFFSET UNITYSDK_OFFSET(0x11047F00)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_858330AA569596B8_OFFSET UNITYSDK_OFFSET(0x11048B00)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_86ADBB4228161C74_OFFSET UNITYSDK_OFFSET(0x11041190)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_91EC9A97CFC580C4_OFFSET UNITYSDK_OFFSET(0x11045A30)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_93B11D936DE46402_OFFSET UNITYSDK_OFFSET(0x1104C500)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_9441529D4B4B549D_1_OFFSET UNITYSDK_OFFSET(0x110482C0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_9441529D4B4B549D_OFFSET UNITYSDK_OFFSET(0x11041140)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_97B3D064317CBD55_OFFSET UNITYSDK_OFFSET(0x11041730)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_98F2C6700C79FC7B_OFFSET UNITYSDK_OFFSET(0x11042D00)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_9F8EF6EE79B16064_OFFSET UNITYSDK_OFFSET(0x11041CA0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_A239DF324AF4215D_1_OFFSET UNITYSDK_OFFSET(0x1104A4D0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x110435D0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_A36A663AAAEECCC3_OFFSET UNITYSDK_OFFSET(0x11043D50)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_AAA5D9082F14E784_OFFSET UNITYSDK_OFFSET(0x110416D0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_AB16839EF6AC669C_OFFSET UNITYSDK_OFFSET(0x11046E70)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_ABC8D484A6686265_OFFSET UNITYSDK_OFFSET(0x11041E50)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_B14F449F40FB49A1_OFFSET UNITYSDK_OFFSET(0x110426F0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_B700C588F0375CB9_OFFSET UNITYSDK_OFFSET(0x11041800)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_B747781924F4C9A5_OFFSET UNITYSDK_OFFSET(0x1104A9C0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_BA889FB230129F53_OFFSET UNITYSDK_OFFSET(0x11042870)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_BE0B46E2EB67FE6C_OFFSET UNITYSDK_OFFSET(0x110492C0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_C6CB45EC97669A7F_OFFSET UNITYSDK_OFFSET(0x11048310)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_C7AAF17DCEC0ED53_OFFSET UNITYSDK_OFFSET(0x11047FF0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x11041690)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x11047D80)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_CA373AA1C7054598_3_OFFSET UNITYSDK_OFFSET(0x11041E10)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x11041650)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_CAE5E281C1387FAA_OFFSET UNITYSDK_OFFSET(0x11049B70)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_CB7ECC66FD28DB10_OFFSET UNITYSDK_OFFSET(0x1104AA90)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_CC407148D5B8B025_OFFSET UNITYSDK_OFFSET(0x11043AA0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_CCFDEEDCD5323B77_OFFSET UNITYSDK_OFFSET(0x11049CE0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_CD291CEE2301C52F_OFFSET UNITYSDK_OFFSET(0x1104C800)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_CE3C4BA2A61197F1_OFFSET UNITYSDK_OFFSET(0x1104C5E0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_CFC69F38706EDADE_OFFSET UNITYSDK_OFFSET(0x11048A10)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_D7CD998E3C12F8FA_OFFSET UNITYSDK_OFFSET(0x1104A940)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_DA0E665FDD3C2872_OFFSET UNITYSDK_OFFSET(0x11042370)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_DA3AB34EE5446F46_OFFSET UNITYSDK_OFFSET(0x110413C0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_DE0AC7DE7E87AD18_OFFSET UNITYSDK_OFFSET(0x110430B0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_E006F4B7F26D8648_OFFSET UNITYSDK_OFFSET(0x11047E10)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_E01DF25BA0CB643A_OFFSET UNITYSDK_OFFSET(0x11042B00)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_E0AA0DE1E16ACE2C_OFFSET UNITYSDK_OFFSET(0x11042C00)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_E0F2C81B101352A9_OFFSET UNITYSDK_OFFSET(0x11049A00)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_E121925593BB16FB_OFFSET UNITYSDK_OFFSET(0x11044D40)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_E21475E93D67A007_OFFSET UNITYSDK_OFFSET(0x11043310)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_E88A7015CAF02BDB_OFFSET UNITYSDK_OFFSET(0x11049760)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_EEA73B6010018ADD_OFFSET UNITYSDK_OFFSET(0x11041090)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_EF6A2C695A74CE87_OFFSET UNITYSDK_OFFSET(0x11046730)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_F0F497FA4BDD6520_OFFSET UNITYSDK_OFFSET(0x11043FD0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_F291D33602C690AF_OFFSET UNITYSDK_OFFSET(0x11048BD0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_F7B27AD97C12F8DA_OFFSET UNITYSDK_OFFSET(0x1104BBB0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_F7F86838A0D8F98E_OFFSET UNITYSDK_OFFSET(0x110452B0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_F91B8892FC7A8C48_1_OFFSET UNITYSDK_OFFSET(0x110417A0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_F91B8892FC7A8C48_OFFSET UNITYSDK_OFFSET(0x110410E0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE__CCTOR_OFFSET UNITYSDK_OFFSET(0x11042190)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x11041F20)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESAvatarMatChange_TypeDefinitionIndex = 63014;

	class ESAvatarMatChange : public ::MoleMole::EffectSimulate::ESLoopable
	{
	public:
		static ::System::Action_2<::UnityEngine::Material*, ::System::Boolean>** StaticGet_m_fcMakeAvatarMatKeywordChange()
		{
			return (::System::Action_2<::UnityEngine::Material*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ESAvatarMatChange_TypeDefinitionIndex)->GetStaticField(0x4AD30);
		}
		// static const ::System::Int32 DRAW_ORDER = 0x14; // 0x0
		// static const ::System::String* BASE_GROUP_NAME; // 0x0
		// static const ::System::String* OTHER_GROUP_NAME; // 0x0
		// static const ::System::Int32 TOP_DRAW_ORDER = 0xFFFFFF9C; // 0x0
		// static const ::System::String* RENDERER_PART_CONFIG_GROUP_NAME; // 0x0
		// static const ::System::String* MAT_PROP_MODIFIER_ASSET_FOLDER_PATH; // 0x0
		// static const ::System::String* MAT_PROP_MODIFIER_ASSET_AUTOGEN_FOLDER_PATH; // 0x0
		// static const ::System::String* MAT_PROP_MODIFIER_TEMP_SELECT_SPLIT_CHAR; // 0x0
		::MoleMole::EffectSimulate::ESAvatarMatChange_RendererPartInfo* m_stOverrideRendererPartInfo; // 0x58
		::UnityEngine::Renderer* m_stRenderer; // 0x60
		::System::Int32 _uniqueSeqID; // 0x68
		::System::String* _tempSelect; // 0x70
		::MoleMole::EffectSimulate::ESAvatarMatChange_RendererPartInfo* rendererPartInfo; // 0x78
		::UnityEngine::AnimationCurve* fadeInCurve; // 0x80
		::UnityEngine::AnimationCurve* fadeOutCurve; // 0x88
		::UnityEngine::AnimationCurve* fadeOutCurve_Shower; // 0x90
		::System::Int32 priority; // 0x98
		::System::Boolean ignoreWorldTimescale; // 0x9C
		::System::Boolean ignoreOwnerTimescale; // 0x9D
		::System::Boolean ignoreWitchTimescale; // 0x9E
		::System::Boolean canCarryIntoBlackCurtain; // 0x9F
		::System::Boolean forbidSuspendByBlackCurtain; // 0xA0
		::System::Boolean endPerformWhiteList; // 0xA1
		::System::Boolean applyToAllShaders; // 0xA2
		::System::Boolean canPlayInCoopNonAuthority; // 0xA3
		::System::Boolean UseQuaSetting; // 0xA4
		::MoleMole::Config::MatPropertySetting QuaSetting; // 0xA5
		::MoleMole::EffectSimulate::Float01KeyframeCurve* enableCurve; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE__CCTOR_OFFSET))();
		}

		::System::Boolean Method_3_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_391A84BCD9F51317_OFFSET))(this);
		}

		::System::Type* Method_3_681E224EC188A7D5()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_681E224EC188A7D5_OFFSET))(this);
		}

		::MoleMole::Config::MaterialPropertyType Method_3_EEA73B6010018ADD()
		{
			return ((::MoleMole::Config::MaterialPropertyType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_EEA73B6010018ADD_OFFSET))(this);
		}

		::System::Void Method_3_F91B8892FC7A8C48(::MoleMole::ConfigMaterialPropertyModifier* a1, ::MoleMole::ConfigAnimationCurveGroup* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigMaterialPropertyModifier*, ::MoleMole::ConfigAnimationCurveGroup*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_F91B8892FC7A8C48_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_3_9441529D4B4B549D(::MoleMole::ConfigMaterialPropertyModifier* a1, ::MoleMole::ConfigAnimationCurveGroup* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigMaterialPropertyModifier*, ::MoleMole::ConfigAnimationCurveGroup*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_9441529D4B4B549D_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_3_86ADBB4228161C74()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_86ADBB4228161C74_OFFSET))(this);
		}

		::System::Void Method_3_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_3_CA373AA1C7054598_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_CA373AA1C7054598_1_OFFSET))(this);
		}

		::System::Void Method_3_AAA5D9082F14E784(::UnityEngine::Material* a1, ::UnityEngine::MaterialPropertyBlock* a2, ::UnityEngine::Material* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_AAA5D9082F14E784_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_3_97B3D064317CBD55(::UnityEngine::Renderer* a1, ::UnityEngine::Material* a2, ::UnityEngine::MaterialPropertyBlock* a3, ::UnityEngine::Material* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::UnityEngine::Material*, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_97B3D064317CBD55_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_3_F91B8892FC7A8C48_1(::MoleMole::ConfigMaterialPropertyModifier* a1, ::MoleMole::ConfigAnimationCurveGroup* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigMaterialPropertyModifier*, ::MoleMole::ConfigAnimationCurveGroup*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_F91B8892FC7A8C48_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_3_B700C588F0375CB9(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_B700C588F0375CB9_OFFSET))(this, a1);
		}

		::System::Boolean Method_3_4EF39E24235C05BA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_4EF39E24235C05BA_OFFSET))(this);
		}

		::System::Void Method_3_9F8EF6EE79B16064(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_9F8EF6EE79B16064_OFFSET))(this, a1);
		}

		::System::Boolean Method_3_391A84BCD9F51317_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_391A84BCD9F51317_1_OFFSET))(this);
		}

		::Enum_3_17B78A87EAE1DCED Method_3_49AC00594530B714()
		{
			return ((::Enum_3_17B78A87EAE1DCED(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_49AC00594530B714_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Void Method_3_ABC8D484A6686265(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_ABC8D484A6686265_OFFSET))(this, a1);
		}

		::System::Void Method_3_3E7178C5ECF017DB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_3E7178C5ECF017DB_OFFSET))(this, a1);
		}

		::System::Void Method_3_167F9AB65FD3C1E9(::UnityEngine::Material* a1, ::UnityEngine::Material* a2, ::System::Boolean a3, ::MoleMole::EffectSimulate::Keyframeable01Curve_1<::UnityEngine::Vector4>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::Material*, ::System::Boolean, ::MoleMole::EffectSimulate::Keyframeable01Curve_1<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_167F9AB65FD3C1E9_OFFSET))(this, a1, a2, a3, a4);
		}

		::UnityEngine::Vector4 Method_3_3F6D459B7BA17E37(::UnityEngine::Vector4 a1, ::UnityEngine::Vector4 a2, ::System::Byte a3)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::UnityEngine::Vector4, ::UnityEngine::Vector4, ::System::Byte))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_3F6D459B7BA17E37_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_3_B14F449F40FB49A1(::UnityEngine::MaterialPropertyBlock* a1, ::System::String* a2, ::UnityEngine::Color a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*, ::System::String*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_B14F449F40FB49A1_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::AnimationCurve* Method_3_BA889FB230129F53(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_BA889FB230129F53_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean Method_3_E01DF25BA0CB643A(::MoleMole::EffectSimulate::Float01KeyframeCurve* a1, ::MoleMole::MaterialPropertyModifierValueFloat a2, ::MoleMole::ConfigAnimationCurveGroup* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::EffectSimulate::Float01KeyframeCurve*, ::MoleMole::MaterialPropertyModifierValueFloat, ::MoleMole::ConfigAnimationCurveGroup*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_E01DF25BA0CB643A_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void Method_3_98F2C6700C79FC7B(::UnityEngine::AnimationCurve* a1)
		{
			return ((::System::Void(*)(::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_98F2C6700C79FC7B_OFFSET))(a1);
		}

		::System::Void Method_3_30F055975532AFD2(::UnityEngine::Material* a1, ::UnityEngine::Material* a2, ::System::Boolean a3, ::MoleMole::EffectSimulate::Keyframeable01Curve_1<::System::Single>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::Material*, ::System::Boolean, ::MoleMole::EffectSimulate::Keyframeable01Curve_1<::System::Single>*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_30F055975532AFD2_OFFSET))(this, a1, a2, a3, a4);
		}

		::MoleMole::MaterialPropertyModifierValueVector Method_3_E21475E93D67A007(::System::Boolean a1, ::MoleMole::EffectSimulate::Vector201KeyframeCurve* a2)
		{
			return ((::MoleMole::MaterialPropertyModifierValueVector(*)(::PVOID, ::System::Boolean, ::MoleMole::EffectSimulate::Vector201KeyframeCurve*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_E21475E93D67A007_OFFSET))(this, a1, a2);
		}

		::System::Single Method_3_DA3AB34EE5446F46()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_DA3AB34EE5446F46_OFFSET))(this);
		}

		::System::Boolean Method_3_66193B8782064F5D()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_66193B8782064F5D_OFFSET))(this);
		}

		::MoleMole::MaterialPropertyModifierValueFloat Method_3_3EB003E6F47D1FDF(::System::Boolean a1)
		{
			return ((::MoleMole::MaterialPropertyModifierValueFloat(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_3EB003E6F47D1FDF_OFFSET))(this, a1);
		}

		::System::Void Method_3_84995642A381B4E7(::MoleMole::ConfigAnimationCurveGroup* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigAnimationCurveGroup*, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_84995642A381B4E7_OFFSET))(this, a1, a2, a3, a4);
		}

		::MoleMole::EffectSimulate::ESAvatarMatChange_RendererPartInfo* Method_3_4F127FCB7C2E8AED()
		{
			return ((::MoleMole::EffectSimulate::ESAvatarMatChange_RendererPartInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_4F127FCB7C2E8AED_OFFSET))(this);
		}

		::System::Void Method_3_CC407148D5B8B025(::MoleMole::ConfigAnimationCurveGroup* a1, ::System::Single a2, ::System::Single a3, ::System::Boolean a4, ::MoleMole::EffectSimulate::Float01KeyframeCurve* a5)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigAnimationCurveGroup*, ::System::Single, ::System::Single, ::System::Boolean, ::MoleMole::EffectSimulate::Float01KeyframeCurve*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_CC407148D5B8B025_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Method_3_71F8914B71084768(::MoleMole::EffectSimulate::ESAvatarMatChange_RendererPartInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EffectSimulate::ESAvatarMatChange_RendererPartInfo*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_71F8914B71084768_OFFSET))(this, a1);
		}

		::System::Void Method_3_A36A663AAAEECCC3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_A36A663AAAEECCC3_OFFSET))(this);
		}

		::System::Void Method_3_4BD70257E617DEC0(::UnityEngine::MaterialPropertyBlock* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_4BD70257E617DEC0_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_3_F0F497FA4BDD6520(::UnityEngine::Renderer* a1, ::UnityEngine::Material* a2, ::System::String* a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::UnityEngine::Material*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_F0F497FA4BDD6520_OFFSET))(this, a1, a2, a3, a4);
		}

		::UnityEngine::Texture* Method_3_6020561CA0348DF2(::MoleMole::MaterialPropertyModifierValueTexture a1)
		{
			return ((::UnityEngine::Texture*(*)(::PVOID, ::MoleMole::MaterialPropertyModifierValueTexture))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_6020561CA0348DF2_OFFSET))(this, a1);
		}

		::System::Boolean Method_3_391A84BCD9F51317_2()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_391A84BCD9F51317_2_OFFSET))(this);
		}

		::System::Void Method_3_6C766F53B1CC8109(::MoleMole::ConfigAnimationCurveGroup* a1, ::System::Single a2, ::System::Single a3, ::System::Boolean a4, ::MoleMole::EffectSimulate::Vector401KeyframeCurve* a5, ::System::Byte a6)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigAnimationCurveGroup*, ::System::Single, ::System::Single, ::System::Boolean, ::MoleMole::EffectSimulate::Vector401KeyframeCurve*, ::System::Byte))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_6C766F53B1CC8109_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::Enum_3_17B78A87EAE1DCED Method_3_49AC00594530B714_1()
		{
			return ((::Enum_3_17B78A87EAE1DCED(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_49AC00594530B714_1_OFFSET))(this);
		}

		::System::Boolean Method_3_391A84BCD9F51317_3()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_391A84BCD9F51317_3_OFFSET))(this);
		}

		::System::Void Method_3_E121925593BB16FB(::MoleMole::ConfigAnimationCurveGroup* a1, ::System::Single a2, ::System::Single a3, ::System::Boolean a4, ::MoleMole::EffectSimulate::Vector201KeyframeCurve* a5)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigAnimationCurveGroup*, ::System::Single, ::System::Single, ::System::Boolean, ::MoleMole::EffectSimulate::Vector201KeyframeCurve*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_E121925593BB16FB_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Method_3_5C27C8EFFB7EF72B(::UnityEngine::Material* a1, ::UnityEngine::MaterialPropertyBlock* a2, ::System::Boolean a3, ::MoleMole::EffectSimulate::Keyframeable01Curve_1<::System::Single>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::MaterialPropertyBlock*, ::System::Boolean, ::MoleMole::EffectSimulate::Keyframeable01Curve_1<::System::Single>*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_5C27C8EFFB7EF72B_OFFSET))(this, a1, a2, a3, a4);
		}

		::MoleMole::MaterialPropertyModifierValueFloat Method_3_4AEBC27535CE7836(::System::Boolean a1, ::MoleMole::EffectSimulate::Float01KeyframeCurve* a2)
		{
			return ((::MoleMole::MaterialPropertyModifierValueFloat(*)(::PVOID, ::System::Boolean, ::MoleMole::EffectSimulate::Float01KeyframeCurve*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_4AEBC27535CE7836_OFFSET))(this, a1, a2);
		}

		::System::Void Method_3_7EAAFC58338571AC(::UnityEngine::Renderer* a1, ::UnityEngine::Material* a2, ::UnityEngine::Material* a3, ::System::String* a4, ::System::Boolean a5, ::UnityEngine::Texture* a6)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::UnityEngine::Material*, ::UnityEngine::Material*, ::System::String*, ::System::Boolean, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_7EAAFC58338571AC_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::String* Method_3_91EC9A97CFC580C4(::System::String* a1, ::System::String* a2, ::MoleMole::Config::ConfigMaterialPropertyModifierMap* a3, ::System::Single a4, ::System::String* a5, ::System::Boolean a6, ::System::String* a7, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a8, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a9)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*, ::MoleMole::Config::ConfigMaterialPropertyModifierMap*, ::System::Single, ::System::String*, ::System::Boolean, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_91EC9A97CFC580C4_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		::System::Void Method_3_EF6A2C695A74CE87(::MoleMole::ConfigAnimationCurveGroup* a1, ::System::Single a2, ::System::Single a3, ::System::Boolean a4, ::MoleMole::EffectSimulate::Color01KeyframeCurve* a5)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigAnimationCurveGroup*, ::System::Single, ::System::Single, ::System::Boolean, ::MoleMole::EffectSimulate::Color01KeyframeCurve*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_EF6A2C695A74CE87_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::Enum_3_64FEF67DF2D01E84 Method_3_351C4FD1DB2A02BE()
		{
			return ((::Enum_3_64FEF67DF2D01E84(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_351C4FD1DB2A02BE_OFFSET))(this);
		}

		::System::Void Method_3_4AB4D5F3903D0133(::MoleMole::ConfigAnimationCurveGroup* a1, ::System::Single a2, ::System::Single a3, ::System::Boolean a4, ::MoleMole::EffectSimulate::Float01KeyframeCurve* a5)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigAnimationCurveGroup*, ::System::Single, ::System::Single, ::System::Boolean, ::MoleMole::EffectSimulate::Float01KeyframeCurve*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_4AB4D5F3903D0133_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		static ::System::Void Method_3_AB16839EF6AC669C(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_AB16839EF6AC669C_OFFSET))(a1);
		}

		::System::Void Method_3_15DCCE49BC0108C7(::UnityEngine::Renderer* a1, ::UnityEngine::Material* a2, ::System::String* a3, ::UnityEngine::Color a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::UnityEngine::Material*, ::System::String*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_15DCCE49BC0108C7_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_3_DE0AC7DE7E87AD18(::UnityEngine::Material* a1, ::System::String* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_DE0AC7DE7E87AD18_OFFSET))(this, a1, a2, a3);
		}

		::MoleMole::MaterialPropertyModifierValueBool Method_3_74F298BDAF021C94(::System::Boolean a1)
		{
			return ((::MoleMole::MaterialPropertyModifierValueBool(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_74F298BDAF021C94_OFFSET))(this, a1);
		}

		::System::Void Method_3_64890C014C2E0CC0(::MoleMole::ConfigAnimationCurveGroup* a1, ::System::Single a2, ::System::Single a3, ::System::Boolean a4, ::MoleMole::EffectSimulate::UV01KeyframeCurve* a5)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigAnimationCurveGroup*, ::System::Single, ::System::Single, ::System::Boolean, ::MoleMole::EffectSimulate::UV01KeyframeCurve*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_64890C014C2E0CC0_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Method_3_CA373AA1C7054598_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_CA373AA1C7054598_2_OFFSET))(this);
		}

		::System::Boolean Method_3_595E641DF1B4387D()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_595E641DF1B4387D_OFFSET))(this);
		}

		::System::String* Method_3_18F90A371677B540(::UnityEngine::Object* a1)
		{
			return ((::System::String*(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_18F90A371677B540_OFFSET))(this, a1);
		}

		::MoleMole::MaterialPropertyModifierValueColor Method_3_E006F4B7F26D8648(::System::Boolean a1, ::MoleMole::EffectSimulate::Color01KeyframeCurve* a2)
		{
			return ((::MoleMole::MaterialPropertyModifierValueColor(*)(::PVOID, ::System::Boolean, ::MoleMole::EffectSimulate::Color01KeyframeCurve*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_E006F4B7F26D8648_OFFSET))(this, a1, a2);
		}

		::System::Void Method_3_8558E387859BE466(::UnityEngine::Material* a1, ::UnityEngine::MaterialPropertyBlock* a2, ::System::Boolean a3, ::MoleMole::EffectSimulate::Keyframeable01Curve_1<::UnityEngine::Vector4>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::MaterialPropertyBlock*, ::System::Boolean, ::MoleMole::EffectSimulate::Keyframeable01Curve_1<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_8558E387859BE466_OFFSET))(this, a1, a2, a3, a4);
		}

		::UnityEngine::AnimationCurve* Method_3_E0AA0DE1E16ACE2C(::MoleMole::ConfigAnimationCurveGroup* a1, ::System::String* a2)
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID, ::MoleMole::ConfigAnimationCurveGroup*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_E0AA0DE1E16ACE2C_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_3_0B1EB5C9B94BAB66()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_0B1EB5C9B94BAB66_OFFSET))(this);
		}

		::System::Void Method_3_9441529D4B4B549D_1(::MoleMole::ConfigMaterialPropertyModifier* a1, ::MoleMole::ConfigAnimationCurveGroup* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigMaterialPropertyModifier*, ::MoleMole::ConfigAnimationCurveGroup*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_9441529D4B4B549D_1_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_3_C6CB45EC97669A7F(::MoleMole::EffectSimulate::Color01KeyframeCurve* a1, ::MoleMole::MaterialPropertyModifierValueColor a2, ::MoleMole::ConfigAnimationCurveGroup* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::EffectSimulate::Color01KeyframeCurve*, ::MoleMole::MaterialPropertyModifierValueColor, ::MoleMole::ConfigAnimationCurveGroup*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_C6CB45EC97669A7F_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_3_CFC69F38706EDADE(::UnityEngine::AnimationCurve* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationCurve*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_CFC69F38706EDADE_OFFSET))(this, a1, a2);
		}

		::UnityEngine::AnimationCurve* Method_3_858330AA569596B8(::UnityEngine::AnimationCurve* a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID, ::UnityEngine::AnimationCurve*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_858330AA569596B8_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_3_DA0E665FDD3C2872(::UnityEngine::Material* a1, ::System::String* a2, ::UnityEngine::Vector4 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::String*, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_DA0E665FDD3C2872_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_3_F291D33602C690AF(::UnityEngine::Renderer* a1, ::UnityEngine::Material* a2, ::UnityEngine::Material* a3, ::System::Boolean a4, ::MoleMole::EffectSimulate::Keyframeable01Curve_1<::UnityEngine::Vector2>* a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::UnityEngine::Material*, ::UnityEngine::Material*, ::System::Boolean, ::MoleMole::EffectSimulate::Keyframeable01Curve_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_F291D33602C690AF_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Method_3_BE0B46E2EB67FE6C(::UnityEngine::Renderer* a1, ::UnityEngine::Material* a2, ::UnityEngine::Material* a3, ::System::Boolean a4, ::MoleMole::EffectSimulate::Keyframeable01Curve_1<::UnityEngine::Vector4>* a5, ::System::Byte a6)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::UnityEngine::Material*, ::UnityEngine::Material*, ::System::Boolean, ::MoleMole::EffectSimulate::Keyframeable01Curve_1<::UnityEngine::Vector4>*, ::System::Byte))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_BE0B46E2EB67FE6C_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void Method_3_15589D72A798461B(::UnityEngine::Renderer* a1, ::UnityEngine::Material* a2, ::System::String* a3, ::UnityEngine::Texture* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::UnityEngine::Material*, ::System::String*, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_15589D72A798461B_OFFSET))(this, a1, a2, a3, a4);
		}

		::MoleMole::MaterialPropertyModifierValueTexture Method_3_E88A7015CAF02BDB(::System::Boolean a1, ::UnityEngine::Texture* a2, ::MoleMole::EffectSimulate::UV01KeyframeCurve* a3)
		{
			return ((::MoleMole::MaterialPropertyModifierValueTexture(*)(::PVOID, ::System::Boolean, ::UnityEngine::Texture*, ::MoleMole::EffectSimulate::UV01KeyframeCurve*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_E88A7015CAF02BDB_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_3_E0F2C81B101352A9(::UnityEngine::Renderer* a1, ::UnityEngine::Material* a2, ::UnityEngine::Material* a3, ::System::Boolean a4, ::MoleMole::EffectSimulate::Keyframeable01Curve_1<::UnityEngine::Color>* a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::UnityEngine::Material*, ::UnityEngine::Material*, ::System::Boolean, ::MoleMole::EffectSimulate::Keyframeable01Curve_1<::UnityEngine::Color>*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_E0F2C81B101352A9_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Method_3_A239DF324AF4215D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_A239DF324AF4215D_OFFSET))(this);
		}

		::MoleMole::MaterialPropertyModifierValueVector Method_3_CAE5E281C1387FAA(::System::Boolean a1, ::MoleMole::EffectSimulate::Vector401KeyframeCurve* a2, ::System::Byte a3)
		{
			return ((::MoleMole::MaterialPropertyModifierValueVector(*)(::PVOID, ::System::Boolean, ::MoleMole::EffectSimulate::Vector401KeyframeCurve*, ::System::Byte))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_CAE5E281C1387FAA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_3_25862DBE61A3FF7D(::UnityEngine::Renderer* a1, ::UnityEngine::Material* a2, ::System::String* a3, ::UnityEngine::Vector4 a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::UnityEngine::Material*, ::System::String*, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_25862DBE61A3FF7D_OFFSET))(this, a1, a2, a3, a4);
		}

		::MoleMole::MaterialPropertyModifierValueFloat Method_3_3EB003E6F47D1FDF_1(::System::Boolean a1)
		{
			return ((::MoleMole::MaterialPropertyModifierValueFloat(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_3EB003E6F47D1FDF_1_OFFSET))(this, a1);
		}

		::System::Void Method_3_CCFDEEDCD5323B77(::UnityEngine::Renderer* a1, ::UnityEngine::Material* a2, ::UnityEngine::Material* a3, ::System::Boolean a4, ::MoleMole::EffectSimulate::Keyframeable01Curve_1<::System::Single>* a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::UnityEngine::Material*, ::UnityEngine::Material*, ::System::Boolean, ::MoleMole::EffectSimulate::Keyframeable01Curve_1<::System::Single>*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_CCFDEEDCD5323B77_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Method_3_2A621E60C1B92639(::UnityEngine::Renderer* a1, ::UnityEngine::Material* a2, ::System::String* a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::UnityEngine::Material*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_2A621E60C1B92639_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::System::Collections::Generic::List_1<::Foundation::Tuple_3<::UnityEngine::Material*, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Material*>>*>* Method_3_032DFEAD312377C0()
		{
			return ((::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::System::Collections::Generic::List_1<::Foundation::Tuple_3<::UnityEngine::Material*, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Material*>>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_032DFEAD312377C0_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_4343F372F34C05BF_1_OFFSET))(this);
		}

		::System::Void Method_3_60E1F7F58CCF739F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_60E1F7F58CCF739F_OFFSET))(this);
		}

		::System::Void Method_3_CA373AA1C7054598_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_CA373AA1C7054598_3_OFFSET))(this);
		}

		::System::Void Method_3_A239DF324AF4215D_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_A239DF324AF4215D_1_OFFSET))(this);
		}

		::System::Void Method_3_77254DE60C8D74CE(::UnityEngine::Material* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_77254DE60C8D74CE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_3_0FF9BF68FEB50D87(::UnityEngine::Material* a1, ::UnityEngine::Material* a2, ::System::Boolean a3, ::MoleMole::EffectSimulate::Keyframeable01Curve_1<::UnityEngine::Vector2>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::Material*, ::System::Boolean, ::MoleMole::EffectSimulate::Keyframeable01Curve_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_0FF9BF68FEB50D87_OFFSET))(this, a1, a2, a3, a4);
		}

		::MoleMole::MaterialPropertyModifierValueFloat Method_3_D7CD998E3C12F8FA(::System::Boolean a1, ::System::Single a2)
		{
			return ((::MoleMole::MaterialPropertyModifierValueFloat(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_D7CD998E3C12F8FA_OFFSET))(this, a1, a2);
		}

		::System::Void Method_3_C7AAF17DCEC0ED53(::UnityEngine::MaterialPropertyBlock* a1, ::System::String* a2, ::UnityEngine::Vector4 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*, ::System::String*, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_C7AAF17DCEC0ED53_OFFSET))(this, a1, a2, a3);
		}

		::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>* Method_3_B747781924F4C9A5()
		{
			return ((::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_B747781924F4C9A5_OFFSET))(this);
		}

		::MoleMole::MaterialPropertyModifierValueVector Method_3_CB7ECC66FD28DB10(::System::Boolean a1, ::MoleMole::EffectSimulate::Vector401KeyframeCurve* a2)
		{
			return ((::MoleMole::MaterialPropertyModifierValueVector(*)(::PVOID, ::System::Boolean, ::MoleMole::EffectSimulate::Vector401KeyframeCurve*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_CB7ECC66FD28DB10_OFFSET))(this, a1, a2);
		}

		::System::Void Method_3_0721A34A3F235CD6(::UnityEngine::Material* a1, ::UnityEngine::MaterialPropertyBlock* a2, ::System::Boolean a3, ::MoleMole::EffectSimulate::Keyframeable01Curve_1<::UnityEngine::Color>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::MaterialPropertyBlock*, ::System::Boolean, ::MoleMole::EffectSimulate::Keyframeable01Curve_1<::UnityEngine::Color>*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_0721A34A3F235CD6_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean Method_3_523E7766224C5985(::MoleMole::EffectSimulate::UV01KeyframeCurve* a1, ::MoleMole::MaterialPropertyModifierValueTexture a2, ::MoleMole::ConfigAnimationCurveGroup* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::EffectSimulate::UV01KeyframeCurve*, ::MoleMole::MaterialPropertyModifierValueTexture, ::MoleMole::ConfigAnimationCurveGroup*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_523E7766224C5985_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean Method_3_1B8ECE9B8EFBF530(::UnityEngine::Renderer* a1, ::UnityEngine::Material* a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Renderer*, ::UnityEngine::Material*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_1B8ECE9B8EFBF530_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_3_3B59663CDC1F907C(::UnityEngine::Material* a1, ::System::String* a2, ::UnityEngine::Texture* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::String*, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_3B59663CDC1F907C_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_3_4272BE5198E6F216(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_4272BE5198E6F216_OFFSET))(this, a1);
		}

		::System::Boolean Method_3_595E641DF1B4387D_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_595E641DF1B4387D_1_OFFSET))(this);
		}

		::System::Void Method_3_1DC5C67BADA233F2(::UnityEngine::Material* a1, ::UnityEngine::Material* a2, ::System::String* a3, ::System::Boolean a4, ::UnityEngine::Texture* a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::Material*, ::System::String*, ::System::Boolean, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_1DC5C67BADA233F2_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Method_3_2685B6183E614529(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_2685B6183E614529_OFFSET))(this, a1);
		}

		::System::Void Method_3_0A3CE4A741F45029(::UnityEngine::Material* a1, ::UnityEngine::MaterialPropertyBlock* a2, ::UnityEngine::Material* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_0A3CE4A741F45029_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_3_1F35A34EF6B8D691(::UnityEngine::Material* a1, ::System::String* a2, ::UnityEngine::Color a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::String*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_1F35A34EF6B8D691_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean Method_3_F7B27AD97C12F8DA(::MoleMole::EffectSimulate::Vector401KeyframeCurve* a1, ::MoleMole::MaterialPropertyModifierValueVector a2, ::MoleMole::ConfigAnimationCurveGroup* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::EffectSimulate::Vector401KeyframeCurve*, ::MoleMole::MaterialPropertyModifierValueVector, ::MoleMole::ConfigAnimationCurveGroup*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_F7B27AD97C12F8DA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_3_F7F86838A0D8F98E(::UnityEngine::MaterialPropertyBlock* a1, ::System::String* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_F7F86838A0D8F98E_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_3_1EC08054332D6E78(::System::Action_4<::UnityEngine::Renderer*, ::UnityEngine::Material*, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Material*>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_4<::UnityEngine::Renderer*, ::UnityEngine::Material*, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Material*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_1EC08054332D6E78_OFFSET))(this, a1, a2);
		}

		::System::Void Method_3_3465AD12EDAA53AB(::UnityEngine::Material* a1, ::UnityEngine::Material* a2, ::System::Boolean a3, ::MoleMole::EffectSimulate::Keyframeable01Curve_1<::UnityEngine::Color>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::Material*, ::System::Boolean, ::MoleMole::EffectSimulate::Keyframeable01Curve_1<::UnityEngine::Color>*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_3465AD12EDAA53AB_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_3_74DF49A67006D1EF(::UnityEngine::MaterialPropertyBlock* a1, ::System::String* a2, ::UnityEngine::Texture* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*, ::System::String*, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_74DF49A67006D1EF_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_3_93B11D936DE46402(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_93B11D936DE46402_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_3_CE3C4BA2A61197F1(::MoleMole::EffectSimulate::Vector401KeyframeCurve* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::EffectSimulate::Vector401KeyframeCurve*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_CE3C4BA2A61197F1_OFFSET))(this, a1);
		}

		::System::Void Method_3_CD291CEE2301C52F(::UnityEngine::Material* a1, ::UnityEngine::MaterialPropertyBlock* a2, ::System::String* a3, ::System::Boolean a4, ::UnityEngine::Texture* a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::MaterialPropertyBlock*, ::System::String*, ::System::Boolean, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_CD291CEE2301C52F_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Method_3_4343F372F34C05BF_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_4343F372F34C05BF_2_OFFSET))(this);
		}

		::System::Void Method_3_49D41C826A66EA0F(::System::Action_3<::UnityEngine::Material*, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Material*>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_3<::UnityEngine::Material*, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Material*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_49D41C826A66EA0F_OFFSET))(this, a1, a2);
		}
	};
}
