#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int ENodeVisible_TypeDefinitionIndex = 13261;

	enum class ENodeVisible : ::System::Int16
	{
		All = 0,
		Visible = 1,
		TemporaryVisibleAtAround = 4,
		Blocked = 5,
		VisibleAtGridAround = 2,
		EnumCount = 6,
		VisibleByTriggerEvent = 3,
	};
}
