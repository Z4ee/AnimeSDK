#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int BattleTargetStatus_TypeDefinitionIndex = 67299;

	enum class BattleTargetStatus : ::System::Int32
	{
		None = 0,
		Progress = 1,
		Succeed = 2,
		Fail = 3,
	};
}
