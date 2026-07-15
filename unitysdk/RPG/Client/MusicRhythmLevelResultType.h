#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int MusicRhythmLevelResultType_TypeDefinitionIndex = 59075;

	enum class MusicRhythmLevelResultType : ::System::Int32
	{
		Perfect = 0,
		Normal = 1,
		Miss = 2,
		Combo = 3,
	};
}
