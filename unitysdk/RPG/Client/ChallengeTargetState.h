#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengeTargetState_TypeDefinitionIndex = 60324;

	enum class ChallengeTargetState : ::System::Int32
	{
		None = 0,
		Pending = 1,
		Success = 2,
		Fail = 3,
	};
}
