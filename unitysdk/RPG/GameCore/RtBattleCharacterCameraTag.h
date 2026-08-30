#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtBattleCharacterCameraTag_TypeDefinitionIndex = 17826;

	enum class RtBattleCharacterCameraTag : ::System::Int32
	{
		Empty = 0,
		Idle = 1,
		Move = 2,
		SkillUse = 3,
		Die = 4,
		_Count = 5,
	};
}
