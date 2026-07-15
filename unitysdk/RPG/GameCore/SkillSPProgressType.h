#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int SkillSPProgressType_TypeDefinitionIndex = 17444;

	enum class SkillSPProgressType : ::System::Int32
	{
		Normal = 0,
		Dot = 1,
		ExtraProgress = 2,
		WithInnerPie = 3,
		Discrete = 4,
		Acheron = 5,
		FireFly = 6,
		Feixiao = 7,
		Castorice = 8,
		Saber = 9,
		Phainon = 10,
		SilverWolf999 = 11,
		Cyrene = 12,
		HimekoNova = 13,
		AsatPramadBomb = 14,
	};
}
