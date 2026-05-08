#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/LayerMask.h"

namespace MoleMole::Vehicle
{
	inline static constexpr unsigned int VehiclePhysicalConfig_TypeDefinitionIndex = 49176;

	struct alignas(4) VehiclePhysicalConfig
	{
		::System::Single gravityAcc; // 0x10
		::System::Single fallSpeedMax; // 0x14
		::System::Single pitchRange; // 0x18
		::UnityEngine::LayerMask trackCollisionMask; // 0x1C
		::UnityEngine::LayerMask trapCollisionMask; // 0x20
		::System::Single collisionRotationAcc; // 0x24
	};
}
