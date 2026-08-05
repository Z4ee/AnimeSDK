#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Lod/UpdateMode.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::Lod
{
	inline static constexpr unsigned int NPCCrowdDistanceProcessor_TaskRuntime_TypeDefinitionIndex = 63861;

	struct alignas(8) NPCCrowdDistanceProcessor_TaskRuntime
	{
		::NPCCrowd::Lod::UpdateMode mode; // 0x10
		::System::Int32 targetIdx1; // 0x14
		::System::Int32 targetIdx2; // 0x18
		::System::Single lastDistance; // 0x1C
		::System::Single curDistance; // 0x20
		::System::Boolean dirtyFlag; // 0x24
		::System::Int32 refCnt; // 0x28
		::System::Boolean valid; // 0x2C
		::System::Int32 lastUpdateFrameCnt; // 0x30
		::System::Int32 targetUpdateFrameCnt; // 0x34
		::System::Single curMaxMovement; // 0x38
		::System::Single movementCount; // 0x3C
		::System::Double curDistanceSqrt; // 0x40
	};
}
