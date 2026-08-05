#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EQuestLifeType_TypeDefinitionIndex = 15906;

	enum class EQuestLifeType : ::System::Int16
	{
		Dungeon = 1,
		World = 0,
	};
}
