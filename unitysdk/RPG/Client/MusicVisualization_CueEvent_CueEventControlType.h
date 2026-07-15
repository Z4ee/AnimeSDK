#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int MusicVisualization_CueEvent_CueEventControlType_TypeDefinitionIndex = 67645;

	enum class MusicVisualization_CueEvent_CueEventControlType : ::System::Int32
	{
		SetAniamtorParam = 0,
		SetMusicState = 1,
	};
}
