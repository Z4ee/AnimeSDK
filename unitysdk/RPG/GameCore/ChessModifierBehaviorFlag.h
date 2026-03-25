#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChessModifierBehaviorFlag_TypeDefinitionIndex = 16193;

	enum class ChessModifierBehaviorFlag : ::System::Int32
	{
		ForbidMove = 0,
		ForbidSkill = 1,
		Taunt = 2,
	};
}
