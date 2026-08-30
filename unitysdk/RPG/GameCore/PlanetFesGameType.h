#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlanetFesGameType_TypeDefinitionIndex = 12160;

	enum class PlanetFesGameType : ::System::Int32
	{
		None = 0,
		PlanetFesGameGacha = 1,
		PlanetFesGameBingo = 2,
	};
}
