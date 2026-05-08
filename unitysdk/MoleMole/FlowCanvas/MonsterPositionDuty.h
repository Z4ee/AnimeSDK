#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int MonsterPositionDuty_TypeDefinitionIndex = 75402;

	enum class MonsterPositionDuty : ::System::Int32
	{
		Special = 2,
		Range = 1,
		Melee = 0,
	};
}
