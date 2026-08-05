#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int JSONTextMode_TypeDefinitionIndex = 20233;

	enum class JSONTextMode : ::System::Int32
	{
		Compact = 0,
		Indent = 1,
	};
}
