#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/UINavigation/UINavigationArea.h"
#include "unitysdk/Struct_2_342392452B5681AE.h"

class Class_1_A8F358278D5B9235;
namespace RPG::UINavigation { class UINavigationInControlAction; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::EventSystems { class AxisEventData; }
namespace UnityEngine::EventSystems { class BaseEventData; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Selectable; }

#define RPG_UINAVIGATION_UINAVIGATIONBUTTON_ADDCUSTOMINCONTROLACTION_OFFSET UNITYSDK_OFFSET(0xB878E80)
#define RPG_UINAVIGATION_UINAVIGATIONBUTTON_ADDINCONTROLACTION_OFFSET UNITYSDK_OFFSET(0xB8791A0)
#define RPG_UINAVIGATION_UINAVIGATIONBUTTON_AWAKE_OFFSET UNITYSDK_OFFSET(0xB877FC0)
#define RPG_UINAVIGATION_UINAVIGATIONBUTTON_CLEARACTIONHINTNAME_OFFSET UNITYSDK_OFFSET(0xB8794E0)
#define RPG_UINAVIGATION_UINAVIGATIONBUTTON_CLEARCUSTOMINCONTROLACTIONS_OFFSET UNITYSDK_OFFSET(0xB878FA0)
#define RPG_UINAVIGATION_UINAVIGATIONBUTTON_GETACTIONHINTNAME_OFFSET UNITYSDK_OFFSET(0xB879490)
#define RPG_UINAVIGATION_UINAVIGATIONBUTTON_GETCONTROLACTIONS_OFFSET UNITYSDK_OFFSET(0xB879540)
#define RPG_UINAVIGATION_UINAVIGATIONBUTTON_GETFIRSTSELECTABLE_OFFSET UNITYSDK_OFFSET(0xB878B90)
#define RPG_UINAVIGATION_UINAVIGATIONBUTTON_GET_BUTTON_OFFSET UNITYSDK_OFFSET(0xB877E40)
#define RPG_UINAVIGATION_UINAVIGATIONBUTTON_GET_SELECTABLE_OFFSET UNITYSDK_OFFSET(0xB877F00)
#define RPG_UINAVIGATION_UINAVIGATIONBUTTON_ISSELECTED_OFFSET UNITYSDK_OFFSET(0xB879130)
#define RPG_UINAVIGATION_UINAVIGATIONBUTTON_ONDESELECT_OFFSET UNITYSDK_OFFSET(0xB8788D0)
#define RPG_UINAVIGATION_UINAVIGATIONBUTTON_ONMOVE_OFFSET UNITYSDK_OFFSET(0xB878240)
#define RPG_UINAVIGATION_UINAVIGATIONBUTTON_ONNAVIGATION_OFFSET UNITYSDK_OFFSET(0xB878990)
#define RPG_UINAVIGATION_UINAVIGATIONBUTTON_ONSELECT_OFFSET UNITYSDK_OFFSET(0xB878320)
#define RPG_UINAVIGATION_UINAVIGATIONBUTTON_ONSUBMIT_OFFSET UNITYSDK_OFFSET(0xB8782B0)
#define RPG_UINAVIGATION_UINAVIGATIONBUTTON_REMOVECUSTOMINCONTROLACTION_OFFSET UNITYSDK_OFFSET(0xB878F00)
#define RPG_UINAVIGATION_UINAVIGATIONBUTTON_REMOVEINCONTROLACTION_OFFSET UNITYSDK_OFFSET(0xB879260)
#define RPG_UINAVIGATION_UINAVIGATIONBUTTON_RESET_OFFSET UNITYSDK_OFFSET(0xB878110)
#define RPG_UINAVIGATION_UINAVIGATIONBUTTON_SETACTIONHINTNAME_OFFSET UNITYSDK_OFFSET(0xB879340)
#define RPG_UINAVIGATION_UINAVIGATIONBUTTON_SETCLICKONSELECT_OFFSET UNITYSDK_OFFSET(0xB878B40)
#define RPG_UINAVIGATION_UINAVIGATIONBUTTON__CLICKBUTTON_OFFSET UNITYSDK_OFFSET(0xB8785D0)
#define RPG_UINAVIGATION_UINAVIGATIONBUTTON__CTOR_OFFSET UNITYSDK_OFFSET(0xB879770)
#define RPG_UINAVIGATION_UINAVIGATIONBUTTON__MARKZONESHOULDUPDATEINCONTROLHINTS_OFFSET UNITYSDK_OFFSET(0xB8793A0)
#define RPG_UINAVIGATION_UINAVIGATIONBUTTON__UPDATEACTIONHINTSTATUS_OFFSET UNITYSDK_OFFSET(0xB878450)
#define RPG_UINAVIGATION_UINAVIGATIONBUTTON___IFIXBASEPROXY_ADDINCONTROLACTION_OFFSET UNITYSDK_OFFSET(0xB879830)
#define RPG_UINAVIGATION_UINAVIGATIONBUTTON___IFIXBASEPROXY_GETFIRSTSELECTABLE_OFFSET UNITYSDK_OFFSET(0xB879820)
#define RPG_UINAVIGATION_UINAVIGATIONBUTTON___IFIXBASEPROXY_ONNAVIGATION_OFFSET UNITYSDK_OFFSET(0xB8797F0)
#define RPG_UINAVIGATION_UINAVIGATIONBUTTON___IFIXBASEPROXY_REMOVEINCONTROLACTION_OFFSET UNITYSDK_OFFSET(0xB8798A0)

namespace RPG::UINavigation
{
	inline static constexpr unsigned int UINavigationButton_TypeDefinitionIndex = 47796;

	class UINavigationButton : public ::RPG::UINavigation::UINavigationArea
	{
	public:
		// static const ::System::String* _DefaultActionHintName; // 0x0
		::UnityEngine::UI::Button* _Button; // 0xB0
		::System::Boolean _ControlChildShortcuts; // 0xB8
		::System::Collections::Generic::List_1<::RPG::UINavigation::UINavigationInControlAction*>* _CustomChildInControlActions; // 0xC0
		::System::Boolean _ClickOnSelect; // 0xC8
		::System::Boolean _IgnoreInteractable; // 0xC9
		::System::String* _ActionHintName; // 0xD0
		::System::Collections::Generic::List_1<::RPG::UINavigation::UINavigationInControlAction*>* _ControlActions; // 0xD8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONBUTTON__CTOR_OFFSET))(this);
		}

		::UnityEngine::UI::Button* get_Button()
		{
			return ((::UnityEngine::UI::Button*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONBUTTON_GET_BUTTON_OFFSET))(this);
		}

		::UnityEngine::UI::Selectable* get_Selectable()
		{
			return ((::UnityEngine::UI::Selectable*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONBUTTON_GET_SELECTABLE_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONBUTTON_AWAKE_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONBUTTON_RESET_OFFSET))(this);
		}

		::System::Void OnMove(::UnityEngine::EventSystems::AxisEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::AxisEventData*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONBUTTON_ONMOVE_OFFSET))(this, eventData);
		}

		::System::Void OnSubmit(::UnityEngine::EventSystems::BaseEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONBUTTON_ONSUBMIT_OFFSET))(this, eventData);
		}

		::System::Void OnSelect(::UnityEngine::EventSystems::BaseEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONBUTTON_ONSELECT_OFFSET))(this, eventData);
		}

		::System::Void OnDeselect(::UnityEngine::EventSystems::BaseEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONBUTTON_ONDESELECT_OFFSET))(this, eventData);
		}

		::Struct_2_342392452B5681AE OnNavigation(::Class_1_A8F358278D5B9235* naviEvent)
		{
			return ((::Struct_2_342392452B5681AE(*)(::PVOID, ::Class_1_A8F358278D5B9235*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONBUTTON_ONNAVIGATION_OFFSET))(this, naviEvent);
		}

		::System::Void SetClickOnSelect(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONBUTTON_SETCLICKONSELECT_OFFSET))(this, value);
		}

		::UnityEngine::GameObject* GetFirstSelectable(::Class_1_A8F358278D5B9235* naviEvent)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::Class_1_A8F358278D5B9235*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONBUTTON_GETFIRSTSELECTABLE_OFFSET))(this, naviEvent);
		}

		::System::Void AddCustomInControlAction(::RPG::UINavigation::UINavigationInControlAction* action)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::UINavigation::UINavigationInControlAction*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONBUTTON_ADDCUSTOMINCONTROLACTION_OFFSET))(this, action);
		}

		::System::Void RemoveCustomInControlAction(::RPG::UINavigation::UINavigationInControlAction* action)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::UINavigation::UINavigationInControlAction*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONBUTTON_REMOVECUSTOMINCONTROLACTION_OFFSET))(this, action);
		}

		::System::Void ClearCustomInControlActions()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONBUTTON_CLEARCUSTOMINCONTROLACTIONS_OFFSET))(this);
		}

		::System::Boolean IsSelected()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONBUTTON_ISSELECTED_OFFSET))(this);
		}

		::System::Void AddInControlAction(::RPG::UINavigation::UINavigationInControlAction* action)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::UINavigation::UINavigationInControlAction*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONBUTTON_ADDINCONTROLACTION_OFFSET))(this, action);
		}

		::System::Void RemoveInControlAction(::RPG::UINavigation::UINavigationInControlAction* action)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::UINavigation::UINavigationInControlAction*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONBUTTON_REMOVEINCONTROLACTION_OFFSET))(this, action);
		}

		::System::Void SetActionHintName(::System::String* hintName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONBUTTON_SETACTIONHINTNAME_OFFSET))(this, hintName);
		}

		::System::String* GetActionHintName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONBUTTON_GETACTIONHINTNAME_OFFSET))(this);
		}

		::System::Void ClearActionHintName()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONBUTTON_CLEARACTIONHINTNAME_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::UINavigation::UINavigationInControlAction*>* GetControlActions()
		{
			return ((::System::Collections::Generic::List_1<::RPG::UINavigation::UINavigationInControlAction*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONBUTTON_GETCONTROLACTIONS_OFFSET))(this);
		}

		::System::Void _ClickButton()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONBUTTON__CLICKBUTTON_OFFSET))(this);
		}

		::System::Void _UpdateActionHintStatus(::System::Boolean active)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONBUTTON__UPDATEACTIONHINTSTATUS_OFFSET))(this, active);
		}

		::System::Void _MarkZoneShouldUpdateInControlHints()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONBUTTON__MARKZONESHOULDUPDATEINCONTROLHINTS_OFFSET))(this);
		}

		::Struct_2_342392452B5681AE __iFixBaseProxy_OnNavigation(::Class_1_A8F358278D5B9235* P0)
		{
			return ((::Struct_2_342392452B5681AE(*)(::PVOID, ::Class_1_A8F358278D5B9235*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONBUTTON___IFIXBASEPROXY_ONNAVIGATION_OFFSET))(this, P0);
		}

		::UnityEngine::GameObject* __iFixBaseProxy_GetFirstSelectable(::Class_1_A8F358278D5B9235* P0)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::Class_1_A8F358278D5B9235*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONBUTTON___IFIXBASEPROXY_GETFIRSTSELECTABLE_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_AddInControlAction(::RPG::UINavigation::UINavigationInControlAction* P0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::UINavigation::UINavigationInControlAction*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONBUTTON___IFIXBASEPROXY_ADDINCONTROLACTION_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_RemoveInControlAction(::RPG::UINavigation::UINavigationInControlAction* P0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::UINavigation::UINavigationInControlAction*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONBUTTON___IFIXBASEPROXY_REMOVEINCONTROLACTION_OFFSET))(this, P0);
		}
	};
}
