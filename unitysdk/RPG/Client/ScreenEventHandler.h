#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class UIEventHandler; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define RPG_CLIENT_SCREENEVENTHANDLER_ONBEGINDRAG_OFFSET UNITYSDK_OFFSET(0xB157FC0)
#define RPG_CLIENT_SCREENEVENTHANDLER_ONDRAG_OFFSET UNITYSDK_OFFSET(0xB158020)
#define RPG_CLIENT_SCREENEVENTHANDLER_ONENDDRAG_OFFSET UNITYSDK_OFFSET(0xB158080)
#define RPG_CLIENT_SCREENEVENTHANDLER_ONPOINTERCLICK_OFFSET UNITYSDK_OFFSET(0xB157F60)
#define RPG_CLIENT_SCREENEVENTHANDLER_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0xB157EA0)
#define RPG_CLIENT_SCREENEVENTHANDLER_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0xB157F00)
#define RPG_CLIENT_SCREENEVENTHANDLER_ONSCROLL_OFFSET UNITYSDK_OFFSET(0xB1580E0)
#define RPG_CLIENT_SCREENEVENTHANDLER_SETDRAGBEGINDELEGATE_OFFSET UNITYSDK_OFFSET(0xB157D60)
#define RPG_CLIENT_SCREENEVENTHANDLER_SETDRAGENDDELEGATE_OFFSET UNITYSDK_OFFSET(0xB157E00)
#define RPG_CLIENT_SCREENEVENTHANDLER_SETDRAGINGDELEGATE_OFFSET UNITYSDK_OFFSET(0xB157DB0)
#define RPG_CLIENT_SCREENEVENTHANDLER_SETPOINTERCLICKDELEGATE_OFFSET UNITYSDK_OFFSET(0xB157D10)
#define RPG_CLIENT_SCREENEVENTHANDLER_SETPOINTERDOWNDELEGATE_OFFSET UNITYSDK_OFFSET(0xB157C70)
#define RPG_CLIENT_SCREENEVENTHANDLER_SETPOINTERUPDELEGATE_OFFSET UNITYSDK_OFFSET(0xB157CC0)
#define RPG_CLIENT_SCREENEVENTHANDLER_SETSCROLLDELEGATE_OFFSET UNITYSDK_OFFSET(0xB157E50)
#define RPG_CLIENT_SCREENEVENTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0xB158140)

namespace RPG::Client
{
	inline static constexpr unsigned int ScreenEventHandler_TypeDefinitionIndex = 63620;

	class ScreenEventHandler : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::UIEventHandler* _PointerDownDelegate; // 0x18
		::RPG::Client::UIEventHandler* _PointerUpDelegate; // 0x20
		::RPG::Client::UIEventHandler* _PointerClickDelegate; // 0x28
		::RPG::Client::UIEventHandler* _DragBeginDelegate; // 0x30
		::RPG::Client::UIEventHandler* _DragingDelegate; // 0x38
		::RPG::Client::UIEventHandler* _DragEndDelegate; // 0x40
		::RPG::Client::UIEventHandler* _ScrollDelegate; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENEVENTHANDLER__CTOR_OFFSET))(this);
		}

		::System::Void SetPointerDownDelegate(::RPG::Client::UIEventHandler* ClickDelegate)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIEventHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENEVENTHANDLER_SETPOINTERDOWNDELEGATE_OFFSET))(this, ClickDelegate);
		}

		::System::Void SetPointerUpDelegate(::RPG::Client::UIEventHandler* ClickDelegate)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIEventHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENEVENTHANDLER_SETPOINTERUPDELEGATE_OFFSET))(this, ClickDelegate);
		}

		::System::Void SetPointerClickDelegate(::RPG::Client::UIEventHandler* ClickDelegate)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIEventHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENEVENTHANDLER_SETPOINTERCLICKDELEGATE_OFFSET))(this, ClickDelegate);
		}

		::System::Void SetDragBeginDelegate(::RPG::Client::UIEventHandler* DragBeginDelegate)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIEventHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENEVENTHANDLER_SETDRAGBEGINDELEGATE_OFFSET))(this, DragBeginDelegate);
		}

		::System::Void SetDragingDelegate(::RPG::Client::UIEventHandler* DragingDelegate)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIEventHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENEVENTHANDLER_SETDRAGINGDELEGATE_OFFSET))(this, DragingDelegate);
		}

		::System::Void SetDragEndDelegate(::RPG::Client::UIEventHandler* DragEndDelegate)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIEventHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENEVENTHANDLER_SETDRAGENDDELEGATE_OFFSET))(this, DragEndDelegate);
		}

		::System::Void SetScrollDelegate(::RPG::Client::UIEventHandler* ScrollDelegate)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIEventHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENEVENTHANDLER_SETSCROLLDELEGATE_OFFSET))(this, ScrollDelegate);
		}

		::System::Void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENEVENTHANDLER_ONPOINTERDOWN_OFFSET))(this, eventData);
		}

		::System::Void OnPointerUp(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENEVENTHANDLER_ONPOINTERUP_OFFSET))(this, eventData);
		}

		::System::Void OnPointerClick(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENEVENTHANDLER_ONPOINTERCLICK_OFFSET))(this, eventData);
		}

		::System::Void OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENEVENTHANDLER_ONBEGINDRAG_OFFSET))(this, eventData);
		}

		::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENEVENTHANDLER_ONDRAG_OFFSET))(this, eventData);
		}

		::System::Void OnEndDrag(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENEVENTHANDLER_ONENDDRAG_OFFSET))(this, eventData);
		}

		::System::Void OnScroll(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENEVENTHANDLER_ONSCROLL_OFFSET))(this, eventData);
		}
	};
}
