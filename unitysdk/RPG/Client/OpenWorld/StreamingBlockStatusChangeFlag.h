#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::OpenWorld
{
	inline static constexpr unsigned int StreamingBlockStatusChangeFlag_TypeDefinitionIndex = 68993;

	enum class StreamingBlockStatusChangeFlag : ::System::Int32
	{
		RootEnable = 0,
		Transform = 1,
	};
}
