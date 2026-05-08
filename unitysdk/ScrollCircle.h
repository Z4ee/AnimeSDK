#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/EventSystems/UIBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class RectTransform; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define SCROLLCIRCLE_AWAKE_OFFSET UNITYSDK_OFFSET(0x17885280)
#define SCROLLCIRCLE_FIXCONTENTPOS_OFFSET UNITYSDK_OFFSET(0x178854E0)
#define SCROLLCIRCLE_ONBEGINDRAG_OFFSET UNITYSDK_OFFSET(0x17885720)
#define SCROLLCIRCLE_ONDRAG_OFFSET UNITYSDK_OFFSET(0x17885490)
#define SCROLLCIRCLE_ONENDDRAG_OFFSET UNITYSDK_OFFSET(0x17885770)
#define SCROLLCIRCLE_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x178857E0)
#define SCROLLCIRCLE_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0x17885830)
#define SCROLLCIRCLE__CTOR_OFFSET UNITYSDK_OFFSET(0x178858A0)
#define SCROLLCIRCLE___BASE_AWAKE_OFFSET UNITYSDK_OFFSET(0x178858F0)

inline static constexpr unsigned int ScrollCircle_TypeDefinitionIndex = 73187;

class ScrollCircle : public ::UnityEngine::EventSystems::UIBehaviour
{
public:
	::UnityEngine::RectTransform* content; // 0x18
	::UnityEngine::RectTransform* viewPort; // 0x20
	::System::Single _circleRadius; // 0x28
	::UnityEngine::Vector2 _originAnchorPos; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCROLLCIRCLE__CTOR_OFFSET))(this);
	}

	::System::Void Awake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCROLLCIRCLE_AWAKE_OFFSET))(this);
	}

	::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* eventData)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + SCROLLCIRCLE_ONDRAG_OFFSET))(this, eventData);
	}

	::System::Void OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* eventData)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + SCROLLCIRCLE_ONBEGINDRAG_OFFSET))(this, eventData);
	}

	::System::Void OnEndDrag(::UnityEngine::EventSystems::PointerEventData* eventData)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + SCROLLCIRCLE_ONENDDRAG_OFFSET))(this, eventData);
	}

	::System::Void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* eventData)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + SCROLLCIRCLE_ONPOINTERDOWN_OFFSET))(this, eventData);
	}

	::System::Void OnPointerUp(::UnityEngine::EventSystems::PointerEventData* eventData)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + SCROLLCIRCLE_ONPOINTERUP_OFFSET))(this, eventData);
	}

	::System::Void FixContentPos(::UnityEngine::EventSystems::PointerEventData* eventData)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + SCROLLCIRCLE_FIXCONTENTPOS_OFFSET))(this, eventData);
	}

	::System::Void __base_Awake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCROLLCIRCLE___BASE_AWAKE_OFFSET))(this);
	}
};
