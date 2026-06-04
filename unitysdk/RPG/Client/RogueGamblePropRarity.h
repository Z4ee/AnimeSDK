#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int RogueGamblePropRarity_TypeDefinitionIndex = 62863;

	enum class RogueGamblePropRarity : ::System::Int32
	{
		Negative = -1,
		None = 0,
		Common = 1,
		Coin = 2,
		Rare = 3,
		SuperRare = 4,
	};
}
