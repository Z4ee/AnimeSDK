#pragma once
#include "unitysdk/unitysdk.h"

namespace BNative
{
	inline static constexpr unsigned int BNativeDebug_LogLevel_TypeDefinitionIndex = 46757;

	enum class BNativeDebug_LogLevel : ::System::Int32
	{
		Error = 2,
		Warning = 1,
		Log = 0,
		None = 4,
		Exception = 3,
	};
}
