#pragma once
#include "unitysdk/unitysdk.h"

namespace PathCreation::Examples
{
	inline static constexpr unsigned int PathPlacer_PlaceObjType_TypeDefinitionIndex = 35853;

	enum class PathPlacer_PlaceObjType : ::System::Int32
	{
		Prop = 0,
		RailwayLike = 1,
		PipeLike = 2,
	};
}
