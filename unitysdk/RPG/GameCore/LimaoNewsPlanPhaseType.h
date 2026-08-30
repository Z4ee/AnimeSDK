#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int LimaoNewsPlanPhaseType_TypeDefinitionIndex = 13851;

	enum class LimaoNewsPlanPhaseType : ::System::Int32
	{
		Start = 1,
		End = 2,
		GoalWork = 3,
		NormalWork = 4,
	};
}
