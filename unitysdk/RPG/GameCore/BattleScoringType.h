#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleScoringType_TypeDefinitionIndex = 13893;

	enum class BattleScoringType : ::System::Int32
	{
		Quest = 0,
		Scoring = 1,
	};
}
