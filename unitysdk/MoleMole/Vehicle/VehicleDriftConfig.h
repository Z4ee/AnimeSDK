#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class AnimationCurve; }

namespace MoleMole::Vehicle
{
	inline static constexpr unsigned int VehicleDriftConfig_TypeDefinitionIndex = 42736;

	struct alignas(8) VehicleDriftConfig
	{
		::System::Single maxDuration; // 0x10
		::System::Single driftSpeedRatioMin; // 0x14
		::System::Single driftSpeedRatioMax; // 0x18
		::System::Single steerAngleDegreeMin; // 0x1C
		::System::Single triggerValidTime; // 0x20
		::System::Single maxDriftInDegree; // 0x24
		::UnityEngine::AnimationCurve* driftInRadiusCurve; // 0x28
		::System::Single driftInTurnRadiusMin; // 0x30
		::System::Single driftInTurnRadiusMax; // 0x34
		::System::Single driftInAdjustmentDuration; // 0x38
		::UnityEngine::AnimationCurve* driftInAdjustmentCurve; // 0x40
		::System::Single onGoingBlendDuration; // 0x48
		::UnityEngine::AnimationCurve* onGoingBlendCurve; // 0x50
		::System::Single onGoingTurnRadius; // 0x58
		::System::Single driftOutAdjustmentDuration; // 0x5C
		::UnityEngine::AnimationCurve* driftOutAdjustmentCurve; // 0x60
		::System::Single driftAccFactor; // 0x68
		::System::Single massShift; // 0x6C
		::System::Single frontWheelSideSlipAngleDegreeMax; // 0x70
	};
}
