#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EHollowSystemType_TypeDefinitionIndex = 17006;

	enum class EHollowSystemType : ::System::Int16
	{
		HollowResultPage = 6,
		Menu = 2,
		HollowItem = 5,
		CurseInfo = 7,
		EnumCount = 8,
		Card = 1,
		Bag = 4,
		Curse = 3,
	};
}
