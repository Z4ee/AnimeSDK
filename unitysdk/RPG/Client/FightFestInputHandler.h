#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::Events { class UnityEvent; }

#define RPG_CLIENT_FIGHTFESTINPUTHANDLER_ONBEGINDRAG_OFFSET UNITYSDK_OFFSET(0x1AE4E710)
#define RPG_CLIENT_FIGHTFESTINPUTHANDLER_ONDRAG_OFFSET UNITYSDK_OFFSET(0x1AE4E770)
#define RPG_CLIENT_FIGHTFESTINPUTHANDLER_ONENDDRAG_OFFSET UNITYSDK_OFFSET(0x1AE4E870)
#define RPG_CLIENT_FIGHTFESTINPUTHANDLER_ONPOINTERCLICK_OFFSET UNITYSDK_OFFSET(0x1AE4E8C0)
#define RPG_CLIENT_FIGHTFESTINPUTHANDLER_ONSCROLL_OFFSET UNITYSDK_OFFSET(0x1AE4E920)
#define RPG_CLIENT_FIGHTFESTINPUTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE4E9B0)

namespace RPG::Client
{
	inline static constexpr unsigned int FightFestInputHandler_TypeDefinitionIndex = 64248;

	class FightFestInputHandler : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single TriggerX; // 0x18
		::System::Single TriggerY; // 0x1C
		::UnityEngine::Events::UnityEvent* OnSwipeUp; // 0x20
		::UnityEngine::Events::UnityEvent* OnSwipeDown; // 0x28
		::UnityEngine::Events::UnityEvent* OnSwipeLeft; // 0x30
		::UnityEngine::Events::UnityEvent* OnSwipeRight; // 0x38
		::UnityEngine::Events::UnityEvent* OnClick; // 0x40
		::UnityEngine::Events::UnityEvent* OnScrollUp; // 0x48
		::UnityEngine::Events::UnityEvent* OnScrollDown; // 0x50
		::UnityEngine::Vector2 _BeginPos; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTINPUTHANDLER__CTOR_OFFSET))(this);
		}

		::System::Void OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTINPUTHANDLER_ONBEGINDRAG_OFFSET))(this, a1);
		}

		::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTINPUTHANDLER_ONDRAG_OFFSET))(this, a1);
		}

		::System::Void OnEndDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTINPUTHANDLER_ONENDDRAG_OFFSET))(this, a1);
		}

		::System::Void OnPointerClick(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTINPUTHANDLER_ONPOINTERCLICK_OFFSET))(this, a1);
		}

		::System::Void OnScroll(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTINPUTHANDLER_ONSCROLL_OFFSET))(this, a1);
		}
	};
}
