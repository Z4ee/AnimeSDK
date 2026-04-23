#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/EventTriggerListener.h"

namespace RPG::Client { class EventTriggerListener_VoidDelegate; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::EventSystems { class BaseEventData; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::UI { class TouchFilter; }

#define RPG_CLIENT_ALLEYEVENTTRIGGERLISTENER_IGNOREHANDLER_OFFSET UNITYSDK_OFFSET(0x9CF9CC0)
#define RPG_CLIENT_ALLEYEVENTTRIGGERLISTENER_ONBEGINDRAG_OFFSET UNITYSDK_OFFSET(0x9CF9770)
#define RPG_CLIENT_ALLEYEVENTTRIGGERLISTENER_ONDRAG_OFFSET UNITYSDK_OFFSET(0x9CF97E0)
#define RPG_CLIENT_ALLEYEVENTTRIGGERLISTENER_ONPOINTEREXIT_OFFSET UNITYSDK_OFFSET(0x9CF9AB0)
#define RPG_CLIENT_ALLEYEVENTTRIGGERLISTENER_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0x9CF9BD0)
#define RPG_CLIENT_ALLEYEVENTTRIGGERLISTENER_REGISTERDEPOTRECTAREA_OFFSET UNITYSDK_OFFSET(0x9CF9D70)
#define RPG_CLIENT_ALLEYEVENTTRIGGERLISTENER__CTOR_OFFSET UNITYSDK_OFFSET(0x9CF9DC0)
#define RPG_CLIENT_ALLEYEVENTTRIGGERLISTENER__ISPOINTINRECT_OFFSET UNITYSDK_OFFSET(0x9CF9890)
#define RPG_CLIENT_ALLEYEVENTTRIGGERLISTENER___IFIXBASEPROXY_ONBEGINDRAG_OFFSET UNITYSDK_OFFSET(0x9CF9DF0)
#define RPG_CLIENT_ALLEYEVENTTRIGGERLISTENER___IFIXBASEPROXY_ONDRAG_OFFSET UNITYSDK_OFFSET(0x9CF9E90)
#define RPG_CLIENT_ALLEYEVENTTRIGGERLISTENER___IFIXBASEPROXY_ONPOINTEREXIT_OFFSET UNITYSDK_OFFSET(0x9CF9F30)
#define RPG_CLIENT_ALLEYEVENTTRIGGERLISTENER___IFIXBASEPROXY_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0x9CF9FD0)

namespace RPG::Client
{
	inline static constexpr unsigned int AlleyEventTriggerListener_TypeDefinitionIndex = 66800;

	class AlleyEventTriggerListener : public ::RPG::Client::EventTriggerListener
	{
	public:
		::RPG::Client::EventTriggerListener_VoidDelegate* OnExitDepotAreaTrigger; // 0x90
		::UnityEngine::UI::TouchFilter* _TouchFilter; // 0x98
		::UnityEngine::RectTransform* _DepotRectTransform; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYEVENTTRIGGERLISTENER__CTOR_OFFSET))(this);
		}

		::System::Void OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYEVENTTRIGGERLISTENER_ONBEGINDRAG_OFFSET))(this, eventData);
		}

		::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYEVENTTRIGGERLISTENER_ONDRAG_OFFSET))(this, eventData);
		}

		::System::Void OnPointerExit(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYEVENTTRIGGERLISTENER_ONPOINTEREXIT_OFFSET))(this, eventData);
		}

		::System::Void OnPointerUp(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYEVENTTRIGGERLISTENER_ONPOINTERUP_OFFSET))(this, eventData);
		}

		::System::Boolean IgnoreHandler(::UnityEngine::EventSystems::BaseEventData* eventData)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYEVENTTRIGGERLISTENER_IGNOREHANDLER_OFFSET))(this, eventData);
		}

		::System::Void RegisterDepotRectArea(::UnityEngine::RectTransform* depotRectTransform)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYEVENTTRIGGERLISTENER_REGISTERDEPOTRECTAREA_OFFSET))(this, depotRectTransform);
		}

		::System::Boolean _IsPointInRect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYEVENTTRIGGERLISTENER__ISPOINTINRECT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYEVENTTRIGGERLISTENER___IFIXBASEPROXY_ONBEGINDRAG_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_OnDrag(::UnityEngine::EventSystems::PointerEventData* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYEVENTTRIGGERLISTENER___IFIXBASEPROXY_ONDRAG_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_OnPointerExit(::UnityEngine::EventSystems::PointerEventData* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYEVENTTRIGGERLISTENER___IFIXBASEPROXY_ONPOINTEREXIT_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_OnPointerUp(::UnityEngine::EventSystems::PointerEventData* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYEVENTTRIGGERLISTENER___IFIXBASEPROXY_ONPOINTERUP_OFFSET))(this, P0);
		}
	};
}
