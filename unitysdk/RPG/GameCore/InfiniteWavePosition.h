#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int InfiniteWavePosition_TypeDefinitionIndex = 22225;

	enum class InfiniteWavePosition : ::System::Int32
	{
		NextSummon = 0,
		EndOfOneThird = 1,
		EndOfTwoThirds = 2,
		End = 3,
	};
}
