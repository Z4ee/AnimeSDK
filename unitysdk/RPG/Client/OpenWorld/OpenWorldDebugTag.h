#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::OpenWorld
{
	inline static constexpr unsigned int OpenWorldDebugTag_TypeDefinitionIndex = 67910;

	enum class OpenWorldDebugTag : ::System::Int32
	{
		Default = 0,
		Block = 1,
		Stage = 2,
		Region = 4,
		StreamingItem = 8,
		Layer = 16,
		Tick = 32,
		TAMonoTick = 64,
	};
}
