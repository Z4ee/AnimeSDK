#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T> class IComparer_1; }

namespace ObservableCollections
{
	inline static constexpr unsigned int SortOperation_1_TypeDefinitionIndex = 35209;

	template <typename T>
	struct SortOperation_1
	{
		::System::Int32 Index; // 0x0
		::System::Int32 Count; // 0x0
		::System::Collections::Generic::IComparer_1<T>* Comparer; // 0x0
	};
}
