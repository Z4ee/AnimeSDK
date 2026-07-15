#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueMiracleCategory_TypeDefinitionIndex = 10244;

	enum class RogueMiracleCategory : ::System::Int32
	{
		None = 0,
		Common = 1,
		Rare = 2,
		Legendary = 3,
		Negative = 4,
		Hex = 5,
	};
}
