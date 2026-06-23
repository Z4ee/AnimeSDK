#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int ENodeVisible_TypeDefinitionIndex = 9260;

	enum class ENodeVisible : ::System::Int16
	{
		Visible = 1,
		All = 0,
		EnumCount = 6,
		VisibleAtGridAround = 2,
		TemporaryVisibleAtAround = 4,
		VisibleByTriggerEvent = 3,
		Blocked = 5,
	};
}
