#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelDataComponent_PerMonster_State_TypeDefinitionIndex = 55027;

	enum class LevelDataComponent_PerMonster_State : ::System::Byte
	{
		Ready = 0x0,
		Summoned = 0x1,
		Dead = 0x2,
		Passed = 0x2,
	};
}
