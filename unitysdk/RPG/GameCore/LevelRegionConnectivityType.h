#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelRegionConnectivityType_TypeDefinitionIndex = 17182;

	enum class LevelRegionConnectivityType : ::System::Int32
	{
		Default = 0,
		Teleport = 1,
	};
}
