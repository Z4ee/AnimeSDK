#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_64FEF67DF2D01E84.h"
#include "unitysdk/Foundation/Tuple_3.h"
#include "unitysdk/MoleMole/Config/MatPropertySetting.h"
#include "unitysdk/MoleMole/Config/MaterialPropertyType.h"
#include "unitysdk/MoleMole/EffectSimulate/ESLoopable.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace MoleMole { class ConfigAnimationCurveGroup; }
namespace MoleMole { class ConfigMaterialPropertyModifier; }
namespace MoleMole::EffectSimulate { class ESAvatarMatChange_RendererPartInfo; }
namespace MoleMole::EffectSimulate { class Float01KeyframeCurve; }
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

#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_032DFEAD312377C0_OFFSET UNITYSDK_OFFSET(0x1627BC20)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_0721A34A3F235CD6_OFFSET UNITYSDK_OFFSET(0x1627D7E0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_0B1EB5C9B94BAB66_OFFSET UNITYSDK_OFFSET(0x1627A580)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_0FF9BF68FEB50D87_OFFSET UNITYSDK_OFFSET(0x1627DE30)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_167F9AB65FD3C1E9_OFFSET UNITYSDK_OFFSET(0x1627D010)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_18F90A371677B540_OFFSET UNITYSDK_OFFSET(0x1627C240)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_1B8ECE9B8EFBF530_OFFSET UNITYSDK_OFFSET(0x1627ADC0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_1EC08054332D6E78_OFFSET UNITYSDK_OFFSET(0x1627B840)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_1F51FCC26841F4F1_OFFSET UNITYSDK_OFFSET(0x1627D980)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_23616C0014E07556_OFFSET UNITYSDK_OFFSET(0x162775A0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x1627CC90)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_3465AD12EDAA53AB_OFFSET UNITYSDK_OFFSET(0x16279070)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_351C4FD1DB2A02BE_OFFSET UNITYSDK_OFFSET(0x162789E0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x1627C0F0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x16277560)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_39CEC7711B1B4FAF_OFFSET UNITYSDK_OFFSET(0x1627DF80)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_3D5790ED4F7815D4_OFFSET UNITYSDK_OFFSET(0x1627D600)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x1627EB40)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_3E7584FDE67E43E8_OFFSET UNITYSDK_OFFSET(0x162791A0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_3F6D459B7BA17E37_OFFSET UNITYSDK_OFFSET(0x16278B60)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_4272BE5198E6F216_OFFSET UNITYSDK_OFFSET(0x1627A6D0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0x1627E990)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1627B770)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_474329C0894378F3_OFFSET UNITYSDK_OFFSET(0x16278C40)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_49D41C826A66EA0F_OFFSET UNITYSDK_OFFSET(0x16277E70)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_4EAC7A2BB0978801_OFFSET UNITYSDK_OFFSET(0x1627CD30)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_4EF39E24235C05BA_OFFSET UNITYSDK_OFFSET(0x16277F40)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_4F127FCB7C2E8AED_OFFSET UNITYSDK_OFFSET(0x16278690)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_4F8ABF7E62045EE6_OFFSET UNITYSDK_OFFSET(0x1627CB30)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_5687453DFA10B0C0_OFFSET UNITYSDK_OFFSET(0x16278E50)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_5896DADDA677EA65_OFFSET UNITYSDK_OFFSET(0x16277930)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_595E641DF1B4387D_1_OFFSET UNITYSDK_OFFSET(0x1627E570)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_595E641DF1B4387D_OFFSET UNITYSDK_OFFSET(0x16279480)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_5C27C8EFFB7EF72B_OFFSET UNITYSDK_OFFSET(0x1627E7C0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_5E5D28453CA785EC_OFFSET UNITYSDK_OFFSET(0x1627BEA0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_66193B8782064F5D_OFFSET UNITYSDK_OFFSET(0x16279420)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_6BD7A7BE69471708_OFFSET UNITYSDK_OFFSET(0x1627E000)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_71F8914B71084768_OFFSET UNITYSDK_OFFSET(0x1627EAF0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_75193A4B6FEE850B_OFFSET UNITYSDK_OFFSET(0x16278770)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_7DC43306EDE87579_OFFSET UNITYSDK_OFFSET(0x1627AB70)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_844C72BFE9AF30C0_OFFSET UNITYSDK_OFFSET(0x1627A1D0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_8558E387859BE466_OFFSET UNITYSDK_OFFSET(0x1627C000)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_8685241EDE5B3F69_OFFSET UNITYSDK_OFFSET(0x1627B7C0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_86ADBB4228161C74_OFFSET UNITYSDK_OFFSET(0x16277700)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_8F5CEF363BE6A9A1_OFFSET UNITYSDK_OFFSET(0x16278D80)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_9441529D4B4B549D_OFFSET UNITYSDK_OFFSET(0x162776B0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_97AB013B424504B3_OFFSET UNITYSDK_OFFSET(0x162786E0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_97B3D064317CBD55_OFFSET UNITYSDK_OFFSET(0x16277CB0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_9F8EF6EE79B16064_OFFSET UNITYSDK_OFFSET(0x16278230)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_A239DF324AF4215D_1_OFFSET UNITYSDK_OFFSET(0x1627B6D0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x162785F0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_A36A663AAAEECCC3_OFFSET UNITYSDK_OFFSET(0x1627BD80)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_A6C950F983CEDC98_OFFSET UNITYSDK_OFFSET(0x1627A720)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_AAA5D9082F14E784_OFFSET UNITYSDK_OFFSET(0x16277C50)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_AB16839EF6AC669C_OFFSET UNITYSDK_OFFSET(0x1627BC50)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_ABC8D484A6686265_OFFSET UNITYSDK_OFFSET(0x162782A0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_B2410373305DD167_OFFSET UNITYSDK_OFFSET(0x1627E0B0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_B700C588F0375CB9_OFFSET UNITYSDK_OFFSET(0x16277D80)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_B747781924F4C9A5_OFFSET UNITYSDK_OFFSET(0x1627A4B0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_BA85584E623399AC_OFFSET UNITYSDK_OFFSET(0x16279A90)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_BC31DBCD2D3F2A5F_OFFSET UNITYSDK_OFFSET(0x1627C680)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_BCAE6B27221362DF_OFFSET UNITYSDK_OFFSET(0x16279880)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_BD5D48229C9C702B_OFFSET UNITYSDK_OFFSET(0x1627CE50)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_C46FB2A224B97DCA_OFFSET UNITYSDK_OFFSET(0x16279D60)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_C5E65984103B0C69_OFFSET UNITYSDK_OFFSET(0x1627D8D0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_C70EE4CA60846008_OFFSET UNITYSDK_OFFSET(0x1627BC90)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_C77C2F74249B3836_OFFSET UNITYSDK_OFFSET(0x16279CD0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x16277C10)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x1627A6E0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_CA373AA1C7054598_3_OFFSET UNITYSDK_OFFSET(0x1627E780)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16277BD0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_CD291CEE2301C52F_OFFSET UNITYSDK_OFFSET(0x16279690)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_CE3C4BA2A61197F1_OFFSET UNITYSDK_OFFSET(0x1627E350)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_CF4A1EEFB2C7DA5D_OFFSET UNITYSDK_OFFSET(0x1627D1D0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_DC3C81C81202FE48_OFFSET UNITYSDK_OFFSET(0x1627C290)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_DD6BC1706AE83A61_OFFSET UNITYSDK_OFFSET(0x1627CEE0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_E5ED009040EE5235_OFFSET UNITYSDK_OFFSET(0x1627C180)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_E6A7817ED8440ACA_OFFSET UNITYSDK_OFFSET(0x1627E180)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_E81440D52DD3C06B_OFFSET UNITYSDK_OFFSET(0x1627C5D0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_EC1E951BF6DFC0D5_OFFSET UNITYSDK_OFFSET(0x1627D140)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_EEA73B6010018ADD_OFFSET UNITYSDK_OFFSET(0x16277600)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_F4DF62B84796B78F_OFFSET UNITYSDK_OFFSET(0x1627A250)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_F5BE9F51B7F27BFB_OFFSET UNITYSDK_OFFSET(0x16279C30)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_F91B8892FC7A8C48_1_OFFSET UNITYSDK_OFFSET(0x16277D20)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_F91B8892FC7A8C48_OFFSET UNITYSDK_OFFSET(0x16277650)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE__CCTOR_OFFSET UNITYSDK_OFFSET(0x162785E0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x16278370)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESAvatarMatChange_TypeDefinitionIndex = 48679;

	class ESAvatarMatChange : public ::MoleMole::EffectSimulate::ESLoopable
	{
	public:
		static ::System::Action_2<::UnityEngine::Material*, ::System::Boolean>** StaticGet_m_fcMakeAvatarMatKeywordChange()
		{
			return (::System::Action_2<::UnityEngine::Material*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ESAvatarMatChange_TypeDefinitionIndex)->GetStaticField(0x535C0);
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

		::System::Type* Method_3_23616C0014E07556()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_23616C0014E07556_OFFSET))(this);
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

		::System::Void Method_3_ABC8D484A6686265(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_ABC8D484A6686265_OFFSET))(this, a1);
		}

		::System::Void Method_3_A239DF324AF4215D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_A239DF324AF4215D_OFFSET))(this);
		}

		::MoleMole::EffectSimulate::ESAvatarMatChange_RendererPartInfo* Method_3_4F127FCB7C2E8AED()
		{
			return ((::MoleMole::EffectSimulate::ESAvatarMatChange_RendererPartInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_4F127FCB7C2E8AED_OFFSET))(this);
		}

		::System::Void Method_3_97AB013B424504B3(::UnityEngine::Material* a1, ::System::String* a2, ::UnityEngine::Vector4 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::String*, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_97AB013B424504B3_OFFSET))(this, a1, a2, a3);
		}

		::System::Single Method_3_5896DADDA677EA65()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_5896DADDA677EA65_OFFSET))(this);
		}

		::UnityEngine::Vector4 Method_3_3F6D459B7BA17E37(::UnityEngine::Vector4 a1, ::UnityEngine::Vector4 a2, ::System::Byte a3)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::UnityEngine::Vector4, ::UnityEngine::Vector4, ::System::Byte))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_3F6D459B7BA17E37_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_3_474329C0894378F3(::UnityEngine::MaterialPropertyBlock* a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_474329C0894378F3_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_3_8F5CEF363BE6A9A1(::UnityEngine::Material* a1, ::UnityEngine::Material* a2, ::System::String* a3, ::System::Boolean a4, ::UnityEngine::Texture* a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::Material*, ::System::String*, ::System::Boolean, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_8F5CEF363BE6A9A1_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Method_3_3465AD12EDAA53AB(::UnityEngine::Material* a1, ::UnityEngine::Material* a2, ::System::Boolean a3, ::MoleMole::EffectSimulate::Keyframeable01Curve_1<::UnityEngine::Color>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::Material*, ::System::Boolean, ::MoleMole::EffectSimulate::Keyframeable01Curve_1<::UnityEngine::Color>*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_3465AD12EDAA53AB_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean Method_3_66193B8782064F5D()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_66193B8782064F5D_OFFSET))(this);
		}

		::System::Void Method_3_CD291CEE2301C52F(::UnityEngine::Material* a1, ::UnityEngine::MaterialPropertyBlock* a2, ::System::String* a3, ::System::Boolean a4, ::UnityEngine::Texture* a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::MaterialPropertyBlock*, ::System::String*, ::System::Boolean, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_CD291CEE2301C52F_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Method_3_BA85584E623399AC(::UnityEngine::Renderer* a1, ::UnityEngine::Material* a2, ::UnityEngine::Material* a3, ::System::Boolean a4, ::MoleMole::EffectSimulate::Keyframeable01Curve_1<::System::Single>* a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::UnityEngine::Material*, ::UnityEngine::Material*, ::System::Boolean, ::MoleMole::EffectSimulate::Keyframeable01Curve_1<::System::Single>*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_BA85584E623399AC_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Method_3_C77C2F74249B3836(::UnityEngine::Renderer* a1, ::UnityEngine::Material* a2, ::System::String* a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::UnityEngine::Material*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_C77C2F74249B3836_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_3_844C72BFE9AF30C0(::UnityEngine::Material* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_844C72BFE9AF30C0_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_3_F4DF62B84796B78F(::UnityEngine::Material* a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_F4DF62B84796B78F_OFFSET))(this, a1, a2, a3);
		}

		::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>* Method_3_B747781924F4C9A5()
		{
			return ((::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_B747781924F4C9A5_OFFSET))(this);
		}

		::System::Boolean Method_3_0B1EB5C9B94BAB66()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_0B1EB5C9B94BAB66_OFFSET))(this);
		}

		::System::Void Method_3_4272BE5198E6F216(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_4272BE5198E6F216_OFFSET))(this, a1);
		}

		::System::Void Method_3_CA373AA1C7054598_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_CA373AA1C7054598_2_OFFSET))(this);
		}

		::System::Boolean Method_3_A6C950F983CEDC98(::UnityEngine::Renderer* a1, ::UnityEngine::Material* a2, ::System::Int32 a3, ::System::Single a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Renderer*, ::UnityEngine::Material*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_A6C950F983CEDC98_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean Method_3_1B8ECE9B8EFBF530(::UnityEngine::Renderer* a1, ::UnityEngine::Material* a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Renderer*, ::UnityEngine::Material*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_1B8ECE9B8EFBF530_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_3_A239DF324AF4215D_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_A239DF324AF4215D_1_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Void Method_3_3E7584FDE67E43E8(::UnityEngine::Material* a1, ::System::Int32 a2, ::UnityEngine::Color a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::Int32, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_3E7584FDE67E43E8_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_3_7DC43306EDE87579(::UnityEngine::Material* a1, ::System::Int32 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_7DC43306EDE87579_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_3_8685241EDE5B3F69(::UnityEngine::Material* a1, ::System::String* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_8685241EDE5B3F69_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_3_1EC08054332D6E78(::System::Action_4<::UnityEngine::Renderer*, ::UnityEngine::Material*, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Material*>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_4<::UnityEngine::Renderer*, ::UnityEngine::Material*, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Material*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_1EC08054332D6E78_OFFSET))(this, a1, a2);
		}

		static ::System::Void Method_3_AB16839EF6AC669C(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_AB16839EF6AC669C_OFFSET))(a1);
		}

		::System::Void Method_3_C70EE4CA60846008(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_C70EE4CA60846008_OFFSET))(this, a1, a2);
		}

		::System::Void Method_3_5E5D28453CA785EC(::UnityEngine::MaterialPropertyBlock* a1, ::System::Int32 a2, ::UnityEngine::Vector4 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*, ::System::Int32, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_5E5D28453CA785EC_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_3_49D41C826A66EA0F(::System::Action_3<::UnityEngine::Material*, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Material*>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_3<::UnityEngine::Material*, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Material*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_49D41C826A66EA0F_OFFSET))(this, a1, a2);
		}

		::System::Void Method_3_8558E387859BE466(::UnityEngine::Material* a1, ::UnityEngine::MaterialPropertyBlock* a2, ::System::Boolean a3, ::MoleMole::EffectSimulate::Keyframeable01Curve_1<::UnityEngine::Vector4>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::MaterialPropertyBlock*, ::System::Boolean, ::MoleMole::EffectSimulate::Keyframeable01Curve_1<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_8558E387859BE466_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean Method_3_391A84BCD9F51317_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_391A84BCD9F51317_1_OFFSET))(this);
		}

		::System::Void Method_3_E5ED009040EE5235(::UnityEngine::Material* a1, ::UnityEngine::MaterialPropertyBlock* a2, ::UnityEngine::Material* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_E5ED009040EE5235_OFFSET))(this, a1, a2, a3);
		}

		::System::String* Method_3_18F90A371677B540(::UnityEngine::Object* a1)
		{
			return ((::System::String*(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_18F90A371677B540_OFFSET))(this, a1);
		}

		::System::Void Method_3_DC3C81C81202FE48(::UnityEngine::Renderer* a1, ::UnityEngine::Material* a2, ::UnityEngine::Material* a3, ::System::Boolean a4, ::MoleMole::EffectSimulate::Keyframeable01Curve_1<::UnityEngine::Vector4>* a5, ::System::Byte a6)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::UnityEngine::Material*, ::UnityEngine::Material*, ::System::Boolean, ::MoleMole::EffectSimulate::Keyframeable01Curve_1<::UnityEngine::Vector4>*, ::System::Byte))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_DC3C81C81202FE48_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Boolean Method_3_BC31DBCD2D3F2A5F(::UnityEngine::Renderer* a1, ::UnityEngine::Material* a2, ::System::Int32 a3, ::UnityEngine::Vector4 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Renderer*, ::UnityEngine::Material*, ::System::Int32, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_BC31DBCD2D3F2A5F_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_3_F5BE9F51B7F27BFB(::UnityEngine::Renderer* a1, ::UnityEngine::Material* a2, ::System::String* a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::UnityEngine::Material*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_F5BE9F51B7F27BFB_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_3_4F8ABF7E62045EE6(::UnityEngine::MaterialPropertyBlock* a1, ::System::Int32 a2, ::UnityEngine::Color a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*, ::System::Int32, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_4F8ABF7E62045EE6_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_3_2685B6183E614529(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_2685B6183E614529_OFFSET))(this, a1);
		}

		::System::Boolean Method_3_C46FB2A224B97DCA(::UnityEngine::Renderer* a1, ::UnityEngine::Material* a2, ::System::Int32 a3, ::System::Boolean a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Renderer*, ::UnityEngine::Material*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_C46FB2A224B97DCA_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_3_4EAC7A2BB0978801(::UnityEngine::Material* a1, ::UnityEngine::Material* a2, ::System::Boolean a3, ::MoleMole::EffectSimulate::Keyframeable01Curve_1<::System::Single>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::Material*, ::System::Boolean, ::MoleMole::EffectSimulate::Keyframeable01Curve_1<::System::Single>*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_4EAC7A2BB0978801_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean Method_3_595E641DF1B4387D()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_595E641DF1B4387D_OFFSET))(this);
		}

		::System::Void Method_3_A36A663AAAEECCC3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_A36A663AAAEECCC3_OFFSET))(this);
		}

		::System::Void Method_3_BD5D48229C9C702B(::UnityEngine::Material* a1, ::System::String* a2, ::UnityEngine::Color a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::String*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_BD5D48229C9C702B_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_3_DD6BC1706AE83A61(::UnityEngine::MaterialPropertyBlock* a1, ::System::Int32 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_DD6BC1706AE83A61_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_3_167F9AB65FD3C1E9(::UnityEngine::Material* a1, ::UnityEngine::Material* a2, ::System::Boolean a3, ::MoleMole::EffectSimulate::Keyframeable01Curve_1<::UnityEngine::Vector4>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::Material*, ::System::Boolean, ::MoleMole::EffectSimulate::Keyframeable01Curve_1<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_167F9AB65FD3C1E9_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_3_BCAE6B27221362DF(::UnityEngine::MaterialPropertyBlock* a1, ::System::Int32 a2, ::UnityEngine::Texture* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*, ::System::Int32, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_BCAE6B27221362DF_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_3_EC1E951BF6DFC0D5(::UnityEngine::Renderer* a1, ::UnityEngine::Material* a2, ::System::String* a3, ::UnityEngine::Texture* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::UnityEngine::Material*, ::System::String*, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_EC1E951BF6DFC0D5_OFFSET))(this, a1, a2, a3, a4);
		}

		::Enum_3_64FEF67DF2D01E84 Method_3_351C4FD1DB2A02BE()
		{
			return ((::Enum_3_64FEF67DF2D01E84(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_351C4FD1DB2A02BE_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::System::Collections::Generic::List_1<::Foundation::Tuple_3<::UnityEngine::Material*, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Material*>>*>* Method_3_032DFEAD312377C0()
		{
			return ((::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::System::Collections::Generic::List_1<::Foundation::Tuple_3<::UnityEngine::Material*, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Material*>>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_032DFEAD312377C0_OFFSET))(this);
		}

		::System::Void Method_3_3D5790ED4F7815D4(::UnityEngine::Renderer* a1, ::UnityEngine::Material* a2, ::UnityEngine::Material* a3, ::System::Boolean a4, ::MoleMole::EffectSimulate::Keyframeable01Curve_1<::UnityEngine::Vector2>* a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::UnityEngine::Material*, ::UnityEngine::Material*, ::System::Boolean, ::MoleMole::EffectSimulate::Keyframeable01Curve_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_3D5790ED4F7815D4_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Method_3_0721A34A3F235CD6(::UnityEngine::Material* a1, ::UnityEngine::MaterialPropertyBlock* a2, ::System::Boolean a3, ::MoleMole::EffectSimulate::Keyframeable01Curve_1<::UnityEngine::Color>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::MaterialPropertyBlock*, ::System::Boolean, ::MoleMole::EffectSimulate::Keyframeable01Curve_1<::UnityEngine::Color>*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_0721A34A3F235CD6_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_3_75193A4B6FEE850B(::UnityEngine::Material* a1, ::System::Int32 a2, ::UnityEngine::Vector4 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::Int32, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_75193A4B6FEE850B_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_3_E81440D52DD3C06B(::UnityEngine::Renderer* a1, ::UnityEngine::Material* a2, ::System::String* a3, ::UnityEngine::Vector4 a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::UnityEngine::Material*, ::System::String*, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_E81440D52DD3C06B_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_3_C5E65984103B0C69(::UnityEngine::Renderer* a1, ::UnityEngine::Material* a2, ::System::String* a3, ::UnityEngine::Color a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::UnityEngine::Material*, ::System::String*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_C5E65984103B0C69_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_3_0FF9BF68FEB50D87(::UnityEngine::Material* a1, ::UnityEngine::Material* a2, ::System::Boolean a3, ::MoleMole::EffectSimulate::Keyframeable01Curve_1<::UnityEngine::Vector2>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::Material*, ::System::Boolean, ::MoleMole::EffectSimulate::Keyframeable01Curve_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_0FF9BF68FEB50D87_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_3_39CEC7711B1B4FAF(::UnityEngine::Material* a1, ::System::String* a2, ::UnityEngine::Texture* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::String*, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_39CEC7711B1B4FAF_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_3_6BD7A7BE69471708(::UnityEngine::Renderer* a1, ::UnityEngine::Material* a2, ::UnityEngine::Material* a3, ::System::String* a4, ::System::Boolean a5, ::UnityEngine::Texture* a6)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::UnityEngine::Material*, ::UnityEngine::Material*, ::System::String*, ::System::Boolean, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_6BD7A7BE69471708_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void Method_3_E6A7817ED8440ACA(::UnityEngine::Renderer* a1, ::UnityEngine::Material* a2, ::UnityEngine::Material* a3, ::System::Boolean a4, ::MoleMole::EffectSimulate::Keyframeable01Curve_1<::UnityEngine::Color>* a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::UnityEngine::Material*, ::UnityEngine::Material*, ::System::Boolean, ::MoleMole::EffectSimulate::Keyframeable01Curve_1<::UnityEngine::Color>*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_E6A7817ED8440ACA_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean Method_3_CE3C4BA2A61197F1(::MoleMole::EffectSimulate::Vector401KeyframeCurve* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::EffectSimulate::Vector401KeyframeCurve*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_CE3C4BA2A61197F1_OFFSET))(this, a1);
		}

		::System::Boolean Method_3_1F51FCC26841F4F1(::UnityEngine::Renderer* a1, ::UnityEngine::Material* a2, ::System::Int32 a3, ::UnityEngine::Color a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Renderer*, ::UnityEngine::Material*, ::System::Int32, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_1F51FCC26841F4F1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_3_5687453DFA10B0C0(::UnityEngine::Material* a1, ::System::Int32 a2, ::UnityEngine::Texture* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::Int32, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_5687453DFA10B0C0_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean Method_3_595E641DF1B4387D_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_595E641DF1B4387D_1_OFFSET))(this);
		}

		::System::Void Method_3_B2410373305DD167(::UnityEngine::Renderer* a1, ::UnityEngine::Material* a2, ::UnityEngine::Material* a3, ::System::Int32 a4, ::System::Boolean a5, ::UnityEngine::Texture* a6)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::UnityEngine::Material*, ::UnityEngine::Material*, ::System::Int32, ::System::Boolean, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_B2410373305DD167_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void Method_3_CA373AA1C7054598_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_CA373AA1C7054598_3_OFFSET))(this);
		}

		::System::Boolean Method_3_CF4A1EEFB2C7DA5D(::UnityEngine::Renderer* a1, ::UnityEngine::Material* a2, ::System::Int32 a3, ::UnityEngine::Texture* a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Renderer*, ::UnityEngine::Material*, ::System::Int32, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_CF4A1EEFB2C7DA5D_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_3_5C27C8EFFB7EF72B(::UnityEngine::Material* a1, ::UnityEngine::MaterialPropertyBlock* a2, ::System::Boolean a3, ::MoleMole::EffectSimulate::Keyframeable01Curve_1<::System::Single>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::MaterialPropertyBlock*, ::System::Boolean, ::MoleMole::EffectSimulate::Keyframeable01Curve_1<::System::Single>*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_5C27C8EFFB7EF72B_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_3_4343F372F34C05BF_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_4343F372F34C05BF_1_OFFSET))(this);
		}

		::System::Void Method_3_71F8914B71084768(::MoleMole::EffectSimulate::ESAvatarMatChange_RendererPartInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EffectSimulate::ESAvatarMatChange_RendererPartInfo*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_71F8914B71084768_OFFSET))(this, a1);
		}

		::System::Void Method_3_3E7178C5ECF017DB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMATCHANGE_METHOD_3_3E7178C5ECF017DB_OFFSET))(this, a1);
		}
	};
}
