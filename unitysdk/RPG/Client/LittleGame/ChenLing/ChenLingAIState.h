#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::ChenLing
{
	inline static constexpr unsigned int ChenLingAIState_TypeDefinitionIndex = 41123;

	enum class ChenLingAIState : ::System::Int32
	{
		Invalid = 0,
		AdvanceInFormation = 1,
		ApproachEnemy = 2,
		AttackEnemy = 3,
		MoveIdle = 4,
		SeekEnemy = 5,
	};
}
