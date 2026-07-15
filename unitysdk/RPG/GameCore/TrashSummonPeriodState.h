#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrashSummonPeriodState_TypeDefinitionIndex = 23848;

	enum class TrashSummonPeriodState : ::System::Int32
	{
		Keep = 0,
		Iron = 1,
		Brown = 2,
		Gold = 3,
	};
}
