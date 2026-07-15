#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int SkillEffect_TypeDefinitionIndex = 10061;

	enum class SkillEffect : ::System::Int32
	{
		Unknown = 0,
		SingleAttack = 1,
		AoEAttack = 2,
		ShieldBreak = 3,
		Bounce = 4,
		Blast = 5,
		Support = 6,
		Weaken = 7,
		Impair = 8,
		Restore = 9,
		Taunt = 10,
		Defence = 11,
		Damage = 12,
		Enhance = 13,
		Transform = 14,
		Passive = 15,
		MazeAttack = 16,
		Summon = 17,
		BattleCry = 18,
		DeathRattle = 19,
	};
}
