#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateRinCaseBoardTeamType_TypeDefinitionIndex = 10193;

	enum class FateRinCaseBoardTeamType : ::System::Int32
	{
		None = 0,
		TrailblazerRin = 1,
		ArcherGilgamesh = 2,
		Saber = 3,
		Lancer = 4,
		Rider = 5,
		Caster = 6,
		Assassin = 7,
		Berserker = 8,
		SingleAshveil = 9,
		ArcherIshtar = 10,
	};
}
