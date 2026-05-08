#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int FightModeType_TypeDefinitionIndex = 46687;

	enum class FightModeType : ::System::Int32
	{
		Attack = 2,
		Evade = 0,
		Move = 1,
	};
}
