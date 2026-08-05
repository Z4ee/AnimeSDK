#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int FocusCameraTargetByRotationYSetting_TypeDefinitionIndex = 77794;

	struct alignas(4) FocusCameraTargetByRotationYSetting
	{
		::System::Single fieldOfView; // 0x10
		::System::Single pitch; // 0x14
		::System::Single playerScreenOffsetX; // 0x18
		::System::Single targetScreenOffsetX; // 0x1C
		::System::Single minAngle; // 0x20
		::System::Single maxAngle; // 0x24
		::System::Single interpToSpeed; // 0x28
		::System::Single radius; // 0x2C
	};
}
