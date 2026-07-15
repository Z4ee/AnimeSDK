#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int PunkLordScoreFinishType_TypeDefinitionIndex = 11816;

	enum class PunkLordScoreFinishType : ::System::Int32
	{
		None = 0,
		DAMAGE = 1,
		FINAL_HIT = 2,
		ASSIST = 3,
		PARTICIPATE_KILL = 4,
		EVERY_TEN_PERCENT = 5,
		SELF_MONSTER = 6,
	};
}
