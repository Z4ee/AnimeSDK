#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/EventTriggerListener.h"
#include "unitysdk/UnityEngine/UI/TouchFilter_FilterParam.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::UI { class TouchFilter; }

#define RPG_CLIENT_FILTERDRAGEVENTTRIGGERLISTENER_AWAKE_OFFSET UNITYSDK_OFFSET(0xBA1F240)
#define RPG_CLIENT_FILTERDRAGEVENTTRIGGERLISTENER_GET_OFFSET UNITYSDK_OFFSET(0xBA1F130)
#define RPG_CLIENT_FILTERDRAGEVENTTRIGGERLISTENER_ONBEGINDRAG_OFFSET UNITYSDK_OFFSET(0xBA1F290)
#define RPG_CLIENT_FILTERDRAGEVENTTRIGGERLISTENER_ONDRAG_OFFSET UNITYSDK_OFFSET(0xBA1F350)
#define RPG_CLIENT_FILTERDRAGEVENTTRIGGERLISTENER_ONENDDRAG_OFFSET UNITYSDK_OFFSET(0xBA1F7B0)
#define RPG_CLIENT_FILTERDRAGEVENTTRIGGERLISTENER__CTOR_OFFSET UNITYSDK_OFFSET(0xBA1F870)
#define RPG_CLIENT_FILTERDRAGEVENTTRIGGERLISTENER__ISDRAGDIRECTIONDETERMINED_OFFSET UNITYSDK_OFFSET(0xBA1F590)
#define RPG_CLIENT_FILTERDRAGEVENTTRIGGERLISTENER__TRYREPLACEPOINTERDRAGTOPASSTHROUGH_OFFSET UNITYSDK_OFFSET(0xBA1F610)
#define RPG_CLIENT_FILTERDRAGEVENTTRIGGERLISTENER___IFIXBASEPROXY_ONBEGINDRAG_OFFSET UNITYSDK_OFFSET(0xBA1F8A0)
#define RPG_CLIENT_FILTERDRAGEVENTTRIGGERLISTENER___IFIXBASEPROXY_ONDRAG_OFFSET UNITYSDK_OFFSET(0xBA1F930)
#define RPG_CLIENT_FILTERDRAGEVENTTRIGGERLISTENER___IFIXBASEPROXY_ONENDDRAG_OFFSET UNITYSDK_OFFSET(0xBA1F9C0)

namespace RPG::Client
{
	inline static constexpr unsigned int FilterDragEventTriggerListener_TypeDefinitionIndex = 67772;

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

		static ::RPG::Client::FilterDragEventTriggerListener* Get(::UnityEngine::GameObject* a1)
		{
			return ((::RPG::Client::FilterDragEventTriggerListener*(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FILTERDRAGEVENTTRIGGERLISTENER_GET_OFFSET))(a1);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FILTERDRAGEVENTTRIGGERLISTENER_AWAKE_OFFSET))(this);
		}

		::System::Void OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FILTERDRAGEVENTTRIGGERLISTENER_ONBEGINDRAG_OFFSET))(this, a1);
		}

		::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FILTERDRAGEVENTTRIGGERLISTENER_ONDRAG_OFFSET))(this, a1);
		}

		::System::Void OnEndDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FILTERDRAGEVENTTRIGGERLISTENER_ONENDDRAG_OFFSET))(this, a1);
		}

		::System::Boolean _IsDragDirectionDetermined(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FILTERDRAGEVENTTRIGGERLISTENER__ISDRAGDIRECTIONDETERMINED_OFFSET))(this, a1);
		}

		::System::Void _TryReplacePointerDragToPassThrough(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FILTERDRAGEVENTTRIGGERLISTENER__TRYREPLACEPOINTERDRAGTOPASSTHROUGH_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FILTERDRAGEVENTTRIGGERLISTENER___IFIXBASEPROXY_ONBEGINDRAG_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_OnDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FILTERDRAGEVENTTRIGGERLISTENER___IFIXBASEPROXY_ONDRAG_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_OnEndDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FILTERDRAGEVENTTRIGGERLISTENER___IFIXBASEPROXY_ONENDDRAG_OFFSET))(this, a1);
		}
	};
}
