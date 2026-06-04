#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int ClientPunkLordAttackerStatus_TypeDefinitionIndex = 62406;

	enum class ClientPunkLordAttackerStatus : ::System::Int32
	{
		None = 0,
		Attacked = 1,
		Attacking = 2,
		AttackedAndAttacking = 3,
	};
}
