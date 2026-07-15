#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int MapSpaceType_TypeDefinitionIndex = 10169;

	enum class MapSpaceType : ::System::Int32
	{
		Unknow = 0,
		Reality = 1,
		Dream = 2,
		AmphoreusDay = 3,
		AmphoreusNight = 4,
		AmphoreusSpecial = 5,
		AmphoreusEternal = 6,
		FifthWorldHappiness = 7,
		FifthWorldSadness = 8,
	};
}
