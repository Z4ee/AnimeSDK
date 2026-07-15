#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimGarbageBinOnRollToAnother_TypeDefinitionIndex = 16043;

	enum class FiveDimGarbageBinOnRollToAnother : ::System::Int32
	{
		KillAnother = 0,
		RollAnotherAndKillSelf = 1,
	};
}
