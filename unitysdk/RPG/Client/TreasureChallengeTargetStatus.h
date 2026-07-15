#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int TreasureChallengeTargetStatus_TypeDefinitionIndex = 63800;

	enum class TreasureChallengeTargetStatus : ::System::Int32
	{
		None = 0,
		Finished = 1,
		Doing = 2,
		Fail = 3,
	};
}
