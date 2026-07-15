#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SDKReportType_TypeDefinitionIndex = 7555;

	enum class SDKReportType : ::System::Int32
	{
		Default = 0,
		Performance = 1,
		CNPayPlat = 2,
	};
}
