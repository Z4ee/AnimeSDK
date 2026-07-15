#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int CmdLineGraphicsQuality_TypeDefinitionIndex = 33777;

	enum class CmdLineGraphicsQuality : ::System::Int32
	{
		None = 0,
		VeryLow = 1,
		Low = 2,
		Medium = 3,
		High = 4,
		VeryHigh = 5,
	};
}
