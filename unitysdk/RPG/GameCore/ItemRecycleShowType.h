#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ItemRecycleShowType_TypeDefinitionIndex = 13362;

	enum class ItemRecycleShowType : ::System::Int32
	{
		Unknown = 0,
		ItemRecycleShow_Time = 1,
		ItemRecycleShow_Version = 2,
		ItemRecycleShow_VersionAndTime = 3,
		ItemRecycleShow_AutoConversion = 4,
	};
}
