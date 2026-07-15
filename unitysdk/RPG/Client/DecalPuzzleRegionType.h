#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int DecalPuzzleRegionType_TypeDefinitionIndex = 65605;

	enum class DecalPuzzleRegionType : ::System::Int32
	{
		Rect = 0,
		Circle = 1,
	};
}
