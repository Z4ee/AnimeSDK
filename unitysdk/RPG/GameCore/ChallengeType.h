#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChallengeType_TypeDefinitionIndex = 12467;

	enum class ChallengeType : ::System::Int32
	{
		None = 0,
		ROUNDS = 1,
		DEAD_AVATAR = 2,
		KILL_MONSTER = 3,
		AVATAR_BASE_TYPE_MORE = 4,
		AVATAR_BASE_TYPE_LESS = 5,
		ROUNDS_LEFT = 6,
		TOTAL_SCORE = 7,
	};
}
