#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EHollowSystemType_TypeDefinitionIndex = 15888;

	enum class EHollowSystemType : ::System::Int16
	{
		HollowResultPage = 6,
		CurseInfo = 7,
		HollowItem = 5,
		Menu = 2,
		Bag = 4,
		Card = 1,
		Curse = 3,
		EnumCount = 8,
	};
}
