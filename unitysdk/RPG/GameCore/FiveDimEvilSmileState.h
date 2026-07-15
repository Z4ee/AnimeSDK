#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimEvilSmileState_TypeDefinitionIndex = 16046;

	enum class FiveDimEvilSmileState : ::System::Int32
	{
		None = 0,
		Idle = 1,
		Appear = 2,
		Move = 3,
		ReadyAttack = 4,
		Attack = 5,
		Disappear = 6,
		CrazyAppear = 7,
		CrazyMove = 8,
		CrazyAttack = 9,
		Die = 10,
	};
}
