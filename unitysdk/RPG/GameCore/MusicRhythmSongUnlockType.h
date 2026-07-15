#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int MusicRhythmSongUnlockType_TypeDefinitionIndex = 13736;

	enum class MusicRhythmSongUnlockType : ::System::Int32
	{
		NONE = 0,
		FINISH_MAIN_MISSION = 1,
		ALL_LEVEL_STAR = 2,
		FINISH_SUB_MISSION = 3,
	};
}
