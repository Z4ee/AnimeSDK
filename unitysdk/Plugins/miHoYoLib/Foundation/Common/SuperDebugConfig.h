#pragma once
#include "unitysdk/unitysdk.h"

namespace Plugins::miHoYoLib::Foundation::Common
{
	inline static constexpr unsigned int SuperDebugConfig_TypeDefinitionIndex = 8136;

	enum class SuperDebugConfig : ::System::Int32
	{
		None = 0,
		WithFile = 2,
		AllLogWin = 4,
		WithEngine = 1,
	};
}
