#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int H5logGeneralReport_LogLevel_TypeDefinitionIndex = 44748;

	enum class H5logGeneralReport_LogLevel : ::System::Int32
	{
		Debug = 0,
		Info = 1,
		Warning = 2,
		Error = 3,
	};
}
