#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelRegionConnectivityType_TypeDefinitionIndex = 16680;

	enum class LevelRegionConnectivityType : ::System::Int32
	{
		Default = 0,
		Teleport = 1,
	};
}
