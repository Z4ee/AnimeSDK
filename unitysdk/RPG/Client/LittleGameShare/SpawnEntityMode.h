#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGameShare
{
	inline static constexpr unsigned int SpawnEntityMode_TypeDefinitionIndex = 35365;

	enum class SpawnEntityMode : ::System::Byte
	{
		Unknown = 0x0,
		Interpolated = 0x1,
		Predicted = 0x2,
	};
}
