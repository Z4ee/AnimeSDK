#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Events/UnityEvent_1.h"

namespace UnityEngine::EventSystems { class PointerEventData; }

#define RPG_CLIENT_COLLIDERBUTTON_POINTEREVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x94033D0)

namespace RPG::Client
{
	inline static constexpr unsigned int ColliderButton_PointerEvent_TypeDefinitionIndex = 59425;

	class ColliderButton_PointerEvent : public ::UnityEngine::Events::UnityEvent_1<::UnityEngine::EventSystems::PointerEventData*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COLLIDERBUTTON_POINTEREVENT__CTOR_OFFSET))(this);
		}
	};
}
