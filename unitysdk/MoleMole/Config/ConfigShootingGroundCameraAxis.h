#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/CameraAxis.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigShootingGroundCameraAxis_TypeDefinitionIndex = 54471;

	struct alignas(4) ConfigShootingGroundCameraAxis
	{
		::MoleMole::CameraAxis X; // 0x10
		::MoleMole::CameraAxis Y; // 0x20
	};
}
