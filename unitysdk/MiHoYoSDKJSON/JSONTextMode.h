#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYoSDKJSON
{
	inline static constexpr unsigned int JSONTextMode_TypeDefinitionIndex = 42648;

	enum class JSONTextMode : ::System::Int32
	{
		Compact = 0,
		Indent = 1,
	};
}
