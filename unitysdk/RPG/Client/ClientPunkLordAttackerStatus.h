#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int ClientPunkLordAttackerStatus_TypeDefinitionIndex = 63772;

	enum class ClientPunkLordAttackerStatus : ::System::Int32
	{
		None = 0,
		Attacked = 1,
		Attacking = 2,
		AttackedAndAttacking = 3,
	};
}
