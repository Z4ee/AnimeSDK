#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Battle
{
	inline static constexpr unsigned int AvatarSwitchSortType_TypeDefinitionIndex = 67398;

	enum class AvatarSwitchSortType : ::System::Int32
	{
		None = 0,
		PositionOrder = 1,
		Fixed = 2,
	};
}
