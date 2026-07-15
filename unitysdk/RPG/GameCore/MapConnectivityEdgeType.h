#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int MapConnectivityEdgeType_TypeDefinitionIndex = 16682;

	enum class MapConnectivityEdgeType : ::System::Int32
	{
		Default = 0,
		Teleport = 1,
		FiveDimEntrance = 2,
		FiveDimTeleport = 3,
	};
}
