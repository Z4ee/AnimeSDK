#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

namespace NPCCrowd::Accessories
{
	inline static constexpr unsigned int MonoDeviceNumberPlate_RandomPool_TypeDefinitionIndex = 73275;

	struct alignas(8) MonoDeviceNumberPlate_RandomPool
	{
		::System::Int32 MaxCount; // 0x10
		::System::Collections::Generic::List_1<::System::Int32>* IndexPool; // 0x18
	};
}
