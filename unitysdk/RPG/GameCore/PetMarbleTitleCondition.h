#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int PetMarbleTitleCondition_TypeDefinitionIndex = 14450;

	enum class PetMarbleTitleCondition : ::System::Int32
	{
		None = 0,
		Max = 1,
		Min = 2,
		Equal = 3,
		EqualOrGreater = 4,
		First = 5,
	};
}
