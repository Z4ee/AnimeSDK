#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::ChenLingGameBoy
{
	inline static constexpr unsigned int ChenLingGameBoyChallengeState_TypeDefinitionIndex = 69014;

	enum class ChenLingGameBoyChallengeState : ::System::Int32
	{
		Unknown = 0,
		Complete = 1,
		Positive = 2,
		Negative = 3,
	};
}
