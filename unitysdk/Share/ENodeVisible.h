#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int ENodeVisible_TypeDefinitionIndex = 16350;

	enum class ENodeVisible : ::System::Int16
	{
		VisibleAtGridAround = 2,
		Visible = 1,
		Blocked = 5,
		TemporaryVisibleAtAround = 4,
		All = 0,
		VisibleByTriggerEvent = 3,
		EnumCount = 6,
	};
}
