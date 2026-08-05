#pragma once
#include "unitysdk/unitysdk.h"

namespace ProtoScript
{
	inline static constexpr unsigned int HollowSystemType_TypeDefinitionIndex = 25355;

	enum class HollowSystemType : ::System::Int32
	{
		HOLLOW_SYSTEM_TYPE_BAG = 4,
		HOLLOW_SYSTEM_TYPE_NONE = 0,
		HOLLOW_SYSTEM_TYPE_MEMU = 2,
		HOLLOW_SYSTEM_TYPE_CURSE = 3,
		HOLLOW_SYSTEM_TYPE_HOLLOW_BOTTOM = 8,
		HOLLOW_SYSTEM_TYPE_CARD = 1,
		HOLLOW_SYSTEM_TYPE_HOLLOW_ITEM = 5,
		HOLLOW_SYSTEM_TYPE_CURSE_INFO = 7,
		HOLLOW_SYSTEM_TYPE_HOLLOW_RESULT_PAGE = 6,
	};
}
