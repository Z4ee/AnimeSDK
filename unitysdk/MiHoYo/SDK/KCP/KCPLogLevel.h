#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK::KCP
{
	inline static constexpr unsigned int KCPLogLevel_TypeDefinitionIndex = 44914;

	enum class KCPLogLevel : ::System::Int32
	{
		Debug = 0,
		Info = 1,
		Warning = 2,
		Error = 3,
	};
}
