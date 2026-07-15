#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureAnimStateType_TypeDefinitionIndex = 23617;

	enum class AdventureAnimStateType : ::System::Int32
	{
		Empty = 0,
		Idle = 1,
		Move = 2,
		NormalAtk = 3,
		MazeSkill = 4,
		Floating = 5,
		FreeStyle = 6,
		OnHit = 7,
		OnDie = 8,
		CustomSkill = 9,
		Stun = 10,
		Spawn = 11,
		Confine = 12,
	};
}
