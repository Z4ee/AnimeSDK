#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitBatchItemTriggerState_TypeDefinitionIndex = 56223;

	enum class WaitBatchItemTriggerState : ::System::Int32
	{
		None = 0,
		Triggering = 1,
		Triggered = 2,
	};
}
