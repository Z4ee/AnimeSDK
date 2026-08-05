#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ObservableCollections/Internal/CloneCollection_1.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

namespace ObservableCollections::Internal
{
	inline static constexpr unsigned int CloneCollectionWrapper_1_TypeDefinitionIndex = 28773;

	template <typename T>
	struct CloneCollectionWrapper_1
	{
		::ObservableCollections::Internal::CloneCollection_1<T> _cloneCollection; // 0x0
	};
}
