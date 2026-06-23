#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ActionType_TypeDefinitionIndex = 36748;

	enum class ActionType : ::System::Int32
	{
		Click = 0,
		Impression = 1,
		Pageview = 2,
		Pagehide = 3,
		Refresh = 4,
		Loadmore = 5,
	};
}
