#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RegionBlockVisibilityStatus_TypeDefinitionIndex = 23580;

	enum class RegionBlockVisibilityStatus : ::System::Int32
	{
		None = 0,
		Hide = 1,
		Load_HLOD = 2,
		Load = 3,
		HLOD = 4,
		Show = 5,
		Focus = 6,
		Max = 7,
	};
}
