#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int EntranceShowType_TypeDefinitionIndex = 12807;

	enum class EntranceShowType : ::System::Int32
	{
		None = 0,
		InBPSchedule = 1,
		HasActivity = 2,
	};
}
