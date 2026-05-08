#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Level
{
	inline static constexpr unsigned int BangbooAbilityType_TypeDefinitionIndex = 50648;

	enum class BangbooAbilityType : ::System::Int32
	{
		Attack = 3,
		Search = 2,
		Dive = 1,
		Jump = 0,
	};
}
