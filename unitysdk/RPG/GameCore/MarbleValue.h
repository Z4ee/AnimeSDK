#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleValue_TypeDefinitionIndex = 16163;

	enum class MarbleValue : ::System::Int32
	{
		None = 0,
		Hp = 1,
		MaxHp = 2,
		Attack = 3,
		RealAttack = 4,
		CriticalRate = 5,
		CriticalFactor = 6,
		DamageFactor = 7,
		SpineFactor = 8,
		ActionAttackFactor = 9,
		Speed = 10,
		MaxSpeed = 11,
		Radius = 12,
		InitMaxSpeed = 13,
		AttackAllyTimes = 14,
		AttackEnemyTimes = 15,
		AttackTimes = 16,
		GlobalAttackEnemyTimes = 17,
		LastMakeDamage = 18,
		AttackFactor = 19,
	};
}
