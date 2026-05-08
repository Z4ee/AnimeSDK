#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/TimePeriodType.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace MoleMole
{
	inline static constexpr unsigned int ConfigLevelSound_WwiseWeatherConfig_TypeDefinitionIndex = 81124;

	struct alignas(8) ConfigLevelSound_WwiseWeatherConfig
	{
		::MoleMole::Config::TimePeriodType timeType; // 0x10
		::System::String* weatherState; // 0x18
	};
}
