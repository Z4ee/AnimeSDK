#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EConditionOfGenerateHollowEvent_TypeDefinitionIndex = 11270;

	enum class EConditionOfGenerateHollowEvent : ::System::Int16
	{
		GenreCard = 4,
		ItemID = 3,
		FinishedEventType = 1,
		FinishedEventID = 2,
		AvatarID = 5,
	};
}
