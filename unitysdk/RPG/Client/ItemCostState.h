#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int ItemCostState_TypeDefinitionIndex = 62773;

	enum class ItemCostState : ::System::Int32
	{
		None = 0,
		ScoinLack = 1,
		Lack = 2,
		Sufficient = 3,
		CanCompose = 4,
		CanConvert = 5,
		ComposeAndConvert = 6,
	};
}
