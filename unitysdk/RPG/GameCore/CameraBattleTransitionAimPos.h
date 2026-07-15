#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int CameraBattleTransitionAimPos_TypeDefinitionIndex = 23640;

	enum class CameraBattleTransitionAimPos : ::System::Int32
	{
		Default = 0,
		Attacker = 1,
		Defender = 2,
		AttackerDefenderCenter = 3,
	};
}
