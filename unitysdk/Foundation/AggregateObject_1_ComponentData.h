#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AggregateComponentAssignableInterface.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation { template <typename T> class AggregateObject_1_ComponentDependency; }

namespace Foundation
{
	inline static constexpr unsigned int AggregateObject_1_ComponentData_TypeDefinitionIndex = 9168;

	template <typename TEvent>
	struct AggregateObject_1_ComponentData
	{
		::Foundation::AggregateComponentAssignableInterface Interfaces; // 0x0
		::Il2CppArray<::Foundation::AggregateObject_1_ComponentDependency<TEvent>*>* Dependencies; // 0x0
	};
}
