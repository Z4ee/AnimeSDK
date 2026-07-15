#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int TeamFormationSortingRule_TypeDefinitionIndex = 55144;

	enum class TeamFormationSortingRule : ::System::Int32
	{
		None = 0,
		Edge = 1,
		LeftEdge = 2,
		RightEdge = 3,
	};
}
