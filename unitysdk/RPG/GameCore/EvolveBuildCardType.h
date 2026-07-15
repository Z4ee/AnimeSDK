#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int EvolveBuildCardType_TypeDefinitionIndex = 11039;

	enum class EvolveBuildCardType : ::System::Int32
	{
		Survival = 0,
		Growth = 1,
		Power = 2,
		DemonKing = 3,
	};
}
