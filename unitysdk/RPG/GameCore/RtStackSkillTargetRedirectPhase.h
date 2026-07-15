#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtStackSkillTargetRedirectPhase_TypeDefinitionIndex = 23941;

	enum class RtStackSkillTargetRedirectPhase : ::System::Int32
	{
		Decision = 1,
		BeforeUse = 2,
		All = 3,
	};
}
