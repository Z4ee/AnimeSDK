#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/EventTriggerListener.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace RPG::Client { class EventTriggerListener_VoidDelegate; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::EventSystems { class BaseEventData; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::UI { class ScrollRect; }
namespace UnityEngine::UI { class TouchFilter; }

#define RPG_CLIENT_JIGSAWEVENTTRIGGERLISTENER_CHECKK_OFFSET UNITYSDK_OFFSET(0xA6634C0)
#define RPG_CLIENT_JIGSAWEVENTTRIGGERLISTENER_IGNOREHANDLER_OFFSET UNITYSDK_OFFSET(0xA663820)
#define RPG_CLIENT_JIGSAWEVENTTRIGGERLISTENER_LOGICBEGINDRAG_OFFSET UNITYSDK_OFFSET(0xA6635E0)
#define RPG_CLIENT_JIGSAWEVENTTRIGGERLISTENER_MANUALSTOPDRAG_OFFSET UNITYSDK_OFFSET(0xA663970)
#define RPG_CLIENT_JIGSAWEVENTTRIGGERLISTENER_ONBEGINDRAG_OFFSET UNITYSDK_OFFSET(0xA6629C0)
#define RPG_CLIENT_JIGSAWEVENTTRIGGERLISTENER_ONDRAG_OFFSET UNITYSDK_OFFSET(0xA662BA0)
#define RPG_CLIENT_JIGSAWEVENTTRIGGERLISTENER_ONENDDRAG_OFFSET UNITYSDK_OFFSET(0xA662E30)
#define RPG_CLIENT_JIGSAWEVENTTRIGGERLISTENER_ONPOINTEREXIT_OFFSET UNITYSDK_OFFSET(0xA663790)
#define RPG_CLIENT_JIGSAWEVENTTRIGGERLISTENER_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0xA662F50)
#define RPG_CLIENT_JIGSAWEVENTTRIGGERLISTENER_REGISTERDEPOTRECTAREA_OFFSET UNITYSDK_OFFSET(0xA6638D0)
#define RPG_CLIENT_JIGSAWEVENTTRIGGERLISTENER_REGISTERSCROLLRECT_OFFSET UNITYSDK_OFFSET(0xA663920)
#define RPG_CLIENT_JIGSAWEVENTTRIGGERLISTENER__CTOR_OFFSET UNITYSDK_OFFSET(0xA6639C0)
#define RPG_CLIENT_JIGSAWEVENTTRIGGERLISTENER__STOPDRAGCALLBACK_OFFSET UNITYSDK_OFFSET(0xA663660)
#define RPG_CLIENT_JIGSAWEVENTTRIGGERLISTENER___IFIXBASEPROXY_ONBEGINDRAG_OFFSET UNITYSDK_OFFSET(0xA663A00)
#define RPG_CLIENT_JIGSAWEVENTTRIGGERLISTENER___IFIXBASEPROXY_ONDRAG_OFFSET UNITYSDK_OFFSET(0xA663AA0)
#define RPG_CLIENT_JIGSAWEVENTTRIGGERLISTENER___IFIXBASEPROXY_ONENDDRAG_OFFSET UNITYSDK_OFFSET(0xA663B40)
#define RPG_CLIENT_JIGSAWEVENTTRIGGERLISTENER___IFIXBASEPROXY_ONPOINTEREXIT_OFFSET UNITYSDK_OFFSET(0xA663BE0)
#define RPG_CLIENT_JIGSAWEVENTTRIGGERLISTENER___IFIXBASEPROXY_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0xA663C80)

namespace RPG::Client
{
	inline static constexpr unsigned int JigsawEventTriggerListener_TypeDefinitionIndex = 66852;

	class JigsawEventTriggerListener : public ::RPG::Client::EventTriggerListener
	{
	public:
		// static const ::System::Single _DragCheckDis; // 0x0
		::RPG::Client::EventTriggerListener_VoidDelegate* OnExitDepotAreaTrigger; // 0x90
		::RPG::Client::EventTriggerListener_VoidDelegate* OnCommonPointerUp; // 0x98
		::UnityEngine::UI::ScrollRect* _ScrollRect; // 0xA0
		::UnityEngine::RectTransform* _DepotRectTransform; // 0xA8
		::System::Boolean _IsDragging; // 0xB0
		::UnityEngine::UI::TouchFilter* _TouchFilter; // 0xB8
		::UnityEngine::Vector2 _Delta; // 0xC0
		::System::Single _DragOutDegree; // 0xC8
		::System::Boolean _LogicDragStart; // 0xCC
		::System::Boolean _CheckFinish; // 0xCD

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_JIGSAWEVENTTRIGGERLISTENER__CTOR_OFFSET))(this);
		}

		::System::Void OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_JIGSAWEVENTTRIGGERLISTENER_ONBEGINDRAG_OFFSET))(this, eventData);
		}

		::System::Void CheckK(::UnityEngine::Vector2 delta, ::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_JIGSAWEVENTTRIGGERLISTENER_CHECKK_OFFSET))(this, delta, eventData);
		}

		::System::Void LogicBeginDrag(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_JIGSAWEVENTTRIGGERLISTENER_LOGICBEGINDRAG_OFFSET))(this, eventData);
		}

		::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_JIGSAWEVENTTRIGGERLISTENER_ONDRAG_OFFSET))(this, eventData);
		}

		::System::Void OnEndDrag(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_JIGSAWEVENTTRIGGERLISTENER_ONENDDRAG_OFFSET))(this, eventData);
		}

		::System::Void OnPointerExit(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_JIGSAWEVENTTRIGGERLISTENER_ONPOINTEREXIT_OFFSET))(this, eventData);
		}

		::System::Void OnPointerUp(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_JIGSAWEVENTTRIGGERLISTENER_ONPOINTERUP_OFFSET))(this, eventData);
		}

		::System::Boolean IgnoreHandler(::UnityEngine::EventSystems::BaseEventData* eventData)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_JIGSAWEVENTTRIGGERLISTENER_IGNOREHANDLER_OFFSET))(this, eventData);
		}

		::System::Void RegisterDepotRectArea(::UnityEngine::RectTransform* depotRectTransform)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_JIGSAWEVENTTRIGGERLISTENER_REGISTERDEPOTRECTAREA_OFFSET))(this, depotRectTransform);
		}

		::System::Void RegisterScrollRect(::UnityEngine::UI::ScrollRect* scrollRect)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::ScrollRect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_JIGSAWEVENTTRIGGERLISTENER_REGISTERSCROLLRECT_OFFSET))(this, scrollRect);
		}

		::System::Void ManualStopDrag(::System::Boolean isStop)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_JIGSAWEVENTTRIGGERLISTENER_MANUALSTOPDRAG_OFFSET))(this, isStop);
		}

		::System::Void _StopDragCallback(::System::Boolean isStop)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_JIGSAWEVENTTRIGGERLISTENER__STOPDRAGCALLBACK_OFFSET))(this, isStop);
		}

		::System::Void __iFixBaseProxy_OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_JIGSAWEVENTTRIGGERLISTENER___IFIXBASEPROXY_ONBEGINDRAG_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_OnDrag(::UnityEngine::EventSystems::PointerEventData* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_JIGSAWEVENTTRIGGERLISTENER___IFIXBASEPROXY_ONDRAG_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_OnEndDrag(::UnityEngine::EventSystems::PointerEventData* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_JIGSAWEVENTTRIGGERLISTENER___IFIXBASEPROXY_ONENDDRAG_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_OnPointerExit(::UnityEngine::EventSystems::PointerEventData* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_JIGSAWEVENTTRIGGERLISTENER___IFIXBASEPROXY_ONPOINTEREXIT_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_OnPointerUp(::UnityEngine::EventSystems::PointerEventData* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_JIGSAWEVENTTRIGGERLISTENER___IFIXBASEPROXY_ONPOINTERUP_OFFSET))(this, P0);
		}
	};
}
