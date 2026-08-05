#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int ERewardReason_TypeDefinitionIndex = 18412;

	enum class ERewardReason : ::System::Int16
	{
		AvatarDefaultItem = 2,
		MainCityQuest = 1,
		Unknow = 0,
	};
}
