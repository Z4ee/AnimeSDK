#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int TurnBasedAIDecisionResult_TypeDefinitionIndex = 57917;

	enum class TurnBasedAIDecisionResult : ::System::Int32
	{
		NoNeed = 0,
		Success = 1,
		NoValidDecision = 2,
		Exception = 3,
	};
}
