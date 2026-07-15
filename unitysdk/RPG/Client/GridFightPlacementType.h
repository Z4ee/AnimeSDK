#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightPlacementType_TypeDefinitionIndex = 62225;

	enum class GridFightPlacementType : ::System::Int32
	{
		None = 0,
		Front = 1,
		Back = 2,
		Bench = 3,
		Overcrowd = 4,
	};
}
