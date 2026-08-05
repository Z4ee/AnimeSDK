#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Battle
{
	inline static constexpr unsigned int BuddyMoveStatus_TypeDefinitionIndex = 66705;

	enum class BuddyMoveStatus : ::System::Int32
	{
		Floating = 2,
		OnGround = 1,
		None = 0,
	};
}
