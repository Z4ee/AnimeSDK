#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleModelResultType_TypeDefinitionIndex = 51240;

	enum class BattleModelResultType : ::System::Int32
	{
		Win = 0,
		Lose = 1,
		Draw = 2,
		Unknown = 3,
	};
}
