#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int InteractCostType_TypeDefinitionIndex = 12629;

	enum class InteractCostType : ::System::Int32
	{
		None = 0,
		CostItem = 1,
		CheckItem = 2,
	};
}
