#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelGroupMissionPhase_TypeDefinitionIndex = 16491;

	enum class LevelGroupMissionPhase : ::System::Int32
	{
		Accept = 0,
		Finish = 1,
		Cancel = 2,
	};
}
