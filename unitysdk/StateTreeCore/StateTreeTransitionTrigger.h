#pragma once
#include "unitysdk/unitysdk.h"

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreeTransitionTrigger_TypeDefinitionIndex = 28410;

	enum class StateTreeTransitionTrigger : ::System::Byte
	{
		None = 0x0,
		OnStateCompleted = 0x3,
		OnStateSucceeded = 0x1,
		OnStateFailed = 0x2,
		OnTick = 0x4,
		OnEvent = 0x8,
	};
}
