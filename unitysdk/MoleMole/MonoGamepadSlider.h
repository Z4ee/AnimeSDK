#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/InputLogicEventType.h"
#include "unitysdk/MoleMole/MonoGamepadModule.h"
#include "unitysdk/MoleMole/MonoGamepadSlider_Struct_2_E71A4E719BBCD0AD_1.h"
#include "unitysdk/UnityEngine/RectTransform_Axis.h"

namespace UnityEngine::UI { class Slider; }
namespace UnityEngine::UI::Extension { class UIButtonEx; }
namespace UnityEngine::UI::Extension { class UISlider; }

#define MOLEMOLE_MONOGAMEPADSLIDER_ISFUNCTIONENABLED_OFFSET UNITYSDK_OFFSET(0x170E7BE0)
#define MOLEMOLE_MONOGAMEPADSLIDER_ISTEMPWORKABLE_OFFSET UNITYSDK_OFFSET(0x170E7A60)
#define MOLEMOLE_MONOGAMEPADSLIDER_METHOD_6_1ADC5E4C222F6999_OFFSET UNITYSDK_OFFSET(0x170E7810)
#define MOLEMOLE_MONOGAMEPADSLIDER_METHOD_6_1EB21A58DE184521_OFFSET UNITYSDK_OFFSET(0x170E9BA0)
#define MOLEMOLE_MONOGAMEPADSLIDER_METHOD_6_2A2B4A2E0BDAAF15_OFFSET UNITYSDK_OFFSET(0x170E7770)
#define MOLEMOLE_MONOGAMEPADSLIDER_METHOD_6_2EE72C955F5AB423_OFFSET UNITYSDK_OFFSET(0x170E8D60)
#define MOLEMOLE_MONOGAMEPADSLIDER_METHOD_6_32F9C58B690E51E5_OFFSET UNITYSDK_OFFSET(0x170E7FE0)
#define MOLEMOLE_MONOGAMEPADSLIDER_METHOD_6_4528E0E482BFFB41_OFFSET UNITYSDK_OFFSET(0x170E6A50)
#define MOLEMOLE_MONOGAMEPADSLIDER_METHOD_6_48F7728046DC19C6_OFFSET UNITYSDK_OFFSET(0x170E87D0)
#define MOLEMOLE_MONOGAMEPADSLIDER_METHOD_6_57D5ED2C4C06D908_1_OFFSET UNITYSDK_OFFSET(0x170E9BD0)
#define MOLEMOLE_MONOGAMEPADSLIDER_METHOD_6_57D5ED2C4C06D908_OFFSET UNITYSDK_OFFSET(0x170E93D0)
#define MOLEMOLE_MONOGAMEPADSLIDER_METHOD_6_65F7294E053E2403_OFFSET UNITYSDK_OFFSET(0x170E9C90)
#define MOLEMOLE_MONOGAMEPADSLIDER_METHOD_6_6F73A40265D5B980_OFFSET UNITYSDK_OFFSET(0x170E7F40)
#define MOLEMOLE_MONOGAMEPADSLIDER_METHOD_6_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0x170E8770)
#define MOLEMOLE_MONOGAMEPADSLIDER_METHOD_6_A86A455D6AB5B836_OFFSET UNITYSDK_OFFSET(0x170E9B50)
#define MOLEMOLE_MONOGAMEPADSLIDER_METHOD_6_B7EF99B3560A50F9_OFFSET UNITYSDK_OFFSET(0x170E8300)
#define MOLEMOLE_MONOGAMEPADSLIDER_METHOD_6_BC5B668148D964CC_OFFSET UNITYSDK_OFFSET(0x170E71A0)
#define MOLEMOLE_MONOGAMEPADSLIDER_METHOD_6_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x170E6AE0)
#define MOLEMOLE_MONOGAMEPADSLIDER_METHOD_6_CEA32FF190776922_OFFSET UNITYSDK_OFFSET(0x170E6B30)
#define MOLEMOLE_MONOGAMEPADSLIDER_METHOD_6_D1F5A654A67BB61C_OFFSET UNITYSDK_OFFSET(0x170E7120)
#define MOLEMOLE_MONOGAMEPADSLIDER_METHOD_6_FCF9B9CDD250FD11_OFFSET UNITYSDK_OFFSET(0x170E9490)
#define MOLEMOLE_MONOGAMEPADSLIDER_SETOVERRIDESLIDESTEP_OFFSET UNITYSDK_OFFSET(0x170E69E0)
#define MOLEMOLE_MONOGAMEPADSLIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x170E8FF0)
#define MOLEMOLE_MONOGAMEPADSLIDER___BASE_ISFUNCTIONENABLED_OFFSET UNITYSDK_OFFSET(0x170E9090)
#define MOLEMOLE_MONOGAMEPADSLIDER___BASE_ISTEMPWORKABLE_OFFSET UNITYSDK_OFFSET(0x170E9120)
#define MOLEMOLE_MONOGAMEPADSLIDER___BASE_ISWORKABLEINNER_OFFSET UNITYSDK_OFFSET(0x170E91B0)
#define MOLEMOLE_MONOGAMEPADSLIDER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x170E9240)
#define MOLEMOLE_MONOGAMEPADSLIDER___BASE_ONMODULEDISABLE_OFFSET UNITYSDK_OFFSET(0x170E92F0)
#define MOLEMOLE_MONOGAMEPADSLIDER___BASE_ONMODULEFOCUS_OFFSET UNITYSDK_OFFSET(0x170E9300)
#define MOLEMOLE_MONOGAMEPADSLIDER___BASE_ONMODULELATEUPDATE_OFFSET UNITYSDK_OFFSET(0x170E9310)
#define MOLEMOLE_MONOGAMEPADSLIDER___BASE_ONMODULELOSTFOCUS_OFFSET UNITYSDK_OFFSET(0x170E93C0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoGamepadSlider_TypeDefinitionIndex = 64813;

	class MonoGamepadSlider : public ::MoleMole::MonoGamepadModule
	{
	public:
		::UnityEngine::UI::Extension::UISlider* _slider; // 0xE8
		::UnityEngine::UI::Slider* _unitySlider; // 0xF0
		::System::Single _slideStep; // 0xF8
		::MoleMole::InputLogicEventType _slideNegativeEvent; // 0xFC
		::MoleMole::InputLogicEventType _slidePositiveEvent; // 0x100
		::MoleMole::InputLogicEventType _slideAxisEvent; // 0x104
		::System::Boolean _allowLoop; // 0x108
		::UnityEngine::UI::Extension::UIButtonEx* _addButton; // 0x110
		::UnityEngine::UI::Extension::UIButtonEx* _reduceButton; // 0x118
		::System::Boolean _enablePressSpeedUp; // 0x120
		::System::Single Field_6_10; // 0x124
		::System::Single Field_6_11; // 0x128
		::System::Single Field_6_12; // 0x12C
		::System::Single Field_6_13; // 0x130

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSLIDER__CTOR_OFFSET))(this);
		}

		::System::Void SetOverrideSlideStep(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSLIDER_SETOVERRIDESLIDESTEP_OFFSET))(this, a1);
		}

		::System::Void Method_6_4528E0E482BFFB41(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSLIDER_METHOD_6_4528E0E482BFFB41_OFFSET))(this, a1);
		}

		::System::Void Method_6_D1F5A654A67BB61C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSLIDER_METHOD_6_D1F5A654A67BB61C_OFFSET))(this);
		}

		::System::Void Method_6_2A2B4A2E0BDAAF15(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSLIDER_METHOD_6_2A2B4A2E0BDAAF15_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_6_1ADC5E4C222F6999()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSLIDER_METHOD_6_1ADC5E4C222F6999_OFFSET))(this);
		}

		::System::Boolean IsTempWorkable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSLIDER_ISTEMPWORKABLE_OFFSET))(this);
		}

		::System::Boolean IsFunctionEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSLIDER_ISFUNCTIONENABLED_OFFSET))(this);
		}

		::System::Void Method_6_6F73A40265D5B980()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSLIDER_METHOD_6_6F73A40265D5B980_OFFSET))(this);
		}

		::System::Boolean Method_6_B7EF99B3560A50F9(::MoleMole::InputActionEvent a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSLIDER_METHOD_6_B7EF99B3560A50F9_OFFSET))(this, a1);
		}

		::System::Boolean __base_IsFunctionEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSLIDER___BASE_ISFUNCTIONENABLED_OFFSET))(this);
		}

		::System::Boolean __base_IsTempWorkable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSLIDER___BASE_ISTEMPWORKABLE_OFFSET))(this);
		}

		::System::Boolean __base_IsWorkableInner()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSLIDER___BASE_ISWORKABLEINNER_OFFSET))(this);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSLIDER___BASE_ONINPUTACTION_OFFSET))(this, a1);
		}

		::System::Void __base_OnModuleDisable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSLIDER___BASE_ONMODULEDISABLE_OFFSET))(this, a1);
		}

		::System::Void __base_OnModuleFocus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSLIDER___BASE_ONMODULEFOCUS_OFFSET))(this);
		}

		::System::Void __base_OnModuleLateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSLIDER___BASE_ONMODULELATEUPDATE_OFFSET))(this);
		}

		::System::Void __base_OnModuleLostFocus(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSLIDER___BASE_ONMODULELOSTFOCUS_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSLIDER_METHOD_6_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Single Method_6_A36150C5DCC8409E()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSLIDER_METHOD_6_A36150C5DCC8409E_OFFSET))(this);
		}

		::System::Void Method_6_57D5ED2C4C06D908()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSLIDER_METHOD_6_57D5ED2C4C06D908_OFFSET))(this);
		}

		::System::Boolean Method_6_48F7728046DC19C6(::System::Single a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSLIDER_METHOD_6_48F7728046DC19C6_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_6_32F9C58B690E51E5(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSLIDER_METHOD_6_32F9C58B690E51E5_OFFSET))(this, a1);
		}

		::System::Void Method_6_57D5ED2C4C06D908_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSLIDER_METHOD_6_57D5ED2C4C06D908_1_OFFSET))(this);
		}

		::System::Int32 Method_6_FCF9B9CDD250FD11(::System::Single a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSLIDER_METHOD_6_FCF9B9CDD250FD11_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_6_65F7294E053E2403(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSLIDER_METHOD_6_65F7294E053E2403_OFFSET))(this, a1);
		}

		::System::Void Method_6_CEA32FF190776922()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSLIDER_METHOD_6_CEA32FF190776922_OFFSET))(this);
		}

		::System::Boolean Method_6_A86A455D6AB5B836(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSLIDER_METHOD_6_A86A455D6AB5B836_OFFSET))(this, a1);
		}

		static ::System::Single Method_6_1EB21A58DE184521(::System::Single a1, ::System::Single a2, ::System::Single a3, ::MoleMole::MonoGamepadSlider_Struct_2_E71A4E719BBCD0AD_1& a4)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::MoleMole::MonoGamepadSlider_Struct_2_E71A4E719BBCD0AD_1&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSLIDER_METHOD_6_1EB21A58DE184521_OFFSET))(a1, a2, a3, a4);
		}

		::UnityEngine::RectTransform_Axis Method_6_2EE72C955F5AB423()
		{
			return ((::UnityEngine::RectTransform_Axis(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSLIDER_METHOD_6_2EE72C955F5AB423_OFFSET))(this);
		}

		::System::Void Method_6_BC5B668148D964CC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSLIDER_METHOD_6_BC5B668148D964CC_OFFSET))(this);
		}
	};
}
