#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int PreloadItemFlag_TypeDefinitionIndex = 57050;

	enum class PreloadItemFlag : ::System::Int32
	{
		None = 0,
		Temp = 2,
		UI = 4,
		Maze = 8,
		Battle = 16,
		BattleNew = 32,
		Common = 64,
		Skill = 128,
		Ultra = 256,
		Passive = 512,
		Insert = 1024,
		Model = 2048,
		NoUse = 4096,
	};
}
