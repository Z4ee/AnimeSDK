#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlanetFesGachaType_TypeDefinitionIndex = 11643;

	enum class PlanetFesGachaType : ::System::Int32
	{
		None = 0,
		Avatar = 1,
		Card = 2,
	};
}
