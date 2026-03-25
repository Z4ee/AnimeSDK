#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGameShare
{
	inline static constexpr unsigned int LittleGameNetMode_TypeDefinitionIndex = 28639;

	enum class LittleGameNetMode : ::System::Byte
	{
		DedicatedServer = 0x0,
		Standalone = 0x1,
	};
}
