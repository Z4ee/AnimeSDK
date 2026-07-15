#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelGroupSpatialBoundingType_TypeDefinitionIndex = 16501;

	enum class LevelGroupSpatialBoundingType : ::System::Int32
	{
		Simple = 0,
		Entity = 1,
		Custom = 2,
	};
}
