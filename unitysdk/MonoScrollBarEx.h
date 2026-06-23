#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/Scrollbar.h"

class MonoScrollBarEx_ScrollBarExEvent;
namespace UnityEngine::EventSystems { class PointerEventData; }

#define MONOSCROLLBAREX_ONBEGINDRAG_OFFSET UNITYSDK_OFFSET(0xFAF2350)
#define MONOSCROLLBAREX_ONDRAG_OFFSET UNITYSDK_OFFSET(0xFAF24D0)
#define MONOSCROLLBAREX_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0xFAF2570)
#define MONOSCROLLBAREX_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0xFAF23F0)
#define MONOSCROLLBAREX__CTOR_OFFSET UNITYSDK_OFFSET(0xFAF2610)
#define MONOSCROLLBAREX___BASE_ONBEGINDRAG_OFFSET UNITYSDK_OFFSET(0xFAF2760)
#define MONOSCROLLBAREX___BASE_ONDRAG_OFFSET UNITYSDK_OFFSET(0xFAF2770)
#define MONOSCROLLBAREX___BASE_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0xFAF2780)
#define MONOSCROLLBAREX___BASE_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0xFAF2790)

inline static constexpr unsigned int MonoScrollBarEx_TypeDefinitionIndex = 68877;

class MonoScrollBarEx : public ::UnityEngine::UI::Scrollbar
{
public:
	::MonoScrollBarEx_ScrollBarExEvent* OnScrollBeginDrag; // 0x140
	::MonoScrollBarEx_ScrollBarExEvent* OnScrollDrag; // 0x148
	::MonoScrollBarEx_ScrollBarExEvent* OnScrollPointerUp; // 0x150
	::MonoScrollBarEx_ScrollBarExEvent* OnScrollPointerDown; // 0x158

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOSCROLLBAREX__CTOR_OFFSET))(this);
	}

	::System::Void OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* eventData)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MONOSCROLLBAREX_ONBEGINDRAG_OFFSET))(this, eventData);
	}

	::System::Void OnPointerUp(::UnityEngine::EventSystems::PointerEventData* eventData)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MONOSCROLLBAREX_ONPOINTERUP_OFFSET))(this, eventData);
	}

	::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* eventData)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MONOSCROLLBAREX_ONDRAG_OFFSET))(this, eventData);
	}

	::System::Void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* eventData)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MONOSCROLLBAREX_ONPOINTERDOWN_OFFSET))(this, eventData);
	}

	::System::Void __base_OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MONOSCROLLBAREX___BASE_ONBEGINDRAG_OFFSET))(this, P0);
	}

	::System::Void __base_OnDrag(::UnityEngine::EventSystems::PointerEventData* P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MONOSCROLLBAREX___BASE_ONDRAG_OFFSET))(this, P0);
	}

	::System::Void __base_OnPointerDown(::UnityEngine::EventSystems::PointerEventData* P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MONOSCROLLBAREX___BASE_ONPOINTERDOWN_OFFSET))(this, P0);
	}

	::System::Void __base_OnPointerUp(::UnityEngine::EventSystems::PointerEventData* P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MONOSCROLLBAREX___BASE_ONPOINTERUP_OFFSET))(this, P0);
	}
};
