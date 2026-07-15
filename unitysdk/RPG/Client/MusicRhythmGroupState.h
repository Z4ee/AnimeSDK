#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int MusicRhythmGroupState_TypeDefinitionIndex = 59068;

	enum class MusicRhythmGroupState : ::System::Int32
	{
		Started = 0,
		Locked = 1,
		Finish = 2,
	};
}
