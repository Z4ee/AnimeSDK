#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client
{
	inline static constexpr unsigned int ScheduleData_ScheduleDataUniqueKey_TypeDefinitionIndex = 64887;

	struct alignas(4) ScheduleData_ScheduleDataUniqueKey
	{
		::System::UInt32 BeginTimeStamp; // 0x10
		::System::UInt32 EndTimeStamp; // 0x14
		::System::UInt32 ModuleID; // 0x18
		::System::UInt32 ActivityID; // 0x1C
	};
}
