#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int BangbooAdjustmentCameraOverriddenConfig_TypeDefinitionIndex = 56537;

	struct alignas(4) BangbooAdjustmentCameraOverriddenConfig
	{
		::System::Boolean syncedFollowPosition; // 0x10
		::System::Single followPositionDownDamping; // 0x14
		::System::Single followPositionUpDamping; // 0x18
	};
}
