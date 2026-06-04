#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int PinballCameraAnchorConfig_TypeDefinitionIndex = 73290;

	struct alignas(4) PinballCameraAnchorConfig
	{
		::System::UInt32 FromStationPropID; // 0x10
		::System::UInt32 ToStationPropID; // 0x14
		::System::UInt32 CameraAnchor1; // 0x18
		::System::UInt32 CameraAnchor2; // 0x1C
		::System::Single CameraChangeTime; // 0x20
	};
}
