#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/EventTriggerListener.h"

namespace RPG::Client { class JigsawEventTriggerListener; }
namespace UnityEngine::EventSystems { class BaseEventData; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define RPG_CLIENT_JIGSAWBGEVENTTRIGGERLISTENER_IGNOREHANDLER_OFFSET UNITYSDK_OFFSET(0xBD6A720)
#define RPG_CLIENT_JIGSAWBGEVENTTRIGGERLISTENER_ONBEGINDRAG_OFFSET UNITYSDK_OFFSET(0xBD69F90)
#define RPG_CLIENT_JIGSAWBGEVENTTRIGGERLISTENER_ONDRAG_OFFSET UNITYSDK_OFFSET(0xBD6A260)
#define RPG_CLIENT_JIGSAWBGEVENTTRIGGERLISTENER_ONENDDRAG_OFFSET UNITYSDK_OFFSET(0xBD6A4F0)
#define RPG_CLIENT_JIGSAWBGEVENTTRIGGERLISTENER_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0xBD6A5F0)
#define RPG_CLIENT_JIGSAWBGEVENTTRIGGERLISTENER__CTOR_OFFSET UNITYSDK_OFFSET(0xBD6A830)
#define RPG_CLIENT_JIGSAWBGEVENTTRIGGERLISTENER___IFIXBASEPROXY_ONBEGINDRAG_OFFSET UNITYSDK_OFFSET(0xBD6A840)
#define RPG_CLIENT_JIGSAWBGEVENTTRIGGERLISTENER___IFIXBASEPROXY_ONDRAG_OFFSET UNITYSDK_OFFSET(0xBD6A8D0)
#define RPG_CLIENT_JIGSAWBGEVENTTRIGGERLISTENER___IFIXBASEPROXY_ONENDDRAG_OFFSET UNITYSDK_OFFSET(0xBD6A960)
#define RPG_CLIENT_JIGSAWBGEVENTTRIGGERLISTENER___IFIXBASEPROXY_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0xBD6A9F0)

namespace RPG::Client
{
	inline static constexpr unsigned int JigsawBgEventTriggerListener_TypeDefinitionIndex = 67791;

	class JigsawBgEventTriggerListener : public ::RPG::Client::EventTriggerListener
	{
	public:
		::RPG::Client::JigsawEventTriggerListener* NewCreatedListener; // 0x90
		::System::Boolean IsDragging; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_JIGSAWBGEVENTTRIGGERLISTENER__CTOR_OFFSET))(this);
		}

		::System::Void OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_JIGSAWBGEVENTTRIGGERLISTENER_ONBEGINDRAG_OFFSET))(this, a1);
		}

		::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_JIGSAWBGEVENTTRIGGERLISTENER_ONDRAG_OFFSET))(this, a1);
		}

		::System::Void OnEndDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_JIGSAWBGEVENTTRIGGERLISTENER_ONENDDRAG_OFFSET))(this, a1);
		}

		::System::Void OnPointerUp(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_JIGSAWBGEVENTTRIGGERLISTENER_ONPOINTERUP_OFFSET))(this, a1);
		}

		::System::Boolean IgnoreHandler(::UnityEngine::EventSystems::BaseEventData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_JIGSAWBGEVENTTRIGGERLISTENER_IGNOREHANDLER_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_JIGSAWBGEVENTTRIGGERLISTENER___IFIXBASEPROXY_ONBEGINDRAG_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_OnDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_JIGSAWBGEVENTTRIGGERLISTENER___IFIXBASEPROXY_ONDRAG_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_OnEndDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_JIGSAWBGEVENTTRIGGERLISTENER___IFIXBASEPROXY_ONENDDRAG_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_OnPointerUp(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_JIGSAWBGEVENTTRIGGERLISTENER___IFIXBASEPROXY_ONPOINTERUP_OFFSET))(this, a1);
		}
	};
}
