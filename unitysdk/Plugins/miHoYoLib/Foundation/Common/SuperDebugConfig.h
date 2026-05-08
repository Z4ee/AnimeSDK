#pragma once
#include "unitysdk/unitysdk.h"

namespace Plugins::miHoYoLib::Foundation::Common
{
	inline static constexpr unsigned int SuperDebugConfig_TypeDefinitionIndex = 8100;

	enum class SuperDebugConfig : ::System::Int32
	{
		WithFile = 2,
		AllLogWin = 4,
		None = 0,
		WithEngine = 1,
	};
}
