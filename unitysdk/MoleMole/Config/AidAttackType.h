#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int AidAttackType_TypeDefinitionIndex = 56075;

	enum class AidAttackType : ::System::Int32
	{
		AssaultAid = 2,
		ParryAid = 1,
		NoEnergyPerfectSwitchAid = 4,
		CommonAid = 0,
		BeHitAid = 5,
		ChainAid = 6,
		EvadeAid = 3,
	};
}
