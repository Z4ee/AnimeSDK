#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int FormationPriorityType_TypeDefinitionIndex = 16446;

	enum class FormationPriorityType : ::System::Int32
	{
		Default = 0,
		CurrentActionEntity = 1,
		SomatoLarger = 2,
		SomatoSmaller = 3,
		StanceBreakList = 4,
		AbilityTargetEntity = 5,
		AbilityTargetLeft = 6,
		AbilityTargetRight = 7,
	};
}
