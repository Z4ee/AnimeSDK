#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/TimePeriodType.h"
#include "unitysdk/MoleMole/Config/WeatherType.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace MoleMole
{
	inline static constexpr unsigned int BattleGameWeatherAndTime_TypeDefinitionIndex = 76855;

	struct alignas(8) BattleGameWeatherAndTime
	{
		::System::String* tagSource; // 0x10
		::System::Int32 runID; // 0x18
		::MoleMole::Config::TimePeriodType timePeriod; // 0x1C
		::MoleMole::Config::WeatherType weather; // 0x20
		::System::Int32 priority; // 0x24
	};
}
