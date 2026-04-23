#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::ChimeraDuel
{
	inline static constexpr unsigned int ChimeraDuelAccelerateMode_TypeDefinitionIndex = 70993;

	enum class ChimeraDuelAccelerateMode : ::System::Byte
	{
		Normal = 0x0,
		Accelerate = 0x1,
		SuperAccelerate = 0x2,
	};
}
