#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int AttractorRuntime_LinkData_TypeDefinitionIndex = 55755;

	struct alignas(4) AttractorRuntime_LinkData
	{
		::System::Int32 weight; // 0x10
		::System::Int32 handler; // 0x14
		::System::Boolean ignoreNavmesh; // 0x18
		::System::Boolean enableIK; // 0x19
	};
}
