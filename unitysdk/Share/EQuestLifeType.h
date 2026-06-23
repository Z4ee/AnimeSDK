#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EQuestLifeType_TypeDefinitionIndex = 9206;

	enum class EQuestLifeType : ::System::Int16
	{
		World = 0,
		Dungeon = 1,
	};
}
