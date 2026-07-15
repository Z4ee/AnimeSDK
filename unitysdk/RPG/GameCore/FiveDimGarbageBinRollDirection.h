#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimGarbageBinRollDirection_TypeDefinitionIndex = 16042;

	enum class FiveDimGarbageBinRollDirection : ::System::Int32
	{
		PlayerOpposite = 0,
		LocalLeft = 1,
		LocalRight = 2,
	};
}
