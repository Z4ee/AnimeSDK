#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int EAdvCharacterBreakRecoverStandByType_TypeDefinitionIndex = 10160;

	enum class EAdvCharacterBreakRecoverStandByType : ::System::Int32
	{
		Default = 0,
		StandBy = 1,
		DetectStandBy = 2,
	};
}
