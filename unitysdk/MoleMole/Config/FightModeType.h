#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int FightModeType_TypeDefinitionIndex = 58289;

	enum class FightModeType : ::System::Int32
	{
		Evade = 0,
		Move = 1,
		Attack = 2,
	};
}
