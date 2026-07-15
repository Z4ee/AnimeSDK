#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ForceTickLodLowestReason_TypeDefinitionIndex = 55215;

	enum class ForceTickLodLowestReason : ::System::Int32
	{
		Default = 0,
		Performance = 1,
		EraFlip = 2,
		SwitchMascot = 3,
		FiveDim = 4,
	};
}
