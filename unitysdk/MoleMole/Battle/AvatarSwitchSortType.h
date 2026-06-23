#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Battle
{
	inline static constexpr unsigned int AvatarSwitchSortType_TypeDefinitionIndex = 64371;

	enum class AvatarSwitchSortType : ::System::Int32
	{
		Fixed = 2,
		PositionOrder = 1,
		None = 0,
	};
}
