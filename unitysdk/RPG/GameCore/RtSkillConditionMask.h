#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtSkillConditionMask_TypeDefinitionIndex = 16954;

	enum class RtSkillConditionMask : ::System::UInt32
	{
		None = 0x0,
		All = 0x3,
		SkillReady = 0x1,
		TargetValid = 0x2,
		TargetInRange = 0x4,
	};
}
