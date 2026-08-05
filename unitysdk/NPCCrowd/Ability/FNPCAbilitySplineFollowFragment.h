#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int FNPCAbilitySplineFollowFragment_TypeDefinitionIndex = 46074;

	struct alignas(4) FNPCAbilitySplineFollowFragment
	{
		::System::Boolean Enable; // 0x10
		::System::Boolean IsStarted; // 0x11
		::System::Boolean IsFinished; // 0x12
		::System::Boolean IsStopped; // 0x13
		::System::Boolean SnapToGround; // 0x14
		::System::Int32 CacheId; // 0x18
		::System::Int32 SampleIndex; // 0x1C
		::System::Single ProgressDistance; // 0x20
		::System::Single Speed; // 0x24
		::System::Single StopRadius; // 0x28
		::System::Single DistanceToEnd; // 0x2C
	};
}
