#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int StateTreeTransitionTriggerType_TypeDefinitionIndex = 14982;

	enum class StateTreeTransitionTriggerType : ::System::Int32
	{
		OnStateCompleted = 0,
		OnStateSucceeded = 1,
		OnStateFailed = 2,
		OnTick = 3,
		OnEvent = 4,
	};
}
