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

#define RPG_CLIENT_JIGSAWEVENTTRIGGERLISTENER_CHECKK_OFFSET UNITYSDK_OFFSET(0x16C65410)
#define RPG_CLIENT_JIGSAWEVENTTRIGGERLISTENER_IGNOREHANDLER_OFFSET UNITYSDK_OFFSET(0x16C65780)
#define RPG_CLIENT_JIGSAWEVENTTRIGGERLISTENER_LOGICBEGINDRAG_OFFSET UNITYSDK_OFFSET(0x16C65530)
#define RPG_CLIENT_JIGSAWEVENTTRIGGERLISTENER_MANUALSTOPDRAG_OFFSET UNITYSDK_OFFSET(0x16C65930)
#define RPG_CLIENT_JIGSAWEVENTTRIGGERLISTENER_ONBEGINDRAG_OFFSET UNITYSDK_OFFSET(0x16C64B00)
#define RPG_CLIENT_JIGSAWEVENTTRIGGERLISTENER_ONDRAG_OFFSET UNITYSDK_OFFSET(0x16C64CE0)
#define RPG_CLIENT_JIGSAWEVENTTRIGGERLISTENER_ONENDDRAG_OFFSET UNITYSDK_OFFSET(0x16C64F80)
#define RPG_CLIENT_JIGSAWEVENTTRIGGERLISTENER_ONPOINTEREXIT_OFFSET UNITYSDK_OFFSET(0x16C656E0)
#define RPG_CLIENT_JIGSAWEVENTTRIGGERLISTENER_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0x16C650C0)
#define RPG_CLIENT_JIGSAWEVENTTRIGGERLISTENER_REGISTERDEPOTRECTAREA_OFFSET UNITYSDK_OFFSET(0x16C65890)
#define RPG_CLIENT_JIGSAWEVENTTRIGGERLISTENER_REGISTERSCROLLRECT_OFFSET UNITYSDK_OFFSET(0x16C658E0)
#define RPG_CLIENT_JIGSAWEVENTTRIGGERLISTENER__CTOR_OFFSET UNITYSDK_OFFSET(0x16C65980)
#define RPG_CLIENT_JIGSAWEVENTTRIGGERLISTENER__STOPDRAGCALLBACK_OFFSET UNITYSDK_OFFSET(0x16C655B0)

namespace RPG::Client
{
	inline static constexpr unsigned int JigsawEventTriggerListener_TypeDefinitionIndex = 69276;

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

		::System::Void OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_JIGSAWEVENTTRIGGERLISTENER_ONBEGINDRAG_OFFSET))(this, a1);
		}

		::System::Void CheckK(::UnityEngine::Vector2 a1, ::UnityEngine::EventSystems::PointerEventData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_JIGSAWEVENTTRIGGERLISTENER_CHECKK_OFFSET))(this, a1, a2);
		}

		::System::Void LogicBeginDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_JIGSAWEVENTTRIGGERLISTENER_LOGICBEGINDRAG_OFFSET))(this, a1);
		}

		::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_JIGSAWEVENTTRIGGERLISTENER_ONDRAG_OFFSET))(this, a1);
		}

		::System::Void OnEndDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_JIGSAWEVENTTRIGGERLISTENER_ONENDDRAG_OFFSET))(this, a1);
		}

		::System::Void OnPointerExit(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_JIGSAWEVENTTRIGGERLISTENER_ONPOINTEREXIT_OFFSET))(this, a1);
		}

		::System::Void OnPointerUp(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_JIGSAWEVENTTRIGGERLISTENER_ONPOINTERUP_OFFSET))(this, a1);
		}

		::System::Boolean IgnoreHandler(::UnityEngine::EventSystems::BaseEventData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_JIGSAWEVENTTRIGGERLISTENER_IGNOREHANDLER_OFFSET))(this, a1);
		}

		::System::Void RegisterDepotRectArea(::UnityEngine::RectTransform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_JIGSAWEVENTTRIGGERLISTENER_REGISTERDEPOTRECTAREA_OFFSET))(this, a1);
		}

		::System::Void RegisterScrollRect(::UnityEngine::UI::ScrollRect* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::ScrollRect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_JIGSAWEVENTTRIGGERLISTENER_REGISTERSCROLLRECT_OFFSET))(this, a1);
		}

		::System::Void ManualStopDrag(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_JIGSAWEVENTTRIGGERLISTENER_MANUALSTOPDRAG_OFFSET))(this, a1);
		}

		::System::Void _StopDragCallback(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_JIGSAWEVENTTRIGGERLISTENER__STOPDRAGCALLBACK_OFFSET))(this, a1);
		}
	};
}
