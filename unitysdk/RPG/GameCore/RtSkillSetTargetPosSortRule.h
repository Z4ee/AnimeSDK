#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtSkillSetTargetPosSortRule_TypeDefinitionIndex = 23940;

	enum class RtSkillSetTargetPosSortRule : ::System::Int32
	{
		None = 0,
		DistanceToPosTarget = 1,
		Rank = 2,
	};
}
