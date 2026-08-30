#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattlePostureType_TypeDefinitionIndex = 17403;

	enum class BattlePostureType : ::System::Int32
	{
		Good = 0,
		Bad = 1,
		Excellent = 2,
		Block = 3,
	};
}
