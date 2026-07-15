#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client
{
	inline static constexpr unsigned int MissionModule_ResultValue_TypeDefinitionIndex = 63202;

	struct alignas(4) MissionModule_ResultValue
	{
		::System::UInt32 MissionResultValue; // 0x10
	};
}
