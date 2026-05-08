#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole
{
	inline static constexpr unsigned int DefaultCameraElevationTrack_TypeDefinitionIndex = 46408;

	struct alignas(4) DefaultCameraElevationTrack
	{
		::System::Single Bottom; // 0x10
		::System::Single Middle; // 0x14
		::System::Single Top; // 0x18
	};
}
