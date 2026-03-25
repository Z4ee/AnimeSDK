#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChessAbilityProperty_TypeDefinitionIndex = 16185;

	enum class ChessAbilityProperty : ::System::Int32
	{
		Unknow = 0,
		CurrentHP = 1,
		MaxHP = 2,
		HitBoxRadius = 3,
		AttackPoint = 4,
		AttackSpeed = 5,
		AttackRange = 6,
		AlertRange = 7,
		MoveSpeed = 8,
		RotSpeed = 9,
		Count = 10,
	};
}
