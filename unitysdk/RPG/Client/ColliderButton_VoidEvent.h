#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Events/UnityEvent.h"

#define RPG_CLIENT_COLLIDERBUTTON_VOIDEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x18004260)

namespace RPG::Client
{
	inline static constexpr unsigned int ColliderButton_VoidEvent_TypeDefinitionIndex = 69243;

	class ColliderButton_VoidEvent : public ::UnityEngine::Events::UnityEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COLLIDERBUTTON_VOIDEVENT__CTOR_OFFSET))(this);
		}
	};
}
