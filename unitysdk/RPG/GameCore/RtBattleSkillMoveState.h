#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtBattleSkillMoveState_TypeDefinitionIndex = 54459;

	enum class RtBattleSkillMoveState : ::System::Int32
	{
		None = 0,
		Wait = 1,
		Ready = 2,
		Finish = 3,
	};
}
