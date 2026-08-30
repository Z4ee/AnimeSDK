#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class UIEventHandler; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define RPG_CLIENT_SCREENEVENTHANDLER_ONBEGINDRAG_OFFSET UNITYSDK_OFFSET(0x1AF6F320)
#define RPG_CLIENT_SCREENEVENTHANDLER_ONDRAG_OFFSET UNITYSDK_OFFSET(0x1AF6F390)
#define RPG_CLIENT_SCREENEVENTHANDLER_ONENDDRAG_OFFSET UNITYSDK_OFFSET(0x1AF6F400)
#define RPG_CLIENT_SCREENEVENTHANDLER_ONPOINTERCLICK_OFFSET UNITYSDK_OFFSET(0x1AF6F2B0)
#define RPG_CLIENT_SCREENEVENTHANDLER_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x1AF6F1D0)
#define RPG_CLIENT_SCREENEVENTHANDLER_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0x1AF6F240)
#define RPG_CLIENT_SCREENEVENTHANDLER_ONSCROLL_OFFSET UNITYSDK_OFFSET(0x1AF6F470)
#define RPG_CLIENT_SCREENEVENTHANDLER_SETDRAGBEGINDELEGATE_OFFSET UNITYSDK_OFFSET(0x1AF6F090)
#define RPG_CLIENT_SCREENEVENTHANDLER_SETDRAGENDDELEGATE_OFFSET UNITYSDK_OFFSET(0x1AF6F130)
#define RPG_CLIENT_SCREENEVENTHANDLER_SETDRAGINGDELEGATE_OFFSET UNITYSDK_OFFSET(0x1AF6F0E0)
#define RPG_CLIENT_SCREENEVENTHANDLER_SETPOINTERCLICKDELEGATE_OFFSET UNITYSDK_OFFSET(0x1AF6F040)
#define RPG_CLIENT_SCREENEVENTHANDLER_SETPOINTERDOWNDELEGATE_OFFSET UNITYSDK_OFFSET(0x1AF6EFA0)
#define RPG_CLIENT_SCREENEVENTHANDLER_SETPOINTERUPDELEGATE_OFFSET UNITYSDK_OFFSET(0x1AF6EFF0)
#define RPG_CLIENT_SCREENEVENTHANDLER_SETSCROLLDELEGATE_OFFSET UNITYSDK_OFFSET(0x1AF6F180)
#define RPG_CLIENT_SCREENEVENTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF6F4E0)

namespace RPG::Client
{
	inline static constexpr unsigned int ScreenEventHandler_TypeDefinitionIndex = 68979;

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

		::System::Void SetPointerDownDelegate(::RPG::Client::UIEventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIEventHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENEVENTHANDLER_SETPOINTERDOWNDELEGATE_OFFSET))(this, a1);
		}

		::System::Void SetPointerUpDelegate(::RPG::Client::UIEventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIEventHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENEVENTHANDLER_SETPOINTERUPDELEGATE_OFFSET))(this, a1);
		}

		::System::Void SetPointerClickDelegate(::RPG::Client::UIEventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIEventHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENEVENTHANDLER_SETPOINTERCLICKDELEGATE_OFFSET))(this, a1);
		}

		::System::Void SetDragBeginDelegate(::RPG::Client::UIEventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIEventHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENEVENTHANDLER_SETDRAGBEGINDELEGATE_OFFSET))(this, a1);
		}

		::System::Void SetDragingDelegate(::RPG::Client::UIEventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIEventHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENEVENTHANDLER_SETDRAGINGDELEGATE_OFFSET))(this, a1);
		}

		::System::Void SetDragEndDelegate(::RPG::Client::UIEventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIEventHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENEVENTHANDLER_SETDRAGENDDELEGATE_OFFSET))(this, a1);
		}

		::System::Void SetScrollDelegate(::RPG::Client::UIEventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIEventHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENEVENTHANDLER_SETSCROLLDELEGATE_OFFSET))(this, a1);
		}

		::System::Void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENEVENTHANDLER_ONPOINTERDOWN_OFFSET))(this, a1);
		}

		::System::Void OnPointerUp(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENEVENTHANDLER_ONPOINTERUP_OFFSET))(this, a1);
		}

		::System::Void OnPointerClick(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENEVENTHANDLER_ONPOINTERCLICK_OFFSET))(this, a1);
		}

		::System::Void OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENEVENTHANDLER_ONBEGINDRAG_OFFSET))(this, a1);
		}

		::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENEVENTHANDLER_ONDRAG_OFFSET))(this, a1);
		}

		::System::Void OnEndDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENEVENTHANDLER_ONENDDRAG_OFFSET))(this, a1);
		}

		::System::Void OnScroll(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENEVENTHANDLER_ONSCROLL_OFFSET))(this, a1);
		}
	};
}
