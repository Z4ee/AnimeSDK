#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Vehicle/VehicleAutomicConfig.h"
#include "unitysdk/MoleMole/Vehicle/VehicleDriftConfig.h"
#include "unitysdk/MoleMole/Vehicle/VehiclePhysicalConfig.h"
#include "unitysdk/MoleMole/Vehicle/VehicleVisualConfig.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_VEHICLE_VEHICLECONFIG_METHOD_1_623160C745FC10C0_OFFSET UNITYSDK_OFFSET(0xEBDAD10)
#define MOLEMOLE_VEHICLE_VEHICLECONFIG_METHOD_1_8C97CA3BAB7FB2D7_OFFSET UNITYSDK_OFFSET(0xEBDAC30)
#define MOLEMOLE_VEHICLE_VEHICLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xEBDA2A0)

namespace MoleMole::Vehicle
{
	inline static constexpr unsigned int VehicleConfig_TypeDefinitionIndex = 49731;

	class VehicleConfig : public ::System::Object
	{
	public:
		// static const ::System::Single MAX_STEER_DURATION; // 0x0
		::System::Single wheelbase; // 0x10
		::System::Single baseSpeed; // 0x14
		::System::Single minSpeed; // 0x18
		::System::Single maxSpeed; // 0x1C
		::System::Single minSteerRadius; // 0x20
		::System::Single minSteerRadiusOnMaxSpeed; // 0x24
		::UnityEngine::AnimationCurve* radiusBySpeedCurve; // 0x28
		::System::Single leanSteerRadiusRatio; // 0x30
		::UnityEngine::AnimationCurve* leanSteerRadiusCurve; // 0x38
		::System::Single accelerationTime; // 0x40
		::System::Single decelerationTime; // 0x44
		::UnityEngine::AnimationCurve* accelerationSpeedCurve; // 0x48
		::UnityEngine::AnimationCurve* decelerationSpeedCurve; // 0x50
		::System::Single nitroBase; // 0x58
		::System::Single nitroMax; // 0x5C
		::System::Single nitroRecoverPerSec; // 0x60
		::System::Single nitroConsumePerSec; // 0x64
		::System::Single nitroTriggerCost; // 0x68
		::System::Single nitroPickUpRecover; // 0x6C
		::System::Single collisionSpeedLose; // 0x70
		::System::Single collisionSpeedLoseBase; // 0x74
		::System::Single collisionSpeedProtectTime; // 0x78
		::UnityEngine::AnimationCurve* chainCollisionDecrementCurve; // 0x80
		::System::Single steerAngleDegreeMax; // 0x88
		::System::Single steeringSensitivity; // 0x8C
		::System::Single inAirSteer; // 0x90
		::System::Single sideSlipAngleDegreeMax; // 0x94
		::System::Single sideSlipChangeRatio; // 0x98
		::UnityEngine::AnimationCurve* sideSlipCurveBySpeed; // 0xA0
		::UnityEngine::AnimationCurve* dragForceCurve; // 0xA8
		::MoleMole::Vehicle::VehicleDriftConfig driftConfig; // 0xB0
		::MoleMole::Vehicle::VehiclePhysicalConfig physicalConfig; // 0x118
		::MoleMole::Vehicle::VehicleVisualConfig visualConfig; // 0x130
		::MoleMole::Vehicle::VehicleAutomicConfig automicConfig; // 0x1F0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VEHICLE_VEHICLECONFIG__CTOR_OFFSET))(this);
		}

		::System::Single Method_1_8C97CA3BAB7FB2D7(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_VEHICLE_VEHICLECONFIG_METHOD_1_8C97CA3BAB7FB2D7_OFFSET))(this, a1);
		}

		::System::Single Method_1_623160C745FC10C0(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_VEHICLE_VEHICLECONFIG_METHOD_1_623160C745FC10C0_OFFSET))(this, a1, a2);
		}
	};
}
