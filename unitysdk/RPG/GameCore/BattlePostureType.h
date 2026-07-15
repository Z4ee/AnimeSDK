#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattlePostureType_TypeDefinitionIndex = 16901;

	enum class BattlePostureType : ::System::Int32
	{
		Good = 0,
		Bad = 1,
		Excellent = 2,
		Block = 3,
	};
}
