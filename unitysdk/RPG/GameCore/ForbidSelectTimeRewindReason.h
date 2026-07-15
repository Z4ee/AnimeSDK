#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ForbidSelectTimeRewindReason_TypeDefinitionIndex = 23663;

	enum class ForbidSelectTimeRewindReason : ::System::Int32
	{
		Task = 0,
		Skill = 1,
		GamePlayBtnCompetition = 2,
	};
}
