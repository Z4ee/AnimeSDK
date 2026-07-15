#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client
{
	inline static constexpr unsigned int AlleyModule_ActivityRaidAlleyLogTargetInfo_TypeDefinitionIndex = 59489;

	struct alignas(4) AlleyModule_ActivityRaidAlleyLogTargetInfo
	{
		::System::UInt32 TargetID; // 0x10
		::System::Boolean IsFinish; // 0x14
		::System::UInt32 TargetCount; // 0x18
		::System::UInt32 FinishCount; // 0x1C
	};
}
