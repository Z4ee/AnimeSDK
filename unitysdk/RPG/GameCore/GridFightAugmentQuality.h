#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightAugmentQuality_TypeDefinitionIndex = 10197;

	enum class GridFightAugmentQuality : ::System::Int32
	{
		None = 0,
		Silver = 1,
		Gold = 2,
		Prismatic = 3,
	};
}
