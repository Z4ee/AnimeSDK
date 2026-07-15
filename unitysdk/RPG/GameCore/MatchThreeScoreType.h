#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int MatchThreeScoreType_TypeDefinitionIndex = 11496;

	enum class MatchThreeScoreType : ::System::Int32
	{
		Invalid = 0,
		Rank = 1,
		Solo = 2,
		Basic = 3,
		Achievement = 4,
	};
}
