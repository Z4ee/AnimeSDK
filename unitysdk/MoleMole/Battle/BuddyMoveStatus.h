#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Battle
{
	inline static constexpr unsigned int BuddyMoveStatus_TypeDefinitionIndex = 74896;

	enum class BuddyMoveStatus : ::System::Int32
	{
		OnGround = 1,
		None = 0,
		Floating = 2,
	};
}
