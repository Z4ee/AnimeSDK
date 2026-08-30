#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlanetFesAvatarEventOptionType_TypeDefinitionIndex = 12157;

	enum class PlanetFesAvatarEventOptionType : ::System::Int32
	{
		None = 0,
		Random = 1,
		Negative = 2,
		Positive = 3,
		Single = 4,
	};
}
