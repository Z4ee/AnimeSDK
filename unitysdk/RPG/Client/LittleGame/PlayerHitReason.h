#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int PlayerHitReason_TypeDefinitionIndex = 40192;

	enum class PlayerHitReason : ::System::Int32
	{
		Enemy = 0,
		EnemyBothSide = 1,
		Block = 2,
		BlockBothSide = 3,
		Bullet = 4,
	};
}
