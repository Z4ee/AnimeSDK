#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int StreamingLayerName_TypeDefinitionIndex = 23567;

	enum class StreamingLayerName : ::System::Int32
	{
		None = 0,
		Prop = 1,
		StandAloneProp = 2,
		StandAloneObjects = 3,
		Building = 4,
		BuildingLarge = 5,
		Landmark = 6,
		MiddleDistantView = 7,
		DistantView = 8,
	};
}
