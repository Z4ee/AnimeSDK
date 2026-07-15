#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int SpaceZooEXPChangeType_TypeDefinitionIndex = 64959;

	enum class SpaceZooEXPChangeType : ::System::Int32
	{
		Invalid = 0,
		SpecialCat = 1,
		NewCat = 2,
		Feature = 3,
		SpecialFeature = 4,
	};
}
