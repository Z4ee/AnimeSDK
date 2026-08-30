#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int MissingVideoProcessType_TypeDefinitionIndex = 73113;

	enum class MissingVideoProcessType : ::System::Int32
	{
		MarkOnly = 0,
		RestartGame = 1,
	};
}
