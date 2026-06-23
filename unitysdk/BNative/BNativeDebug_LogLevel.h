#pragma once
#include "unitysdk/unitysdk.h"

namespace BNative
{
	inline static constexpr unsigned int BNativeDebug_LogLevel_TypeDefinitionIndex = 75275;

	enum class BNativeDebug_LogLevel : ::System::Int32
	{
		Warning = 1,
		Log = 0,
		Exception = 3,
		None = 4,
		Error = 2,
	};
}
