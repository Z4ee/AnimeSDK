#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateClazzType_TypeDefinitionIndex = 11075;

	enum class FateClazzType : ::System::Int32
	{
		None = 0,
		Saber = 1,
		Archer = 2,
		Lancer = 3,
		Rider = 4,
		Caster = 5,
		Assassin = 6,
		Berserker = 7,
		Player = 8,
	};
}
