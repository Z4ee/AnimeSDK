#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityBenefitV2RoundListViewModel_Round_StateType_TypeDefinitionIndex = 58683;

	enum class ActivityBenefitV2RoundListViewModel_Round_StateType : ::System::Int32
	{
		None = 0,
		Locked = 1,
		CanDraw = 2,
		CanClaim = 3,
		Finished = 4,
	};
}
