#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation { template <typename T> class AggregateObject_1; }
namespace Foundation { template <typename T> class AggregateObject_1_ComponentBuilder; }

namespace Foundation
{
	inline static constexpr unsigned int AggregateObject_1_ComponentBuilder_TypeDefinitionIndex = 8754;

	template <typename TEvent>
	class AggregateObject_1_ComponentBuilder : public ::System::Object
	{
	public:
		::Foundation::AggregateObject_1<TEvent>* _object; // 0x0
	};
}
