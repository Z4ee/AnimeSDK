#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EHollowSystemType_TypeDefinitionIndex = 16720;

	enum class EHollowSystemType : ::System::Int16
	{
		EnumCount = 8,
		Curse = 3,
		Bag = 4,
		Menu = 2,
		HollowItem = 5,
		CurseInfo = 7,
		Card = 1,
		HollowResultPage = 6,
	};
}
