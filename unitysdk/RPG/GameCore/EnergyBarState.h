#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int EnergyBarState_TypeDefinitionIndex = 23784;

	enum class EnergyBarState : ::System::Int32
	{
		Keep = 0,
		Normal = 1,
		CoolDown = 2,
		Active = 3,
		Disable = 4,
		Custom1 = 5,
	};
}
