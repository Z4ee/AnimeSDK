#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChessAnimStateType_TypeDefinitionIndex = 16184;

	enum class ChessAnimStateType : ::System::Int32
	{
		Empty = 0,
		Idle = 1,
		Move = 2,
		SkillUse = 3,
		Die = 4,
		Spawn = 5,
		Stun = 6,
		Confine = 7,
		_Count = 8,
	};
}
