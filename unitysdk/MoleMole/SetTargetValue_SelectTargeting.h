#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int SetTargetValue_SelectTargeting_TypeDefinitionIndex = 76464;

	enum class SetTargetValue_SelectTargeting : ::System::Int32
	{
		SelectTarget = 3,
		AllNeutral = 2,
		AllEnemy = 0,
		AllAllied = 1,
		LocalAvatar = 4,
	};
}
