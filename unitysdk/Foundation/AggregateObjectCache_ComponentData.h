#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AggregateComponentAssignableInterface.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation
{
	inline static constexpr unsigned int AggregateObjectCache_ComponentData_TypeDefinitionIndex = 8968;

	struct alignas(8) AggregateObjectCache_ComponentData
	{
		::System::Int64 TypeHash; // 0x10
		::Foundation::AggregateComponentAssignableInterface Interfaces; // 0x18
	};
}
