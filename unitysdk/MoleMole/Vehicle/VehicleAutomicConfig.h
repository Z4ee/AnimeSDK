#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Vehicle/VehicleSensorOutline.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/LayerMask.h"

namespace UnityEngine { class AnimationCurve; }

namespace MoleMole::Vehicle
{
	inline static constexpr unsigned int VehicleAutomicConfig_TypeDefinitionIndex = 54437;

	struct alignas(8) VehicleAutomicConfig
	{
		::System::Boolean enableAssistDrive; // 0x10
		::MoleMole::Vehicle::VehicleSensorOutline outline; // 0x14
		::UnityEngine::LayerMask sensorCollisionMask; // 0x1C
		::System::Single autoDriveNoInputTime; // 0x20
		::System::Single steerCorrectionDistanceStart; // 0x24
		::System::Single steerCorrectionDistanceMax; // 0x28
		::System::Single steerCorrectionTargetDegree; // 0x2C
		::UnityEngine::AnimationCurve* steerCorrectionIntensityCurve; // 0x30
		::System::Single steerDivergeMaxDegree; // 0x38
	};
}
