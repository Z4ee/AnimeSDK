#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int DecalPuzzleMethod_TypeDefinitionIndex = 56075;

	enum class DecalPuzzleMethod : ::System::Int32
	{
		BaseMinDistance = 0,
		SubvideRegionFull = 1,
	};
}
