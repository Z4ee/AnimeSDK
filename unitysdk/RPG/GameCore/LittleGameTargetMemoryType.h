#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameTargetMemoryType_TypeDefinitionIndex = 23698;

	enum class LittleGameTargetMemoryType : ::System::Int32
	{
		None = 0,
		LastAttacker = 1,
		MissleTarget = 2,
		LaserTarget = 3,
	};
}
