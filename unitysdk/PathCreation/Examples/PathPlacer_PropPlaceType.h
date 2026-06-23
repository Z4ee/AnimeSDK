#pragma once
#include "unitysdk/unitysdk.h"

namespace PathCreation::Examples
{
	inline static constexpr unsigned int PathPlacer_PropPlaceType_TypeDefinitionIndex = 37462;

	enum class PathPlacer_PropPlaceType : ::System::Int32
	{
		Single = 0,
		Random = 1,
		Loop = 2,
	};
}
