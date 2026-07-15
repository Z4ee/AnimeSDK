#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlanetFesLandType_TypeDefinitionIndex = 11708;

	enum class PlanetFesLandType : ::System::Int32
	{
		None = 0,
		Business = 1,
		Exhibition = 2,
		Game = 3,
	};
}
