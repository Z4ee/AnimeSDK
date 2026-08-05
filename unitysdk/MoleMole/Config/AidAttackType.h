#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int AidAttackType_TypeDefinitionIndex = 74358;

	enum class AidAttackType : ::System::Int32
	{
		BeHitAid = 5,
		ParryAid = 1,
		EvadeAid = 3,
		ChainAid = 6,
		AssaultAid = 2,
		ZenkovPyroisBlinkAid = 7,
		CommonAid = 0,
		NoEnergyPerfectSwitchAid = 4,
	};
}
