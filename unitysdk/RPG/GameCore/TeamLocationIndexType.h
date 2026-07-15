#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int TeamLocationIndexType_TypeDefinitionIndex = 17562;

	enum class TeamLocationIndexType : ::System::Int32
	{
		Min = 0,
		Medium = 1,
		Pos2 = 2,
		Pos3 = 3,
		Left = 4,
		Right = 5,
		Max = 6,
	};
}
