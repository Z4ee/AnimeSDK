#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/EventTriggerListener.h"
#include "unitysdk/UnityEngine/UI/TouchFilter_FilterParam.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::UI { class TouchFilter; }

#define RPG_CLIENT_FILTERDRAGEVENTTRIGGERLISTENER_AWAKE_OFFSET UNITYSDK_OFFSET(0xA3830C0)
#define RPG_CLIENT_FILTERDRAGEVENTTRIGGERLISTENER_GET_OFFSET UNITYSDK_OFFSET(0xA382FB0)
#define RPG_CLIENT_FILTERDRAGEVENTTRIGGERLISTENER_ONBEGINDRAG_OFFSET UNITYSDK_OFFSET(0xA383110)
#define RPG_CLIENT_FILTERDRAGEVENTTRIGGERLISTENER_ONDRAG_OFFSET UNITYSDK_OFFSET(0xA3831D0)
#define RPG_CLIENT_FILTERDRAGEVENTTRIGGERLISTENER_ONENDDRAG_OFFSET UNITYSDK_OFFSET(0xA383630)
#define RPG_CLIENT_FILTERDRAGEVENTTRIGGERLISTENER__CTOR_OFFSET UNITYSDK_OFFSET(0xA3836F0)
#define RPG_CLIENT_FILTERDRAGEVENTTRIGGERLISTENER__ISDRAGDIRECTIONDETERMINED_OFFSET UNITYSDK_OFFSET(0xA383400)
#define RPG_CLIENT_FILTERDRAGEVENTTRIGGERLISTENER__TRYREPLACEPOINTERDRAGTOPASSTHROUGH_OFFSET UNITYSDK_OFFSET(0xA383480)
#define RPG_CLIENT_FILTERDRAGEVENTTRIGGERLISTENER___IFIXBASEPROXY_ONBEGINDRAG_OFFSET UNITYSDK_OFFSET(0xA383720)
#define RPG_CLIENT_FILTERDRAGEVENTTRIGGERLISTENER___IFIXBASEPROXY_ONDRAG_OFFSET UNITYSDK_OFFSET(0xA3837C0)
#define RPG_CLIENT_FILTERDRAGEVENTTRIGGERLISTENER___IFIXBASEPROXY_ONENDDRAG_OFFSET UNITYSDK_OFFSET(0xA383860)

namespace RPG::Client
{
	inline static constexpr unsigned int FilterDragEventTriggerListener_TypeDefinitionIndex = 66832;

	class FilterDragEventTriggerListener : public ::RPG::Client::EventTriggerListener
	{
	public:
		::System::Boolean _IsInDragOnFilter; // 0x90
		::UnityEngine::UI::TouchFilter* _TouchFilter; // 0x98
		::System::Boolean NeedFilterDrag; // 0xA0
		::System::Boolean NeedReplaceDragObject; // 0xA1
		::System::Boolean IsVertical; // 0xA2
		::UnityEngine::UI::TouchFilter_FilterParam FilterParam; // 0xA4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FILTERDRAGEVENTTRIGGERLISTENER__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::FilterDragEventTriggerListener* Get(::UnityEngine::GameObject* go)
		{
			return ((::RPG::Client::FilterDragEventTriggerListener*(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FILTERDRAGEVENTTRIGGERLISTENER_GET_OFFSET))(go);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FILTERDRAGEVENTTRIGGERLISTENER_AWAKE_OFFSET))(this);
		}

		::System::Void OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FILTERDRAGEVENTTRIGGERLISTENER_ONBEGINDRAG_OFFSET))(this, eventData);
		}

		::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FILTERDRAGEVENTTRIGGERLISTENER_ONDRAG_OFFSET))(this, eventData);
		}

		::System::Void OnEndDrag(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FILTERDRAGEVENTTRIGGERLISTENER_ONENDDRAG_OFFSET))(this, eventData);
		}

		::System::Boolean _IsDragDirectionDetermined(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FILTERDRAGEVENTTRIGGERLISTENER__ISDRAGDIRECTIONDETERMINED_OFFSET))(this, eventData);
		}

		::System::Void _TryReplacePointerDragToPassThrough(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FILTERDRAGEVENTTRIGGERLISTENER__TRYREPLACEPOINTERDRAGTOPASSTHROUGH_OFFSET))(this, eventData);
		}

		::System::Void __iFixBaseProxy_OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FILTERDRAGEVENTTRIGGERLISTENER___IFIXBASEPROXY_ONBEGINDRAG_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_OnDrag(::UnityEngine::EventSystems::PointerEventData* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FILTERDRAGEVENTTRIGGERLISTENER___IFIXBASEPROXY_ONDRAG_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_OnEndDrag(::UnityEngine::EventSystems::PointerEventData* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FILTERDRAGEVENTTRIGGERLISTENER___IFIXBASEPROXY_ONENDDRAG_OFFSET))(this, P0);
		}
	};
}
