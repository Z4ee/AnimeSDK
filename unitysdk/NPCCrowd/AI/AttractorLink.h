#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int AttractorLink_TypeDefinitionIndex = 55168;

	struct alignas(4) AttractorLink
	{
		::System::Int32 weight; // 0x10
		::System::Int32 fromInstanceId; // 0x14
		::System::Int32 toInstanceId; // 0x18
		::System::Boolean ignoreNavmesh; // 0x1C
		::System::Boolean enableIK; // 0x1D
	};
}
