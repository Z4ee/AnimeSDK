#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int SetTargetValue_SelectTargeting_TypeDefinitionIndex = 51286;

	enum class SetTargetValue_SelectTargeting : ::System::Int32
	{
		AllEnemy = 0,
		AllNeutral = 2,
		SelectTarget = 3,
		AllAllied = 1,
		LocalAvatar = 4,
	};
}
