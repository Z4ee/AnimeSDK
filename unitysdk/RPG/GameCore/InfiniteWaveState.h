#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int InfiniteWaveState_TypeDefinitionIndex = 55020;

	enum class InfiniteWaveState : ::System::Int32
	{
		Ready = 0,
		Used = 1,
		Using = 2,
	};
}
