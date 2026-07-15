#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int BPQuestType_TypeDefinitionIndex = 60114;

	enum class BPQuestType : ::System::Int32
	{
		None = 0,
		Daily = 1,
		Weekly = 2,
		Activity = 3,
	};
}
