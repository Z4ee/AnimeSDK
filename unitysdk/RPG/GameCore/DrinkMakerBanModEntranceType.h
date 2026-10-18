#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int DrinkMakerBanModEntranceType_TypeDefinitionIndex = 13149;

	enum class DrinkMakerBanModEntranceType : ::System::Int32
	{
		None = 0,
		BanFormulaMode = 1,
		BanTagMode = 2,
	};
}
