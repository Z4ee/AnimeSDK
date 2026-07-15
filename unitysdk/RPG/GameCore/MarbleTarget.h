#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleTarget_TypeDefinitionIndex = 16161;

	enum class MarbleTarget : ::System::Int32
	{
		None = 0,
		Caster = 1,
		Attacker = 2,
		Defender = 3,
		LeastHp = 4,
		MaxHp = 5,
		Team = 6,
		Random = 7,
		ChooseTarget = 8,
		Teammates = 9,
		Guest = 10,
		Killer = 11,
		EnemyTeam = 12,
		PaoPao = 13,
	};
}
