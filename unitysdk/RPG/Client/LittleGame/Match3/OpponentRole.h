#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::Match3
{
	inline static constexpr unsigned int OpponentRole_TypeDefinitionIndex = 40455;

	enum class OpponentRole : ::System::Int32
	{
		Self = 0,
		Enemy = 1,
	};
}
