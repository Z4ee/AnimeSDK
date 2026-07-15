#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ArmorTypeEnum_TypeDefinitionIndex = 15850;

	enum class ArmorTypeEnum : ::System::Int32
	{
		Default = 0,
		TitanDependents = 1,
		BlackTideCreations = 2,
		CrepuscularBeast = 3,
	};
}
