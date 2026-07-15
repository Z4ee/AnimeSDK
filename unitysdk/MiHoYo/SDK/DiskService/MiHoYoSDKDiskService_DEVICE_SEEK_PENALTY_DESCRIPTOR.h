#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MiHoYo::SDK::DiskService
{
	inline static constexpr unsigned int MiHoYoSDKDiskService_DEVICE_SEEK_PENALTY_DESCRIPTOR_TypeDefinitionIndex = 44899;

	struct alignas(4) MiHoYoSDKDiskService_DEVICE_SEEK_PENALTY_DESCRIPTOR
	{
		::System::UInt32 Version; // 0x10
		::System::UInt32 Size; // 0x14
		::System::Boolean IncursSeekPenalty; // 0x18
	};
}
