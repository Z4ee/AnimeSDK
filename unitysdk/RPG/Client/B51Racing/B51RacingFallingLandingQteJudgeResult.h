#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingFallingLandingQteJudgeResult_TypeDefinitionIndex = 80549;

	enum class B51RacingFallingLandingQteJudgeResult : ::System::Int32
	{
		None = 0,
		Success = 1,
		Fail = 2,
	};
}
