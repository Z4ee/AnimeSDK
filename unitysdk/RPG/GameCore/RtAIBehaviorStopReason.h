#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtAIBehaviorStopReason_TypeDefinitionIndex = 54304;

	enum class RtAIBehaviorStopReason : ::System::Int32
	{
		None = 0,
		Success = 1,
		Fail = 2,
		Cancel = 3,
	};
}
