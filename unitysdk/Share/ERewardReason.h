#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int ERewardReason_TypeDefinitionIndex = 17294;

	enum class ERewardReason : ::System::Int16
	{
		AvatarDefaultItem = 2,
		Unknow = 0,
		MainCityQuest = 1,
	};
}
