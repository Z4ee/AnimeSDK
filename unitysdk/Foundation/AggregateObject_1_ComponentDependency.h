#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/List_1_Enumerator.h"
#include "unitysdk/System/Object.h"

namespace Foundation { template <typename T> class AggregateObject_1_ComponentDependency; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace Foundation
{
	inline static constexpr unsigned int AggregateObject_1_ComponentDependency_TypeDefinitionIndex = 8748;

	template <typename TEvent>
	class AggregateObject_1_ComponentDependency : public ::System::Object
	{
	public:
		::System::Int32 _indegree; // 0x0
		::System::Collections::Generic::List_1<::System::Int32>* _subsequent; // 0x0
	};
}
