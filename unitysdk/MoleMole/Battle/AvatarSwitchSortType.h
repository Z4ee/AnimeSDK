#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Battle
{
	inline static constexpr unsigned int AvatarSwitchSortType_TypeDefinitionIndex = 60768;

	enum class AvatarSwitchSortType : ::System::Int32
	{
		PositionOrder = 1,
		None = 0,
		Fixed = 2,
	};
}
