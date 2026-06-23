#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Events/UnityEvent_1.h"

namespace UnityEngine::EventSystems { class PointerEventData; }

#define MONOSCROLLBAREX_SCROLLBAREXEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x18E89020)

inline static constexpr unsigned int MonoScrollBarEx_ScrollBarExEvent_TypeDefinitionIndex = 68878;

class MonoScrollBarEx_ScrollBarExEvent : public ::UnityEngine::Events::UnityEvent_1<::UnityEngine::EventSystems::PointerEventData*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOSCROLLBAREX_SCROLLBAREXEVENT__CTOR_OFFSET))(this);
	}
};
