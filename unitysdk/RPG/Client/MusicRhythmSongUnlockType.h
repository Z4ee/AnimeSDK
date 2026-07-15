#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int MusicRhythmSongUnlockType_TypeDefinitionIndex = 59081;

	enum class MusicRhythmSongUnlockType : ::System::Int32
	{
		None = 0,
		FinishMainMission = 1,
		StarNum = 2,
		FinishSubMission = 3,
	};
}
