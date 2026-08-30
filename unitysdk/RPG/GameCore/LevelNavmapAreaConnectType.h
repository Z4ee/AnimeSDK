#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelNavmapAreaConnectType_TypeDefinitionIndex = 17029;

	enum class LevelNavmapAreaConnectType : ::System::Int32
	{
		Direct = 0,
		Teleport = 1,
		Airlock = 2,
	};
}
