#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/EventSystems/EventTrigger.h"

namespace RPG::Client { class EventTriggerListener_VoidBaseEventDataDelegate; }
namespace RPG::Client { class EventTriggerListener_VoidDelegate; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::EventSystems { class BaseEventData; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define RPG_CLIENT_EVENTTRIGGERLISTENER_GET_OFFSET UNITYSDK_OFFSET(0xCECDCD0)
#define RPG_CLIENT_EVENTTRIGGERLISTENER_IGNOREHANDLER_OFFSET UNITYSDK_OFFSET(0xCECE3C0)
#define RPG_CLIENT_EVENTTRIGGERLISTENER_ONBEGINDRAG_OFFSET UNITYSDK_OFFSET(0xCECE240)
#define RPG_CLIENT_EVENTTRIGGERLISTENER_ONDESELECT_OFFSET UNITYSDK_OFFSET(0xCECE140)
#define RPG_CLIENT_EVENTTRIGGERLISTENER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xCECE550)
#define RPG_CLIENT_EVENTTRIGGERLISTENER_ONDRAG_OFFSET UNITYSDK_OFFSET(0xCECE2C0)
#define RPG_CLIENT_EVENTTRIGGERLISTENER_ONDROP_OFFSET UNITYSDK_OFFSET(0xCECE4D0)
#define RPG_CLIENT_EVENTTRIGGERLISTENER_ONENDDRAG_OFFSET UNITYSDK_OFFSET(0xCECE340)
#define RPG_CLIENT_EVENTTRIGGERLISTENER_ONPOINTERCLICK_OFFSET UNITYSDK_OFFSET(0xCECDE30)
#define RPG_CLIENT_EVENTTRIGGERLISTENER_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0xCECDEC0)
#define RPG_CLIENT_EVENTTRIGGERLISTENER_ONPOINTERENTER_OFFSET UNITYSDK_OFFSET(0xCECDFC0)
#define RPG_CLIENT_EVENTTRIGGERLISTENER_ONPOINTEREXIT_OFFSET UNITYSDK_OFFSET(0xCECE040)
#define RPG_CLIENT_EVENTTRIGGERLISTENER_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0xCECDF40)
#define RPG_CLIENT_EVENTTRIGGERLISTENER_ONSELECT_OFFSET UNITYSDK_OFFSET(0xCECE0C0)
#define RPG_CLIENT_EVENTTRIGGERLISTENER_ONSUBMIT_OFFSET UNITYSDK_OFFSET(0xCECDDA0)
#define RPG_CLIENT_EVENTTRIGGERLISTENER_ONUPDATESELECTED_OFFSET UNITYSDK_OFFSET(0xCECE1C0)
#define RPG_CLIENT_EVENTTRIGGERLISTENER__CTOR_OFFSET UNITYSDK_OFFSET(0xCECE5C0)

namespace RPG::Client
{
	inline static constexpr unsigned int EventTriggerListener_TypeDefinitionIndex = 72456;

	class EventTriggerListener : public ::UnityEngine::EventSystems::EventTrigger
	{
	public:
		::RPG::Client::EventTriggerListener_VoidDelegate* OnClickTrigger; // 0x20
		::RPG::Client::EventTriggerListener_VoidBaseEventDataDelegate* OnSubmitTrigger; // 0x28
		::RPG::Client::EventTriggerListener_VoidDelegate* OnDownTrigger; // 0x30
		::RPG::Client::EventTriggerListener_VoidDelegate* OnUpTrigger; // 0x38
		::RPG::Client::EventTriggerListener_VoidDelegate* OnEnterTrigger; // 0x40
		::RPG::Client::EventTriggerListener_VoidDelegate* OnExitTrigger; // 0x48
		::RPG::Client::EventTriggerListener_VoidBaseEventDataDelegate* OnSelectTrigger; // 0x50
		::RPG::Client::EventTriggerListener_VoidBaseEventDataDelegate* OnDeselectTrigger; // 0x58
		::RPG::Client::EventTriggerListener_VoidBaseEventDataDelegate* OnUpdateSelectTrigger; // 0x60
		::RPG::Client::EventTriggerListener_VoidDelegate* OnBeginDragTrigger; // 0x68
		::RPG::Client::EventTriggerListener_VoidDelegate* OnEndDragTrigger; // 0x70
		::RPG::Client::EventTriggerListener_VoidDelegate* OnDragTrigger; // 0x78
		::RPG::Client::EventTriggerListener_VoidDelegate* OnDropTrigger; // 0x80
		::System::Boolean ShareDrag; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVENTTRIGGERLISTENER__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::EventTriggerListener* Get(::UnityEngine::GameObject* a1)
		{
			return ((::RPG::Client::EventTriggerListener*(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVENTTRIGGERLISTENER_GET_OFFSET))(a1);
		}

		::System::Void OnSubmit(::UnityEngine::EventSystems::BaseEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVENTTRIGGERLISTENER_ONSUBMIT_OFFSET))(this, a1);
		}

		::System::Void OnPointerClick(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVENTTRIGGERLISTENER_ONPOINTERCLICK_OFFSET))(this, a1);
		}

		::System::Void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVENTTRIGGERLISTENER_ONPOINTERDOWN_OFFSET))(this, a1);
		}

		::System::Void OnPointerUp(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVENTTRIGGERLISTENER_ONPOINTERUP_OFFSET))(this, a1);
		}

		::System::Void OnPointerEnter(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVENTTRIGGERLISTENER_ONPOINTERENTER_OFFSET))(this, a1);
		}

		::System::Void OnPointerExit(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVENTTRIGGERLISTENER_ONPOINTEREXIT_OFFSET))(this, a1);
		}

		::System::Void OnSelect(::UnityEngine::EventSystems::BaseEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVENTTRIGGERLISTENER_ONSELECT_OFFSET))(this, a1);
		}

		::System::Void OnDeselect(::UnityEngine::EventSystems::BaseEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVENTTRIGGERLISTENER_ONDESELECT_OFFSET))(this, a1);
		}

		::System::Void OnUpdateSelected(::UnityEngine::EventSystems::BaseEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVENTTRIGGERLISTENER_ONUPDATESELECTED_OFFSET))(this, a1);
		}

		::System::Void OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVENTTRIGGERLISTENER_ONBEGINDRAG_OFFSET))(this, a1);
		}

		::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVENTTRIGGERLISTENER_ONDRAG_OFFSET))(this, a1);
		}

		::System::Void OnEndDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVENTTRIGGERLISTENER_ONENDDRAG_OFFSET))(this, a1);
		}

		::System::Boolean IgnoreHandler(::UnityEngine::EventSystems::BaseEventData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVENTTRIGGERLISTENER_IGNOREHANDLER_OFFSET))(this, a1);
		}

		::System::Void OnDrop(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVENTTRIGGERLISTENER_ONDROP_OFFSET))(this, a1);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVENTTRIGGERLISTENER_ONDESTROY_OFFSET))(this);
		}
	};
}
