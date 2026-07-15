#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::OpenWorld
{
	inline static constexpr unsigned int StreamingInstanceLoadingState_TypeDefinitionIndex = 70527;

	enum class StreamingInstanceLoadingState : ::System::Int16
	{
		Empty = 0,
		Pending = 1,
		Loading = 2,
	};
}
