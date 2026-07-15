#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int QuestType_TypeDefinitionIndex = 10074;

	enum class QuestType : ::System::Int32
	{
		Unknown = 0,
		Linear = 1,
		Timed = 2,
		Cycle = 3,
		Achievement = 4,
		Daily = 5,
	};
}
