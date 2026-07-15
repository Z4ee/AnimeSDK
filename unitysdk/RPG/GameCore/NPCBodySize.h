#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int NPCBodySize_TypeDefinitionIndex = 10097;

	enum class NPCBodySize : ::System::Int32
	{
		Male = 0,
		Lady = 1,
		Old = 2,
		Child = 3,
		MuscleMan = 4,
		None = 99,
	};
}
