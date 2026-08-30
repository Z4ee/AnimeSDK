#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int CameraBattleTransitionAimDirection_TypeDefinitionIndex = 24226;

	enum class CameraBattleTransitionAimDirection : ::System::Int32
	{
		Default = 0,
		AttackerToDefender = 1,
		AttackerLookAt = 2,
		DefenderLookAt = 3,
	};
}
