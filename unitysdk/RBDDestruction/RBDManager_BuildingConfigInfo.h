#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RBDDestruction
{
	inline static constexpr unsigned int RBDManager_BuildingConfigInfo_TypeDefinitionIndex = 27064;

	struct alignas(4) RBDManager_BuildingConfigInfo
	{
		::System::Int32 fragCount; // 0x10
		::System::Int32 totalCount; // 0x14
		::System::Single gravityFactor; // 0x18
		::System::Single speedFactor; // 0x1C
		::System::Single speedDamping; // 0x20
		::System::Single rotationSpeedFactor; // 0x24
		::System::Single rotationDamping; // 0x28
		::System::Single stiffness; // 0x2C
		::System::Single destroyThreshold; // 0x30
		::System::Single fadeDelay; // 0x34
		::System::Single fadeDuration; // 0x38
		::System::Int32 groupCount; // 0x3C
	};
}
