#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::OpenWorld
{
	inline static constexpr unsigned int StreamingPauseReason_TypeDefinitionIndex = 68950;

	enum class StreamingPauseReason : ::System::Int32
	{
		Common = 0,
		TimeScale = 1,
	};
}
