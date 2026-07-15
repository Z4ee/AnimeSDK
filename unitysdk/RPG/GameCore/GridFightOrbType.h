#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightOrbType_TypeDefinitionIndex = 10198;

	enum class GridFightOrbType : ::System::Int32
	{
		None = 0,
		White = 1,
		Blue = 2,
		Glod = 3,
		Colorful = 4,
		BigColorful = 5,
		GoldenEgg = 6,
		Present = 7,
	};
}
