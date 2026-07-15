#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int MonoDiceCombatExtraGravity_DiceCombatGravitySimulateMode_TypeDefinitionIndex = 60777;

	enum class MonoDiceCombatExtraGravity_DiceCombatGravitySimulateMode : ::System::Int32
	{
		Force = 0,
		Acceleration = 1,
	};
}
