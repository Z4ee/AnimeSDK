#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/UINavigation/UINavigationArea.h"
#include "unitysdk/Struct_2_342392452B5681AE.h"

class Class_1_27E062DB46F0D058;
namespace RPG::UINavigation { class UINavigationInControlAction; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::EventSystems { class AxisEventData; }
namespace UnityEngine::EventSystems { class BaseEventData; }
namespace UnityEngine::UI { class Selectable; }

#define RPG_UINAVIGATION_UINAVIGATIONBUTTON_ADDCUSTOMINCONTROLACTION_OFFSET UNITYSDK_OFFSET(0xE7F6A50)
#define RPG_UINAVIGATION_UINAVIGATIONBUTTON_ADDINCONTROLACTION_OFFSET UNITYSDK_OFFSET(0xE7F6EB0)
#define RPG_UINAVIGATION_UINAVIGATIONBUTTON_ADDSELECTIONCHANGEDCALLBACK_OFFSET UNITYSDK_OFFSET(0xE7F6D90)
#define RPG_UINAVIGATION_UINAVIGATIONBUTTON_ADD__ONSELECTIONCHANGED_OFFSET UNITYSDK_OFFSET(0xE7F5D90)
#define RPG_UINAVIGATION_UINAVIGATIONBUTTON_AWAKE_OFFSET UNITYSDK_OFFSET(0xE7F5E70)
#define RPG_UINAVIGATION_UINAVIGATIONBUTTON_CLEARACTIONHINTNAME_OFFSET UNITYSDK_OFFSET(0xE7F7280)
#define RPG_UINAVIGATION_UINAVIGATIONBUTTON_CLEARCUSTOMINCONTROLACTIONS_OFFSET UNITYSDK_OFFSET(0xE7F6C00)
#define RPG_UINAVIGATION_UINAVIGATIONBUTTON_GETACTIONHINTNAME_OFFSET UNITYSDK_OFFSET(0xE7F7230)
#define RPG_UINAVIGATION_UINAVIGATIONBUTTON_GETCONTROLACTIONS_OFFSET UNITYSDK_OFFSET(0xE7F72E0)
#define RPG_UINAVIGATION_UINAVIGATIONBUTTON_GETFIRSTSELECTABLE_OFFSET UNITYSDK_OFFSET(0xE7F69D0)
#define RPG_UINAVIGATION_UINAVIGATIONBUTTON_GET_ISSELECTED_OFFSET UNITYSDK_OFFSET(0xE7F5D40)
#define RPG_UINAVIGATION_UINAVIGATIONBUTTON_GET_SELECTABLE_OFFSET UNITYSDK_OFFSET(0xE7F5C60)
#define RPG_UINAVIGATION_UINAVIGATIONBUTTON_ISNAVIGABLE_OFFSET UNITYSDK_OFFSET(0xE7F6340)
#define RPG_UINAVIGATION_UINAVIGATIONBUTTON_ONDESELECT_OFFSET UNITYSDK_OFFSET(0xE7F65F0)
#define RPG_UINAVIGATION_UINAVIGATIONBUTTON_ONMOVE_OFFSET UNITYSDK_OFFSET(0xE7F60C0)
#define RPG_UINAVIGATION_UINAVIGATIONBUTTON_ONNAVIGATION_OFFSET UNITYSDK_OFFSET(0xE7F66B0)
#define RPG_UINAVIGATION_UINAVIGATIONBUTTON_ONSELECT_OFFSET UNITYSDK_OFFSET(0xE7F61A0)
#define RPG_UINAVIGATION_UINAVIGATIONBUTTON_ONSUBMIT_OFFSET UNITYSDK_OFFSET(0xE7F6130)
#define RPG_UINAVIGATION_UINAVIGATIONBUTTON_REMOVECUSTOMINCONTROLACTION_OFFSET UNITYSDK_OFFSET(0xE7F6B50)
#define RPG_UINAVIGATION_UINAVIGATIONBUTTON_REMOVEINCONTROLACTION_OFFSET UNITYSDK_OFFSET(0xE7F7010)
#define RPG_UINAVIGATION_UINAVIGATIONBUTTON_REMOVESELECTIONCHANGEDCALLBACK_OFFSET UNITYSDK_OFFSET(0xE7F6E20)
#define RPG_UINAVIGATION_UINAVIGATIONBUTTON_REMOVE__ONSELECTIONCHANGED_OFFSET UNITYSDK_OFFSET(0xE7F5E00)
#define RPG_UINAVIGATION_UINAVIGATIONBUTTON_RESET_OFFSET UNITYSDK_OFFSET(0xE7F6030)
#define RPG_UINAVIGATION_UINAVIGATIONBUTTON_SELECT_OFFSET UNITYSDK_OFFSET(0xE7F6870)
#define RPG_UINAVIGATION_UINAVIGATIONBUTTON_SETACTIONHINTNAME_OFFSET UNITYSDK_OFFSET(0xE7F7100)
#define RPG_UINAVIGATION_UINAVIGATIONBUTTON_SETCLICKONSELECT_OFFSET UNITYSDK_OFFSET(0xE7F6980)
#define RPG_UINAVIGATION_UINAVIGATIONBUTTON__CLICKBUTTON_OFFSET UNITYSDK_OFFSET(0xE7F6530)
#define RPG_UINAVIGATION_UINAVIGATIONBUTTON__CTOR_OFFSET UNITYSDK_OFFSET(0xE7F7860)
#define RPG_UINAVIGATION_UINAVIGATIONBUTTON__ISBUTTONNAVIGABLE_OFFSET UNITYSDK_OFFSET(0xE7F6790)
#define RPG_UINAVIGATION_UINAVIGATIONBUTTON__MARKZONESHOULDUPDATEINCONTROLHINTS_OFFSET UNITYSDK_OFFSET(0xE7F7160)
#define RPG_UINAVIGATION_UINAVIGATIONBUTTON__SETSELECTEDSTATE_OFFSET UNITYSDK_OFFSET(0xE7F63A0)
#define RPG_UINAVIGATION_UINAVIGATIONBUTTON__UPDATEACTIONHINTSTATUS_OFFSET UNITYSDK_OFFSET(0xE7F6420)

namespace RPG::UINavigation
{
	inline static constexpr unsigned int UINavigationButton_TypeDefinitionIndex = 52028;

	class UINavigationButton : public ::RPG::UINavigation::UINavigationArea
	{
	public:
		// static const ::System::String* _DefaultActionHintName; // 0x0
		::UnityEngine::UI::Selectable* _Selectable; // 0xB0
		::System::Boolean _ControlChildShortcuts; // 0xB8
		::System::Collections::Generic::List_1<::RPG::UINavigation::UINavigationInControlAction*>* _CustomChildInControlActions; // 0xC0
		::System::Boolean _ClickOnSelect; // 0xC8
		::System::Boolean _IgnoreInteractable; // 0xC9
		::System::String* _ActionHintName; // 0xD0
		::System::Collections::Generic::List_1<::RPG::UINavigation::UINavigationInControlAction*>* _ControlActions; // 0xD8
		::System::Boolean _IsSelected; // 0xE0
		::System::Action_1<::System::Boolean>* _OnSelectionChanged; // 0xE8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONBUTTON__CTOR_OFFSET))(this);
		}

		::UnityEngine::UI::Selectable* get_Selectable()
		{
			return ((::UnityEngine::UI::Selectable*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONBUTTON_GET_SELECTABLE_OFFSET))(this);
		}

		::System::Boolean get_IsSelected()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONBUTTON_GET_ISSELECTED_OFFSET))(this);
		}

		::System::Void add__OnSelectionChanged(::System::Action_1<::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONBUTTON_ADD__ONSELECTIONCHANGED_OFFSET))(this, a1);
		}

		::System::Void remove__OnSelectionChanged(::System::Action_1<::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONBUTTON_REMOVE__ONSELECTIONCHANGED_OFFSET))(this, a1);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONBUTTON_AWAKE_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONBUTTON_RESET_OFFSET))(this);
		}

		::System::Void OnMove(::UnityEngine::EventSystems::AxisEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::AxisEventData*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONBUTTON_ONMOVE_OFFSET))(this, a1);
		}

		::System::Void OnSubmit(::UnityEngine::EventSystems::BaseEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONBUTTON_ONSUBMIT_OFFSET))(this, a1);
		}

		::System::Void OnSelect(::UnityEngine::EventSystems::BaseEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONBUTTON_ONSELECT_OFFSET))(this, a1);
		}

		::System::Void OnDeselect(::UnityEngine::EventSystems::BaseEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONBUTTON_ONDESELECT_OFFSET))(this, a1);
		}

		::Struct_2_342392452B5681AE OnNavigation(::Class_1_27E062DB46F0D058* a1)
		{
			return ((::Struct_2_342392452B5681AE(*)(::PVOID, ::Class_1_27E062DB46F0D058*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONBUTTON_ONNAVIGATION_OFFSET))(this, a1);
		}

		::System::Boolean IsNavigable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONBUTTON_ISNAVIGABLE_OFFSET))(this);
		}

		::System::Void Select()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONBUTTON_SELECT_OFFSET))(this);
		}

		::System::Void SetClickOnSelect(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONBUTTON_SETCLICKONSELECT_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* GetFirstSelectable(::Class_1_27E062DB46F0D058* a1)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::Class_1_27E062DB46F0D058*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONBUTTON_GETFIRSTSELECTABLE_OFFSET))(this, a1);
		}

		::System::Void AddCustomInControlAction(::RPG::UINavigation::UINavigationInControlAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::UINavigation::UINavigationInControlAction*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONBUTTON_ADDCUSTOMINCONTROLACTION_OFFSET))(this, a1);
		}

		::System::Void RemoveCustomInControlAction(::RPG::UINavigation::UINavigationInControlAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::UINavigation::UINavigationInControlAction*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONBUTTON_REMOVECUSTOMINCONTROLACTION_OFFSET))(this, a1);
		}

		::System::Void ClearCustomInControlActions()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONBUTTON_CLEARCUSTOMINCONTROLACTIONS_OFFSET))(this);
		}

		::System::Void AddSelectionChangedCallback(::System::Action_1<::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONBUTTON_ADDSELECTIONCHANGEDCALLBACK_OFFSET))(this, a1);
		}

		::System::Void RemoveSelectionChangedCallback(::System::Action_1<::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONBUTTON_REMOVESELECTIONCHANGEDCALLBACK_OFFSET))(this, a1);
		}

		::System::Void AddInControlAction(::RPG::UINavigation::UINavigationInControlAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::UINavigation::UINavigationInControlAction*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONBUTTON_ADDINCONTROLACTION_OFFSET))(this, a1);
		}

		::System::Void RemoveInControlAction(::RPG::UINavigation::UINavigationInControlAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::UINavigation::UINavigationInControlAction*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONBUTTON_REMOVEINCONTROLACTION_OFFSET))(this, a1);
		}

		::System::Void SetActionHintName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONBUTTON_SETACTIONHINTNAME_OFFSET))(this, a1);
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

		::System::Boolean _IsButtonNavigable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONBUTTON__ISBUTTONNAVIGABLE_OFFSET))(this);
		}

		::System::Void _ClickButton()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONBUTTON__CLICKBUTTON_OFFSET))(this);
		}

		::System::Void _SetSelectedState(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONBUTTON__SETSELECTEDSTATE_OFFSET))(this, a1);
		}

		::System::Void _UpdateActionHintStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONBUTTON__UPDATEACTIONHINTSTATUS_OFFSET))(this);
		}

		::System::Void _MarkZoneShouldUpdateInControlHints()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONBUTTON__MARKZONESHOULDUPDATEINCONTROLHINTS_OFFSET))(this);
		}
	};
}
