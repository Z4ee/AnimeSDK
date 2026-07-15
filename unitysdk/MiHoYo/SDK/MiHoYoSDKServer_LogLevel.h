#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKServer_LogLevel_TypeDefinitionIndex = 44587;

	enum class MiHoYoSDKServer_LogLevel : ::System::Int32
	{
		Debug = 0,
		Info = 1,
		Warning = 2,
		Error = 3,
	};
}
