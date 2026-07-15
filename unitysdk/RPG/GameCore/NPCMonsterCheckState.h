#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int NPCMonsterCheckState_TypeDefinitionIndex = 23709;

	enum class NPCMonsterCheckState : ::System::Int32
	{
		Unknow = 0,
		Alive = 1,
		Dead = 2,
		Escape = 3,
	};
}
