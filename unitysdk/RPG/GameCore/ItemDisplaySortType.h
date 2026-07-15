#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ItemDisplaySortType_TypeDefinitionIndex = 13389;

	enum class ItemDisplaySortType : ::System::Int32
	{
		Unknown = 0,
		ItemID = 1,
		Rank = 2,
		ItemSubType = 3,
		PurposeType = 4,
	};
}
