#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int MusicVisualizeSourceType_TypeDefinitionIndex = 23751;

	enum class MusicVisualizeSourceType : ::System::Int32
	{
		Target = 0,
		BGM = 1,
		MusicRhythmSong = 2,
	};
}
