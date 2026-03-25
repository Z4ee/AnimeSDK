#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int AdventureBlockShowAreaNameType_TypeDefinitionIndex = 50352;

	enum class AdventureBlockShowAreaNameType : ::System::Int32
	{
		TriggerStory = 0,
		TriggerBattle = 1,
		MultiLoadMap = 2,
	};
}
