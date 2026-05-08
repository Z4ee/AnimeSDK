#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

namespace FluffyUnderware::DevTools
{
	inline static constexpr unsigned int SimplePool_1_TypeDefinitionIndex = 25883;

	template <typename T>
	class SimplePool_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<T>* freeItemsBackfield; // 0x0
	};
}
