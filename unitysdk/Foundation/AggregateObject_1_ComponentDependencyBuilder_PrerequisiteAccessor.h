#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation { template <typename T> class AggregateObject_1_ComponentDependencyBuilder; }

namespace Foundation
{
	inline static constexpr unsigned int AggregateObject_1_ComponentDependencyBuilder_PrerequisiteAccessor_TypeDefinitionIndex = 9166;

	template <typename TEvent>
	struct AggregateObject_1_ComponentDependencyBuilder_PrerequisiteAccessor
	{
		::Foundation::AggregateObject_1_ComponentDependencyBuilder<TEvent>* _builder; // 0x0
		::System::Int32 _eventIndex; // 0x0
	};
}
