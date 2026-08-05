#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::Config { class DriftOverrideConfig; }
namespace UnityEngine { class AnimationCurve; }

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSurfMovement_TypeDefinitionIndex = 74365;

	struct alignas(8) ConfigSurfMovement
	{
		::System::Single MinSpeed; // 0x10
		::System::Single BaseSpeed; // 0x14
		::System::Single MaxSpeed; // 0x18
		::System::Single AccelerationDuration; // 0x1C
		::UnityEngine::AnimationCurve* SpeedCurve; // 0x20
		::System::Single BrakeDuration; // 0x28
		::UnityEngine::AnimationCurve* BrakeSpeedCurve; // 0x30
		::System::Single SteerPenaltyMaxTime; // 0x38
		::UnityEngine::AnimationCurve* SteerSpeedRatio; // 0x40
		::UnityEngine::AnimationCurve* ReversePenaltyCurve; // 0x48
		::System::Single NitroMax; // 0x50
		::System::Single NitroRecover; // 0x54
		::System::Single NitroRecoverInDrift; // 0x58
		::UnityEngine::AnimationCurve* NitroRecoverByDriftAngle; // 0x60
		::System::Single NitroStartThreshold; // 0x68
		::System::Single NitroCost; // 0x6C
		::System::Single MaxSpeedRatio; // 0x70
		::System::Single BoostAccelDuration; // 0x74
		::UnityEngine::AnimationCurve* BoostSpeedCurve; // 0x78
		::System::Single DecelerationDuration; // 0x80
		::UnityEngine::AnimationCurve* DecelerationCurve; // 0x88
		::System::Single ShortBoostTimeWindow; // 0x90
		::System::Single ShortBoostDuration; // 0x94
		::System::Single MaxAngularSpeed; // 0x98
		::System::Single AngularAccelerationDuration; // 0x9C
		::UnityEngine::AnimationCurve* AngularSpeedByTimeCurve; // 0xA0
		::UnityEngine::AnimationCurve* AngularSpeedByInputCurve; // 0xA8
		::System::Single AutoSteerMaxAngularSpeed; // 0xB0
		::System::Single AutoSteerInDriftMaxAngularSpeed; // 0xB4
		::System::Single AutoSteerDuration; // 0xB8
		::System::Single JumpInitSpeed; // 0xBC
		::System::Single ChargeJumpTime; // 0xC0
		::System::Single ChargeJumpSpeed; // 0xC4
		::System::Single Gravity; // 0xC8
		::System::Single HeavyLandingSpeedThreshold; // 0xCC
		::System::Single DriftEnterSpeed; // 0xD0
		::System::Single OverflowDecelerateDuration; // 0xD4
		::UnityEngine::AnimationCurve* OverflowDecelerateDurationCurve; // 0xD8
		::System::Single OverflowDecelRatioNoInput; // 0xE0
		::UnityEngine::AnimationCurve* OverflowDecelerateCurve; // 0xE8
		::System::Single DriftExitSideSpeed; // 0xF0
		::System::Single DriftAccelDurationRatio; // 0xF4
		::UnityEngine::AnimationCurve* DriftAccelDurationRatioByInitSpeed; // 0xF8
		::System::Single DriftAccelBoostThreshold; // 0x100
		::System::Single DriftAccelMaxAddSpeed; // 0x104
		::UnityEngine::AnimationCurve* DriftAccelAddSpeedCurve; // 0x108
		::System::Single DriftMaxForce; // 0x110
		::UnityEngine::AnimationCurve* DriftAccelerateCurve; // 0x118
		::System::Single DriftMaxTotalSpeedRatio; // 0x120
		::System::Single DriftMaxAngle; // 0x124
		::System::Single DriftMinAngle; // 0x128
		::System::Single DriftMaxAngularSpeed; // 0x12C
		::UnityEngine::AnimationCurve* DriftSteerCurve; // 0x130
		::UnityEngine::AnimationCurve* DriftSteerAgainstCurve; // 0x138
		::UnityEngine::AnimationCurve* DriftSteerBackCurve; // 0x140
		::System::Single ReDriftCooldown; // 0x148
		::Il2CppArray<::MoleMole::Config::DriftOverrideConfig*>* DriftOverrideConfigs; // 0x150
	};
}
