#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int MissionActivePlaneType_TypeDefinitionIndex = 18239;

	enum class MissionActivePlaneType : ::System::Int32
	{
		Default = 0,
		AllFloor = 1,
		SpecifiedPlaneType = 2,
	};
}
