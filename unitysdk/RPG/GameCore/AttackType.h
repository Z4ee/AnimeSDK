#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int AttackType_TypeDefinitionIndex = 10060;

	enum class AttackType : ::System::Int32
	{
		Unknown = 0,
		Normal = 1,
		BPSkill = 2,
		Ultra = 3,
		QTE = 4,
		DOT = 5,
		Pursued = 6,
		Maze = 7,
		MazeNormal = 8,
		Insert = 9,
		ElementDamage = 10,
		Level = 11,
		Servant = 12,
		TrueDamage = 13,
		ElationDamage = 14,
		Assist = 15,
	};
}
