#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int NPCAbilitySmoothOrientationProcessors_OrientationParameters_TypeDefinitionIndex = 55478;

	struct alignas(4) NPCAbilitySmoothOrientationProcessors_OrientationParameters
	{
		::System::Single EndOfPathDuration; // 0x10
		::System::Single Standing_MoveTargetWeight; // 0x14
		::System::Single Moving_MoveTargetWeight; // 0x18
		::System::Single Standing_VelocityWeight; // 0x1C
		::System::Single Moving_VelocityWeight; // 0x20
		::System::Single Standing_OrientationSmoothingTime; // 0x24
		::System::Single Moving_OrientationSmoothingTime; // 0x28
		::System::Boolean LockYAxis; // 0x2C
	};
}
