#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int HoYoChannelSDK_LogLevel_TypeDefinitionIndex = 44800;

	enum class HoYoChannelSDK_LogLevel : ::System::Int32
	{
		Trace = 0,
		Debug = 1,
		Info = 2,
		Warning = 3,
		Error = 4,
	};
}
