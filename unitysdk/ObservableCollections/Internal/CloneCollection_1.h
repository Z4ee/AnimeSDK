#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

namespace ObservableCollections::Internal
{
	inline static constexpr unsigned int CloneCollection_1_TypeDefinitionIndex = 28020;

	template <typename T>
	struct CloneCollection_1
	{
		::Il2CppArray<T>* array; // 0x0
		::System::Int32 length; // 0x0
	};
}
