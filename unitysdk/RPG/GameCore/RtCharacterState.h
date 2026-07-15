#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtCharacterState_TypeDefinitionIndex = 16938;

	enum class RtCharacterState : ::System::Int32
	{
		Empty = 0,
		Idle = 1,
		Move = 2,
		SkillUse = 3,
		Limbo = 4,
		Die = 5,
		OnHit = 6,
		Spawn = 7,
		Stun = 8,
		Confine = 9,
		_Count = 10,
	};
}
