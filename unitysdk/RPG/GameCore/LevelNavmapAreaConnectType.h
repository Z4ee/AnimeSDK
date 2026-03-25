#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelNavmapAreaConnectType_TypeDefinitionIndex = 15817;

	enum class LevelNavmapAreaConnectType : ::System::Int32
	{
		Direct = 0,
		Teleport = 1,
		Airlock = 2,
	};
}
