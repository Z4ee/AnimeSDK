#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int PreloadItemFlag_TypeDefinitionIndex = 48332;

	enum class PreloadItemFlag : ::System::Int32
	{
		None = 0,
		Temp = 2,
		UI = 4,
		Maze = 8,
		Battle = 16,
		Common = 32,
		Skill = 64,
		Ultra = 128,
		Passive = 256,
		Model = 512,
		NoUse = 1024,
	};
}
