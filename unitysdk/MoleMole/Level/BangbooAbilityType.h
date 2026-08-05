#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Level
{
	inline static constexpr unsigned int BangbooAbilityType_TypeDefinitionIndex = 78252;

	enum class BangbooAbilityType : ::System::Int32
	{
		Attack = 3,
		Search = 2,
		Jump = 0,
		Dive = 1,
	};
}
