#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Battle
{
	inline static constexpr unsigned int BuddyMoveStatus_TypeDefinitionIndex = 50108;

	enum class BuddyMoveStatus : ::System::Int32
	{
		OnGround = 1,
		Floating = 2,
		None = 0,
	};
}
