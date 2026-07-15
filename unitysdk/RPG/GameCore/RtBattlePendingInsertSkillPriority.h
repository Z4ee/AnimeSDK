#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtBattlePendingInsertSkillPriority_TypeDefinitionIndex = 51767;

	enum class RtBattlePendingInsertSkillPriority : ::System::Int32
	{
		Default = 0,
		Task = 1,
		ExclusivePerform = 2,
		ManualCast = 3,
	};
}
