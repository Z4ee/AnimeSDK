#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int KibanaLogLevel_TypeDefinitionIndex = 7530;

	enum class KibanaLogLevel : ::System::Int32
	{
		Trace = 0,
		Debug = 1,
		Info = 2,
		Warning = 3,
		Error = 4,
	};
}
