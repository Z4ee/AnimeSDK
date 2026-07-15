#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int TreasureChallengeStatus_TypeDefinitionIndex = 65168;

	enum class TreasureChallengeStatus : ::System::Int32
	{
		Default = 0,
		Success = 1,
		Finish = 2,
		ReEnter = 3,
	};
}
