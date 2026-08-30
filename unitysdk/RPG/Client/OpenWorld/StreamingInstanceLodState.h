#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::OpenWorld
{
	inline static constexpr unsigned int StreamingInstanceLodState_TypeDefinitionIndex = 73827;

	enum class StreamingInstanceLodState : ::System::Int16
	{
		Empty = 0,
		Loaded = 1,
		Fading = 2,
		Show = 3,
	};
}
