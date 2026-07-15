#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyConditionType_TypeDefinitionIndex = 14837;

	enum class TrainPartyConditionType : ::System::Int32
	{
		None = 0,
		TrainPartyConditionLeader = 1,
		TrainPartyConditionProgressID = 2,
		TrainPartyConditionSkillHasDestroyed = 3,
		TrainPartyConditionPassenger = 4,
		TrainPartyConditionEventID = 5,
	};
}
