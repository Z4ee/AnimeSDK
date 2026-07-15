#pragma once
#include "unitysdk/unitysdk.h"

namespace Epic::OnlineServices::UI
{
	inline static constexpr unsigned int NotificationLocation_TypeDefinitionIndex = 42802;

	enum class NotificationLocation : ::System::Int32
	{
		TopLeft = 0,
		TopRight = 1,
		BottomLeft = 2,
		BottomRight = 3,
	};
}
