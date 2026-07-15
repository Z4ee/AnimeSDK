#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK::SdkReport
{
	inline static constexpr unsigned int EventType_TypeDefinitionIndex = 44856;

	enum class EventType : ::System::Int32
	{
		Unknown = 0,
		LButton = 1,
		MButton = 2,
		RButton = 3,
		Key = 4,
		BrowserTime = 5,
		UnityFrame = 6,
	};
}
