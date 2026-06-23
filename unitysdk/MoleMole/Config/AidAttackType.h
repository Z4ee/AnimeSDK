#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int AidAttackType_TypeDefinitionIndex = 65654;

	enum class AidAttackType : ::System::Int32
	{
		EvadeAid = 3,
		AssaultAid = 2,
		BeHitAid = 5,
		NoEnergyPerfectSwitchAid = 4,
		ParryAid = 1,
		CommonAid = 0,
		ChainAid = 6,
	};
}
