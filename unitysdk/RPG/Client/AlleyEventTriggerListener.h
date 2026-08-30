#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/EventTriggerListener.h"

namespace RPG::Client { class EventTriggerListener_VoidDelegate; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::EventSystems { class BaseEventData; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::UI { class TouchFilter; }

#define RPG_CLIENT_ALLEYEVENTTRIGGERLISTENER_IGNOREHANDLER_OFFSET UNITYSDK_OFFSET(0x19C64DE0)
#define RPG_CLIENT_ALLEYEVENTTRIGGERLISTENER_ONBEGINDRAG_OFFSET UNITYSDK_OFFSET(0x19C64870)
#define RPG_CLIENT_ALLEYEVENTTRIGGERLISTENER_ONDRAG_OFFSET UNITYSDK_OFFSET(0x19C648E0)
#define RPG_CLIENT_ALLEYEVENTTRIGGERLISTENER_ONPOINTEREXIT_OFFSET UNITYSDK_OFFSET(0x19C64BC0)
#define RPG_CLIENT_ALLEYEVENTTRIGGERLISTENER_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0x19C64CF0)
#define RPG_CLIENT_ALLEYEVENTTRIGGERLISTENER_REGISTERDEPOTRECTAREA_OFFSET UNITYSDK_OFFSET(0x19C64EF0)
#define RPG_CLIENT_ALLEYEVENTTRIGGERLISTENER__CTOR_OFFSET UNITYSDK_OFFSET(0x19C64F40)
#define RPG_CLIENT_ALLEYEVENTTRIGGERLISTENER__ISPOINTINRECT_OFFSET UNITYSDK_OFFSET(0x19C649A0)

namespace RPG::Client
{
	inline static constexpr unsigned int AlleyEventTriggerListener_TypeDefinitionIndex = 72424;

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

		::System::Void OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYEVENTTRIGGERLISTENER_ONBEGINDRAG_OFFSET))(this, a1);
		}

		::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYEVENTTRIGGERLISTENER_ONDRAG_OFFSET))(this, a1);
		}

		::System::Void OnPointerExit(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYEVENTTRIGGERLISTENER_ONPOINTEREXIT_OFFSET))(this, a1);
		}

		::System::Void OnPointerUp(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYEVENTTRIGGERLISTENER_ONPOINTERUP_OFFSET))(this, a1);
		}

		::System::Boolean IgnoreHandler(::UnityEngine::EventSystems::BaseEventData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYEVENTTRIGGERLISTENER_IGNOREHANDLER_OFFSET))(this, a1);
		}

		::System::Void RegisterDepotRectArea(::UnityEngine::RectTransform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYEVENTTRIGGERLISTENER_REGISTERDEPOTRECTAREA_OFFSET))(this, a1);
		}

		::System::Boolean _IsPointInRect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYEVENTTRIGGERLISTENER__ISPOINTINRECT_OFFSET))(this);
		}
	};
}
