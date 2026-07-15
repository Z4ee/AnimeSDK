#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/UINavigation/UINavigationArea.h"
#include "unitysdk/Struct_2_342392452B5681AE.h"

class Class_1_27E062DB46F0D058;
namespace RPG::UINavigation { class UINavigationInControlAction; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::EventSystems { class AxisEventData; }
namespace UnityEngine::EventSystems { class BaseEventData; }
namespace UnityEngine::UI { class Selectable; }

#define RPG_UINAVIGATION_UINAVIGATIONBUTTON_ADDCUSTOMINCONTROLACTION_OFFSET UNITYSDK_OFFSET(0x19D56660)
#define RPG_UINAVIGATION_UINAVIGATIONBUTTON_ADDINCONTROLACTION_OFFSET UNITYSDK_OFFSET(0x19D569C0)
#define RPG_UINAVIGATION_UINAVIGATIONBUTTON_AWAKE_OFFSET UNITYSDK_OFFSET(0x19D55820)
#define RPG_UINAVIGATION_UINAVIGATIONBUTTON_CLEARACTIONHINTNAME_OFFSET UNITYSDK_OFFSET(0x19D56D70)
#define RPG_UINAVIGATION_UINAVIGATIONBUTTON_CLEARCUSTOMINCONTROLACTIONS_OFFSET UNITYSDK_OFFSET(0x19D567D0)
#define RPG_UINAVIGATION_UINAVIGATIONBUTTON_GETACTIONHINTNAME_OFFSET UNITYSDK_OFFSET(0x19D56D20)
#define RPG_UINAVIGATION_UINAVIGATIONBUTTON_GETCONTROLACTIONS_OFFSET UNITYSDK_OFFSET(0x19D56DD0)
#define RPG_UINAVIGATION_UINAVIGATIONBUTTON_GETFIRSTSELECTABLE_OFFSET UNITYSDK_OFFSET(0x19D563D0)
#define RPG_UINAVIGATION_UINAVIGATIONBUTTON_GET_SELECTABLE_OFFSET UNITYSDK_OFFSET(0x19D55760)
#define RPG_UINAVIGATION_UINAVIGATIONBUTTON_ISNAVIGABLE_OFFSET UNITYSDK_OFFSET(0x19D56250)
#define RPG_UINAVIGATION_UINAVIGATIONBUTTON_ISSELECTED_OFFSET UNITYSDK_OFFSET(0x19D56950)
#define RPG_UINAVIGATION_UINAVIGATIONBUTTON_ONDESELECT_OFFSET UNITYSDK_OFFSET(0x19D55FE0)
#define RPG_UINAVIGATION_UINAVIGATIONBUTTON_ONMOVE_OFFSET UNITYSDK_OFFSET(0x19D55B40)
#define RPG_UINAVIGATION_UINAVIGATIONBUTTON_ONNAVIGATION_OFFSET UNITYSDK_OFFSET(0x19D560A0)
#define RPG_UINAVIGATION_UINAVIGATIONBUTTON_ONSELECT_OFFSET UNITYSDK_OFFSET(0x19D55C20)
#define RPG_UINAVIGATION_UINAVIGATIONBUTTON_ONSUBMIT_OFFSET UNITYSDK_OFFSET(0x19D55BB0)
#define RPG_UINAVIGATION_UINAVIGATIONBUTTON_REMOVECUSTOMINCONTROLACTION_OFFSET UNITYSDK_OFFSET(0x19D56730)
#define RPG_UINAVIGATION_UINAVIGATIONBUTTON_REMOVEINCONTROLACTION_OFFSET UNITYSDK_OFFSET(0x19D56AF0)
#define RPG_UINAVIGATION_UINAVIGATIONBUTTON_RESET_OFFSET UNITYSDK_OFFSET(0x19D55A10)
#define RPG_UINAVIGATION_UINAVIGATIONBUTTON_SETACTIONHINTNAME_OFFSET UNITYSDK_OFFSET(0x19D56BD0)
#define RPG_UINAVIGATION_UINAVIGATIONBUTTON_SETCLICKONSELECT_OFFSET UNITYSDK_OFFSET(0x19D56380)
#define RPG_UINAVIGATION_UINAVIGATIONBUTTON__CLICKBUTTON_OFFSET UNITYSDK_OFFSET(0x19D55E60)
#define RPG_UINAVIGATION_UINAVIGATIONBUTTON__CTOR_OFFSET UNITYSDK_OFFSET(0x19D571A0)
#define RPG_UINAVIGATION_UINAVIGATIONBUTTON__MARKZONESHOULDUPDATEINCONTROLHINTS_OFFSET UNITYSDK_OFFSET(0x19D56C30)
#define RPG_UINAVIGATION_UINAVIGATIONBUTTON__UPDATEACTIONHINTSTATUS_OFFSET UNITYSDK_OFFSET(0x19D55D50)

namespace RPG::UINavigation
{
	inline static constexpr unsigned int UINavigationButton_TypeDefinitionIndex = 49410;

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

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONBUTTON__CTOR_OFFSET))(this);
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

		::System::Boolean IsSelected()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONBUTTON_ISSELECTED_OFFSET))(this);
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

		::System::Void _ClickButton()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONBUTTON__CLICKBUTTON_OFFSET))(this);
		}

		::System::Void _UpdateActionHintStatus(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONBUTTON__UPDATEACTIONHINTSTATUS_OFFSET))(this, a1);
		}

		::System::Void _MarkZoneShouldUpdateInControlHints()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONBUTTON__MARKZONESHOULDUPDATEINCONTROLHINTS_OFFSET))(this);
		}
	};
}
