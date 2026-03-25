#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::OpenWorld
{
	inline static constexpr unsigned int StreamingBlockType_TypeDefinitionIndex = 60601;

	enum class StreamingBlockType : ::System::Int32
	{
		Static = 0,
		Dynamic = 1,
	};
}
