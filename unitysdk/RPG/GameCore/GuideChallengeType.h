#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int GuideChallengeType_TypeDefinitionIndex = 12885;

	enum class GuideChallengeType : ::System::Int32
	{
		Unknown = 0,
		Challenge = 1,
		ChallengeStory = 2,
		ChallengeStatistic = 3,
		ChallengeBoss = 4,
		ChallengePeak = 5,
	};
}
