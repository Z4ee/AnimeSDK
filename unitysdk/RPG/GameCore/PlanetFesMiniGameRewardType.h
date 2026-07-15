#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlanetFesMiniGameRewardType_TypeDefinitionIndex = 11713;

	enum class PlanetFesMiniGameRewardType : ::System::Int32
	{
		None = 0,
		Gold = 1,
		Gem = 2,
		Mixing = 3,
	};
}
