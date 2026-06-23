#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/TimePeriodType.h"
#include "unitysdk/System/ValueType.h"

#define MOLEMOLE_LEVEL_LEVELCONFIG_DAYTIMERANGE_CHECKINTIMERANGE_OFFSET UNITYSDK_OFFSET(0x7C7990)

namespace MoleMole::Level
{
	inline static constexpr unsigned int LevelConfig_DayTimeRange_TypeDefinitionIndex = 47019;

	struct alignas(4) LevelConfig_DayTimeRange
	{
		::System::Single timeStart; // 0x10
		::System::Single timeEnd; // 0x14
		::MoleMole::Config::TimePeriodType dayTime; // 0x18

		::System::Boolean CheckInTimeRange(::System::Single hour)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVEL_LEVELCONFIG_DAYTIMERANGE_CHECKINTIMERANGE_OFFSET))(this, hour);
		}
	};
}
