#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleTargetConfigType_TypeDefinitionIndex = 12363;

	enum class BattleTargetConfigType : ::System::Int32
	{
		Unknown = 0,
		ChallengeTarget = 1,
		PassTarget = 2,
	};
}
