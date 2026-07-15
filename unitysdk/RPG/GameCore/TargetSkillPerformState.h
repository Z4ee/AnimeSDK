#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetSkillPerformState_TypeDefinitionIndex = 55119;

	enum class TargetSkillPerformState : ::System::Int32
	{
		Unknow = 0,
		Ready = 1,
		TargetPerformBegin = 2,
		TargetPerformFinish = 3,
	};
}
