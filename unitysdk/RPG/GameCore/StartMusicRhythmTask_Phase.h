#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int StartMusicRhythmTask_Phase_TypeDefinitionIndex = 50863;

	enum class StartMusicRhythmTask_Phase : ::System::Int32
	{
		None = 0,
		WaitReadyPage = 1,
		WaitLoading = 2,
		Tutorial = 3,
		Transition = 4,
		Formal = 5,
	};
}
