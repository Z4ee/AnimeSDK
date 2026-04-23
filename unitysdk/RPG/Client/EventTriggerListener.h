#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/EventSystems/EventTrigger.h"

namespace RPG::Client { class EventTriggerListener_VoidBaseEventDataDelegate; }
namespace RPG::Client { class EventTriggerListener_VoidDelegate; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::EventSystems { class BaseEventData; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define RPG_CLIENT_EVENTTRIGGERLISTENER_GET_OFFSET UNITYSDK_OFFSET(0xA2B1400)
#define RPG_CLIENT_EVENTTRIGGERLISTENER_IGNOREHANDLER_OFFSET UNITYSDK_OFFSET(0xA2B2510)
#define RPG_CLIENT_EVENTTRIGGERLISTENER_ONBEGINDRAG_OFFSET UNITYSDK_OFFSET(0xA2B23C0)
#define RPG_CLIENT_EVENTTRIGGERLISTENER_ONDESELECT_OFFSET UNITYSDK_OFFSET(0xA2B22E0)
#define RPG_CLIENT_EVENTTRIGGERLISTENER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xA2B2640)
#define RPG_CLIENT_EVENTTRIGGERLISTENER_ONDRAG_OFFSET UNITYSDK_OFFSET(0xA2B2430)
#define RPG_CLIENT_EVENTTRIGGERLISTENER_ONDROP_OFFSET UNITYSDK_OFFSET(0xA2B25C0)
#define RPG_CLIENT_EVENTTRIGGERLISTENER_ONENDDRAG_OFFSET UNITYSDK_OFFSET(0xA2B24A0)
#define RPG_CLIENT_EVENTTRIGGERLISTENER_ONPOINTERCLICK_OFFSET UNITYSDK_OFFSET(0xA2B1AC0)
#define RPG_CLIENT_EVENTTRIGGERLISTENER_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0xA2B20B0)
#define RPG_CLIENT_EVENTTRIGGERLISTENER_ONPOINTERENTER_OFFSET UNITYSDK_OFFSET(0xA2B2190)
#define RPG_CLIENT_EVENTTRIGGERLISTENER_ONPOINTEREXIT_OFFSET UNITYSDK_OFFSET(0xA2B2200)
#define RPG_CLIENT_EVENTTRIGGERLISTENER_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0xA2B2120)
#define RPG_CLIENT_EVENTTRIGGERLISTENER_ONSELECT_OFFSET UNITYSDK_OFFSET(0xA2B2270)
#define RPG_CLIENT_EVENTTRIGGERLISTENER_ONSUBMIT_OFFSET UNITYSDK_OFFSET(0xA2B14D0)
#define RPG_CLIENT_EVENTTRIGGERLISTENER_ONUPDATESELECTED_OFFSET UNITYSDK_OFFSET(0xA2B2350)
#define RPG_CLIENT_EVENTTRIGGERLISTENER__CTOR_OFFSET UNITYSDK_OFFSET(0xA2B26B0)
#define RPG_CLIENT_EVENTTRIGGERLISTENER___IFIXBASEPROXY_ONBEGINDRAG_OFFSET UNITYSDK_OFFSET(0xA2B2750)
#define RPG_CLIENT_EVENTTRIGGERLISTENER___IFIXBASEPROXY_ONDESELECT_OFFSET UNITYSDK_OFFSET(0xA2B2730)
#define RPG_CLIENT_EVENTTRIGGERLISTENER___IFIXBASEPROXY_ONDRAG_OFFSET UNITYSDK_OFFSET(0xA2B2760)
#define RPG_CLIENT_EVENTTRIGGERLISTENER___IFIXBASEPROXY_ONDROP_OFFSET UNITYSDK_OFFSET(0xA2B2780)
#define RPG_CLIENT_EVENTTRIGGERLISTENER___IFIXBASEPROXY_ONENDDRAG_OFFSET UNITYSDK_OFFSET(0xA2B2770)
#define RPG_CLIENT_EVENTTRIGGERLISTENER___IFIXBASEPROXY_ONPOINTERCLICK_OFFSET UNITYSDK_OFFSET(0xA2B26E0)
#define RPG_CLIENT_EVENTTRIGGERLISTENER___IFIXBASEPROXY_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0xA2B26F0)
#define RPG_CLIENT_EVENTTRIGGERLISTENER___IFIXBASEPROXY_ONPOINTERENTER_OFFSET UNITYSDK_OFFSET(0xA2B2710)
#define RPG_CLIENT_EVENTTRIGGERLISTENER___IFIXBASEPROXY_ONPOINTEREXIT_OFFSET UNITYSDK_OFFSET(0xA2B26C0)
#define RPG_CLIENT_EVENTTRIGGERLISTENER___IFIXBASEPROXY_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0xA2B2700)
#define RPG_CLIENT_EVENTTRIGGERLISTENER___IFIXBASEPROXY_ONSELECT_OFFSET UNITYSDK_OFFSET(0xA2B2720)
#define RPG_CLIENT_EVENTTRIGGERLISTENER___IFIXBASEPROXY_ONSUBMIT_OFFSET UNITYSDK_OFFSET(0xA2B26D0)
#define RPG_CLIENT_EVENTTRIGGERLISTENER___IFIXBASEPROXY_ONUPDATESELECTED_OFFSET UNITYSDK_OFFSET(0xA2B2740)

namespace RPG::Client
{
	inline static constexpr unsigned int EventTriggerListener_TypeDefinitionIndex = 66829;

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

		static ::RPG::Client::EventTriggerListener* Get(::UnityEngine::GameObject* go)
		{
			return ((::RPG::Client::EventTriggerListener*(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVENTTRIGGERLISTENER_GET_OFFSET))(go);
		}

		::System::Void OnSubmit(::UnityEngine::EventSystems::BaseEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVENTTRIGGERLISTENER_ONSUBMIT_OFFSET))(this, eventData);
		}

		::System::Void OnPointerClick(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVENTTRIGGERLISTENER_ONPOINTERCLICK_OFFSET))(this, eventData);
		}

		::System::Void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVENTTRIGGERLISTENER_ONPOINTERDOWN_OFFSET))(this, eventData);
		}

		::System::Void OnPointerUp(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVENTTRIGGERLISTENER_ONPOINTERUP_OFFSET))(this, eventData);
		}

		::System::Void OnPointerEnter(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVENTTRIGGERLISTENER_ONPOINTERENTER_OFFSET))(this, eventData);
		}

		::System::Void OnPointerExit(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVENTTRIGGERLISTENER_ONPOINTEREXIT_OFFSET))(this, eventData);
		}

		::System::Void OnSelect(::UnityEngine::EventSystems::BaseEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVENTTRIGGERLISTENER_ONSELECT_OFFSET))(this, eventData);
		}

		::System::Void OnDeselect(::UnityEngine::EventSystems::BaseEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVENTTRIGGERLISTENER_ONDESELECT_OFFSET))(this, eventData);
		}

		::System::Void OnUpdateSelected(::UnityEngine::EventSystems::BaseEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVENTTRIGGERLISTENER_ONUPDATESELECTED_OFFSET))(this, eventData);
		}

		::System::Void OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVENTTRIGGERLISTENER_ONBEGINDRAG_OFFSET))(this, eventData);
		}

		::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVENTTRIGGERLISTENER_ONDRAG_OFFSET))(this, eventData);
		}

		::System::Void OnEndDrag(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVENTTRIGGERLISTENER_ONENDDRAG_OFFSET))(this, eventData);
		}

		::System::Boolean IgnoreHandler(::UnityEngine::EventSystems::BaseEventData* eventData)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVENTTRIGGERLISTENER_IGNOREHANDLER_OFFSET))(this, eventData);
		}

		::System::Void OnDrop(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVENTTRIGGERLISTENER_ONDROP_OFFSET))(this, eventData);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVENTTRIGGERLISTENER_ONDESTROY_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnPointerExit(::UnityEngine::EventSystems::PointerEventData* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVENTTRIGGERLISTENER___IFIXBASEPROXY_ONPOINTEREXIT_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_OnSubmit(::UnityEngine::EventSystems::BaseEventData* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVENTTRIGGERLISTENER___IFIXBASEPROXY_ONSUBMIT_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_OnPointerClick(::UnityEngine::EventSystems::PointerEventData* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVENTTRIGGERLISTENER___IFIXBASEPROXY_ONPOINTERCLICK_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_OnPointerDown(::UnityEngine::EventSystems::PointerEventData* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVENTTRIGGERLISTENER___IFIXBASEPROXY_ONPOINTERDOWN_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_OnPointerUp(::UnityEngine::EventSystems::PointerEventData* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVENTTRIGGERLISTENER___IFIXBASEPROXY_ONPOINTERUP_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_OnPointerEnter(::UnityEngine::EventSystems::PointerEventData* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVENTTRIGGERLISTENER___IFIXBASEPROXY_ONPOINTERENTER_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_OnSelect(::UnityEngine::EventSystems::BaseEventData* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVENTTRIGGERLISTENER___IFIXBASEPROXY_ONSELECT_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_OnDeselect(::UnityEngine::EventSystems::BaseEventData* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVENTTRIGGERLISTENER___IFIXBASEPROXY_ONDESELECT_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_OnUpdateSelected(::UnityEngine::EventSystems::BaseEventData* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVENTTRIGGERLISTENER___IFIXBASEPROXY_ONUPDATESELECTED_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVENTTRIGGERLISTENER___IFIXBASEPROXY_ONBEGINDRAG_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_OnDrag(::UnityEngine::EventSystems::PointerEventData* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVENTTRIGGERLISTENER___IFIXBASEPROXY_ONDRAG_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_OnEndDrag(::UnityEngine::EventSystems::PointerEventData* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVENTTRIGGERLISTENER___IFIXBASEPROXY_ONENDDRAG_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_OnDrop(::UnityEngine::EventSystems::PointerEventData* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVENTTRIGGERLISTENER___IFIXBASEPROXY_ONDROP_OFFSET))(this, P0);
		}
	};
}
