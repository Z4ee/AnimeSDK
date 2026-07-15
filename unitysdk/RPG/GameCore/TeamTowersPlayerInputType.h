#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int TeamTowersPlayerInputType_TypeDefinitionIndex = 23707;

	enum class TeamTowersPlayerInputType : ::System::Int32
	{
		Invalid = 0,
		Move = 1,
		Rotate = 2,
		Down = 3,
	};
}
