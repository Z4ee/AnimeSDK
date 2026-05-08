#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MonoNotRelateGameLogic/DeviceCarType.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::Accessories
{
	inline static constexpr unsigned int MonoDeviceNumberPlate_Handle_TypeDefinitionIndex = 73274;

	struct alignas(4) MonoDeviceNumberPlate_Handle
	{
		::System::UInt32 EntityID; // 0x10
		::MonoNotRelateGameLogic::DeviceCarType PoolType; // 0x14
		::System::Int32 MeshIndex; // 0x18
		::System::Boolean NeedsRemoval; // 0x1C
	};
}
