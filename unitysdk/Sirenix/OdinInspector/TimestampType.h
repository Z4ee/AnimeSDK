#pragma once
#include "unitysdk/unitysdk.h"

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int TimestampType_TypeDefinitionIndex = 7950;

	enum class TimestampType : ::System::Int32
	{
		UnixTimeMilliseconds = 1,
		UnixTimeSeconds = 2,
		UtcTicks = 0,
	};
}
