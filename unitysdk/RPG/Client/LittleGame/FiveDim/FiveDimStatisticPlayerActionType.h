#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int FiveDimStatisticPlayerActionType_TypeDefinitionIndex = 40961;

	enum class FiveDimStatisticPlayerActionType : ::System::Int32
	{
		SingleJump = 0,
		DoubleJump = 1,
		TripleJump = 2,
		SpecialJump = 3,
		Shot = 4,
		SpecialShot = 5,
		JumpReset = 6,
	};
}
