#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client
{
	inline static constexpr unsigned int AlleyModule_ActivityRaidAlleyResultStruct_TypeDefinitionIndex = 59488;

	struct alignas(4) AlleyModule_ActivityRaidAlleyResultStruct
	{
		::System::UInt32 ID; // 0x10
		::System::Boolean IsSpecial; // 0x14
	};
}
