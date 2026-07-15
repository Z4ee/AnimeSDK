#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int GameRefLevel_TypeDefinitionIndex = 61830;

	enum class GameRefLevel : ::System::Int32
	{
		Advanced = 0,
		Newbie = 1,
		Expert = 2,
		All = 3,
	};
}
