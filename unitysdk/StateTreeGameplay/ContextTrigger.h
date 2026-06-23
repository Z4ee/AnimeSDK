#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STATETREEGAMEPLAY_CONTEXTTRIGGER_CONSUME_OFFSET UNITYSDK_OFFSET(0x949170)
#define STATETREEGAMEPLAY_CONTEXTTRIGGER_GET_ISTRIGGERED_OFFSET UNITYSDK_OFFSET(0x2ACBE0)
#define STATETREEGAMEPLAY_CONTEXTTRIGGER_SETTRIGGER_OFFSET UNITYSDK_OFFSET(0x949160)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int ContextTrigger_TypeDefinitionIndex = 65606;

	struct alignas(1) ContextTrigger
	{
		::System::Boolean _triggered; // 0x10

		::System::Boolean get_IsTriggered()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_CONTEXTTRIGGER_GET_ISTRIGGERED_OFFSET))(this);
		}

		::System::Boolean SetTrigger()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_CONTEXTTRIGGER_SETTRIGGER_OFFSET))(this);
		}

		::System::Boolean Consume()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_CONTEXTTRIGGER_CONSUME_OFFSET))(this);
		}
	};
}
