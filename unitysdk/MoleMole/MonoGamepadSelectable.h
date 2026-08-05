#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_1BED4272B39C388A.h"
#include "unitysdk/MoleMole/GamepadNavTargetConfig.h"
#include "unitysdk/MoleMole/MonoGamepadSelectable_Struct_2_05AF451D7E433529.h"
#include "unitysdk/MoleMole/MonoGamepadSelectable_Struct_2_05AF451D7E433529_1.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace MoleMole { class MonoGamepadBaseList; }
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole::Config { class ConfigSoundAction_Post2DEvent; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class InputField; }
namespace UnityEngine::UI::Extension { class UIButtonBase; }

#define MOLEMOLE_MONOGAMEPADSELECTABLE_AWAKE_OFFSET UNITYSDK_OFFSET(0x144E8600)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_CLICK_OFFSET UNITYSDK_OFFSET(0x144E9E80)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_GET_ACTIVATEONSELECT_OFFSET UNITYSDK_OFFSET(0x144E82E0)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_GET_ACTIVATEONWEAKFOCUSLIST_OFFSET UNITYSDK_OFFSET(0x144E84D0)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_GET_BUTTON_OFFSET UNITYSDK_OFFSET(0x144E82D0)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_GET_HASFOCUSUI_OFFSET UNITYSDK_OFFSET(0x144E8300)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_GET_HASWEAKFOCUSUI_OFFSET UNITYSDK_OFFSET(0x144E84F0)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_GET_ISFOCUS_OFFSET UNITYSDK_OFFSET(0x144E82C0)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_GET_ISSELECT_OFFSET UNITYSDK_OFFSET(0x144E82B0)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_GET_ISWEAKFOCUS_OFFSET UNITYSDK_OFFSET(0x144E8470)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_GET_ONFOCUSSTATECHANGED_OFFSET UNITYSDK_OFFSET(0x144E8580)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_GET_ONSELECTCHANGED_OFFSET UNITYSDK_OFFSET(0x144E8560)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_GET_SOUNDACTIONSOURCEHINT_OFFSET UNITYSDK_OFFSET(0x144E85A0)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_GET_SOUNDGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x144E8550)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_METHOD_5_017C915772AE00E9_OFFSET UNITYSDK_OFFSET(0x144EC130)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_METHOD_5_259218BAD97DABA5_OFFSET UNITYSDK_OFFSET(0x144ECC10)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_METHOD_5_28EB11670A8E5A86_OFFSET UNITYSDK_OFFSET(0x144EBF40)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_METHOD_5_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x144E97F0)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_METHOD_5_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x144EC4F0)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_METHOD_5_4CF1DCF96A27D996_OFFSET UNITYSDK_OFFSET(0x144E9840)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_METHOD_5_4DA29451BA34B956_OFFSET UNITYSDK_OFFSET(0x144ED000)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_METHOD_5_6BF0B1C95F527C3E_OFFSET UNITYSDK_OFFSET(0x144ED490)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_METHOD_5_6F5D10D91147F9C3_OFFSET UNITYSDK_OFFSET(0x144ED680)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_METHOD_5_84B92802FDAFF6C8_OFFSET UNITYSDK_OFFSET(0x144ED870)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_METHOD_5_ADAEB67D212F3BAB_OFFSET UNITYSDK_OFFSET(0x144ECA20)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_METHOD_5_AF9B73C9965C6444_OFFSET UNITYSDK_OFFSET(0x144E8FD0)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_METHOD_5_B41DEFAE71E2165B_OFFSET UNITYSDK_OFFSET(0x144EC690)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_METHOD_5_C970428934B6987A_1_OFFSET UNITYSDK_OFFSET(0x144EAFB0)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_METHOD_5_C970428934B6987A_OFFSET UNITYSDK_OFFSET(0x144EADD0)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_METHOD_5_E38DBF86ED41255C_OFFSET UNITYSDK_OFFSET(0x144E8A20)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_METHOD_5_EBAB6A35C21A2A5B_OFFSET UNITYSDK_OFFSET(0x144EC310)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_METHOD_5_ECB1BE15AAE7A8A4_OFFSET UNITYSDK_OFFSET(0x144ED330)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_METHOD_5_F6A713B4E496B7BA_OFFSET UNITYSDK_OFFSET(0x144EA710)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_METHOD_5_FC31EDB72F32D7CF_1_OFFSET UNITYSDK_OFFSET(0x144ECE00)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_METHOD_5_FC31EDB72F32D7CF_OFFSET UNITYSDK_OFFSET(0x144EABF0)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_METHOD_5_FFD65E4FEAD3C019_OFFSET UNITYSDK_OFFSET(0x144EDA90)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_SETBTNFOCUSSTATE_OFFSET UNITYSDK_OFFSET(0x144EAA90)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_SETBUTTONV2_OFFSET UNITYSDK_OFFSET(0x144EB330)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_SETBUTTON_OFFSET UNITYSDK_OFFSET(0x144EB190)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_SETSELECTED_OFFSET UNITYSDK_OFFSET(0x144EB510)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_SET_ACTIVATEONSELECT_OFFSET UNITYSDK_OFFSET(0x144E82F0)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_SET_ACTIVATEONWEAKFOCUSLIST_OFFSET UNITYSDK_OFFSET(0x144E84E0)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_SET_ONFOCUSSTATECHANGED_OFFSET UNITYSDK_OFFSET(0x144E8590)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_SET_ONSELECTCHANGED_OFFSET UNITYSDK_OFFSET(0x144E8570)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_SHOULDEXCLUDE_OFFSET UNITYSDK_OFFSET(0x144E9CD0)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_SHOULDIGNORE_OFFSET UNITYSDK_OFFSET(0x144E92E0)
#define MOLEMOLE_MONOGAMEPADSELECTABLE_TRYDEACTIVATEINPUTFIELD_OFFSET UNITYSDK_OFFSET(0x144EB380)
#define MOLEMOLE_MONOGAMEPADSELECTABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x144EC640)

namespace MoleMole
{
	inline static constexpr unsigned int MonoGamepadSelectable_TypeDefinitionIndex = 67815;

	class MonoGamepadSelectable : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean Field_5_1; // 0x18
		::System::Boolean Field_5_0; // 0x19
		::System::Boolean forceIgnore; // 0x1A
		::System::Boolean forceExclude; // 0x1B
		::System::Boolean ExcludeWhenIgnore; // 0x1C
		::System::Boolean _ignoreWhenSmallAlpha; // 0x1D
		::MoleMole::MonoGamepadBaseList* _list; // 0x20
		::System::Boolean _ignoreWhenListEmpty; // 0x28
		::System::Boolean _excludeWhenListEmpty; // 0x29
		::UnityEngine::UI::Extension::UIButtonBase* _buttonV2; // 0x30
		::UnityEngine::UI::Button* _untiyButton; // 0x38
		::System::Boolean _setButtonStateOnSelect; // 0x40
		::System::Boolean _selectWhenButtonUnavailable; // 0x41
		::UnityEngine::UI::InputField* _inputField; // 0x48
		::UnityEngine::GameObject* _activateOnSelect; // 0x50
		::Il2CppArray<::UnityEngine::GameObject*>* _activateOnSelectList; // 0x58
		::Il2CppArray<::UnityEngine::GameObject*>* _activateOnWeakFocusList; // 0x60
		::MoleMole::GamepadNavTargetConfig _targetModule; // 0x68
		::System::Boolean _focusOnTargetModuleOnClick; // 0x78
		::System::Boolean _focusOnTargetModuleOnSelect; // 0x79
		::System::Boolean _focusImmediately; // 0x7A
		::System::Boolean _affectChildSelectable; // 0x7B
		::Enum_3_1BED4272B39C388A _affectChildSelectableType; // 0x7C
		::UnityEngine::CanvasGroup* Field_5_26; // 0x80
		::System::Boolean _muteSelectSound; // 0x88
		::System::Boolean _overrideSelectSound; // 0x89
		::MoleMole::Config::ConfigSoundAction_Post2DEvent* _selectSound; // 0x90
		::System::Action_1<::System::Boolean>* Field_5_30; // 0x98
		::System::Action_1<::System::Boolean>* Field_5_29; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsSelect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_GET_ISSELECT_OFFSET))(this);
		}

		::System::Boolean get_IsFocus()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_GET_ISFOCUS_OFFSET))(this);
		}

		::UnityEngine::UI::Extension::UIButtonBase* get_Button()
		{
			return ((::UnityEngine::UI::Extension::UIButtonBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_GET_BUTTON_OFFSET))(this);
		}

		::UnityEngine::GameObject* get_ActivateOnSelect()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_GET_ACTIVATEONSELECT_OFFSET))(this);
		}

		::System::Void set_ActivateOnSelect(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_SET_ACTIVATEONSELECT_OFFSET))(this, a1);
		}

		::System::Boolean get_HasFocusUI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_GET_HASFOCUSUI_OFFSET))(this);
		}

		::System::Boolean get_IsWeakFocus()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_GET_ISWEAKFOCUS_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::GameObject*>* get_ActivateOnWeakFocusList()
		{
			return ((::Il2CppArray<::UnityEngine::GameObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_GET_ACTIVATEONWEAKFOCUSLIST_OFFSET))(this);
		}

		::System::Void set_ActivateOnWeakFocusList(::Il2CppArray<::UnityEngine::GameObject*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_SET_ACTIVATEONWEAKFOCUSLIST_OFFSET))(this, a1);
		}

		::System::Boolean get_HasWeakFocusUI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_GET_HASWEAKFOCUSUI_OFFSET))(this);
		}

		::UnityEngine::GameObject* get_soundGameObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_GET_SOUNDGAMEOBJECT_OFFSET))(this);
		}

		::System::Action_1<::System::Boolean>* get_OnSelectChanged()
		{
			return ((::System::Action_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_GET_ONSELECTCHANGED_OFFSET))(this);
		}

		::System::Void set_OnSelectChanged(::System::Action_1<::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_SET_ONSELECTCHANGED_OFFSET))(this, a1);
		}

		::System::Action_1<::System::Boolean>* get_OnFocusStateChanged()
		{
			return ((::System::Action_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_GET_ONFOCUSSTATECHANGED_OFFSET))(this);
		}

		::System::Void set_OnFocusStateChanged(::System::Action_1<::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_SET_ONFOCUSSTATECHANGED_OFFSET))(this, a1);
		}

		::System::String* get_soundActionSourceHint()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_GET_SOUNDACTIONSOURCEHINT_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_AWAKE_OFFSET))(this);
		}

		::System::Boolean ShouldIgnore()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_SHOULDIGNORE_OFFSET))(this);
		}

		::System::Boolean ShouldExclude()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_SHOULDEXCLUDE_OFFSET))(this);
		}

		::System::Boolean Click(::MoleMole::MonoGamepadModule* a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_CLICK_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetBtnFocusState(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_SETBTNFOCUSSTATE_OFFSET))(this, a1, a2);
		}

		::System::Void SetButton(::UnityEngine::UI::Button* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Button*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_SETBUTTON_OFFSET))(this, a1);
		}

		::System::Void SetButtonV2(::UnityEngine::UI::Extension::UIButtonBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UIButtonBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_SETBUTTONV2_OFFSET))(this, a1);
		}

		::System::Boolean TryDeactivateInputField()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_TRYDEACTIVATEINPUTFIELD_OFFSET))(this);
		}

		::System::Void SetSelected(::System::Boolean a1, ::MoleMole::MonoGamepadModule* a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::MoleMole::MonoGamepadModule*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_SETSELECTED_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::String* Method_5_B41DEFAE71E2165B(::UnityEngine::Transform* a1)
		{
			return ((::System::String*(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_METHOD_5_B41DEFAE71E2165B_OFFSET))(this, a1);
		}

		::System::Void Method_5_41A074549EF25F63()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_METHOD_5_41A074549EF25F63_OFFSET))(this);
		}

		::System::Void Method_5_017C915772AE00E9()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_METHOD_5_017C915772AE00E9_OFFSET))(this);
		}

		::System::Void Method_5_ADAEB67D212F3BAB(::MoleMole::MonoGamepadSelectable_Struct_2_05AF451D7E433529& a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadSelectable_Struct_2_05AF451D7E433529&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_METHOD_5_ADAEB67D212F3BAB_OFFSET))(this, a1);
		}

		::System::Void Method_5_FC31EDB72F32D7CF(::MoleMole::MonoGamepadSelectable_Struct_2_05AF451D7E433529_1& a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadSelectable_Struct_2_05AF451D7E433529_1&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_METHOD_5_FC31EDB72F32D7CF_OFFSET))(this, a1);
		}

		::MoleMole::MonoGamepadModule* Method_5_F6A713B4E496B7BA()
		{
			return ((::MoleMole::MonoGamepadModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_METHOD_5_F6A713B4E496B7BA_OFFSET))(this);
		}

		::System::Void Method_5_259218BAD97DABA5(::MoleMole::MonoGamepadSelectable_Struct_2_05AF451D7E433529& a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadSelectable_Struct_2_05AF451D7E433529&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_METHOD_5_259218BAD97DABA5_OFFSET))(this, a1);
		}

		::System::Void Method_5_FC31EDB72F32D7CF_1(::MoleMole::MonoGamepadSelectable_Struct_2_05AF451D7E433529& a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadSelectable_Struct_2_05AF451D7E433529&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_METHOD_5_FC31EDB72F32D7CF_1_OFFSET))(this, a1);
		}

		::System::Void Method_5_4DA29451BA34B956(::System::Boolean a1, ::MoleMole::MonoGamepadModule* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_METHOD_5_4DA29451BA34B956_OFFSET))(this, a1, a2);
		}

		::MoleMole::MonoGamepadSelectable* Method_5_4CF1DCF96A27D996(::System::Boolean a1)
		{
			return ((::MoleMole::MonoGamepadSelectable*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_METHOD_5_4CF1DCF96A27D996_OFFSET))(this, a1);
		}

		::System::Boolean Method_5_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_METHOD_5_391A84BCD9F51317_OFFSET))(this);
		}

		::System::Void Method_5_ECB1BE15AAE7A8A4(::MoleMole::MonoGamepadSelectable_Struct_2_05AF451D7E433529& a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadSelectable_Struct_2_05AF451D7E433529&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_METHOD_5_ECB1BE15AAE7A8A4_OFFSET))(this, a1);
		}

		::System::Void Method_5_6BF0B1C95F527C3E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_METHOD_5_6BF0B1C95F527C3E_OFFSET))(this);
		}

		::System::Void Method_5_C970428934B6987A(::MoleMole::MonoGamepadSelectable_Struct_2_05AF451D7E433529_1& a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadSelectable_Struct_2_05AF451D7E433529_1&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_METHOD_5_C970428934B6987A_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* Method_5_6F5D10D91147F9C3()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_METHOD_5_6F5D10D91147F9C3_OFFSET))(this);
		}

		::System::Void Method_5_28EB11670A8E5A86()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_METHOD_5_28EB11670A8E5A86_OFFSET))(this);
		}

		::System::Void Method_5_C970428934B6987A_1(::MoleMole::MonoGamepadSelectable_Struct_2_05AF451D7E433529_1& a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadSelectable_Struct_2_05AF451D7E433529_1&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_METHOD_5_C970428934B6987A_1_OFFSET))(this, a1);
		}

		::System::Void Method_5_AF9B73C9965C6444()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_METHOD_5_AF9B73C9965C6444_OFFSET))(this);
		}

		::System::Void Method_5_EBAB6A35C21A2A5B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_METHOD_5_EBAB6A35C21A2A5B_OFFSET))(this);
		}

		::System::Void Method_5_E38DBF86ED41255C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_METHOD_5_E38DBF86ED41255C_OFFSET))(this);
		}

		::System::Void Method_5_84B92802FDAFF6C8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_METHOD_5_84B92802FDAFF6C8_OFFSET))(this);
		}

		::System::Void Method_5_FFD65E4FEAD3C019()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADSELECTABLE_METHOD_5_FFD65E4FEAD3C019_OFFSET))(this);
		}
	};
}
