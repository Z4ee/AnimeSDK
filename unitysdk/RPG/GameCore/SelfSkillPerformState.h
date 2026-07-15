#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int SelfSkillPerformState_TypeDefinitionIndex = 55118;

	enum class SelfSkillPerformState : ::System::Int32
	{
		Unknow = 0,
		Ready = 1,
		AbilityWorking = 2,
		SelfPerformFinish = 3,
		WaitForReset = 4,
	};
}
