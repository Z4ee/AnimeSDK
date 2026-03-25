#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Events/UnityEvent_1.h"

#define RPG_CLIENT_LONGPRESSEVENT_PRESSINGDOWNEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x9A58FC0)

namespace RPG::Client
{
	inline static constexpr unsigned int LongPressEvent_PressingDownEvent_TypeDefinitionIndex = 59466;

	class LongPressEvent_PressingDownEvent : public ::UnityEngine::Events::UnityEvent_1<::System::Single>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGPRESSEVENT_PRESSINGDOWNEVENT__CTOR_OFFSET))(this);
		}
	};
}
