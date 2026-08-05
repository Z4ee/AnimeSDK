#pragma once
#include "unitysdk/unitysdk.h"

namespace BNative
{
	inline static constexpr unsigned int BNativeDebug_LogLevel_TypeDefinitionIndex = 42033;

	enum class BNativeDebug_LogLevel : ::System::Int32
	{
		Error = 2,
		None = 4,
		Log = 0,
		Exception = 3,
		Warning = 1,
	};
}
