#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int MonsterPositionDuty_TypeDefinitionIndex = 82056;

	enum class MonsterPositionDuty : ::System::Int32
	{
		Melee = 0,
		Range = 1,
		Special = 2,
	};
}
