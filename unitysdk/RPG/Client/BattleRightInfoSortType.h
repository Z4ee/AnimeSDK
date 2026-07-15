#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int BattleRightInfoSortType_TypeDefinitionIndex = 68951;

	enum class BattleRightInfoSortType : ::System::Int32
	{
		High = 0,
		Default = 1,
		Low = 2,
	};
}
