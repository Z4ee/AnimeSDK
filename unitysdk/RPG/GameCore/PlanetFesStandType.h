#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlanetFesStandType_TypeDefinitionIndex = 11707;

	enum class PlanetFesStandType : ::System::Int32
	{
		None = 0,
		Business = 1,
		Exhibition = 2,
		Game = 3,
	};
}
