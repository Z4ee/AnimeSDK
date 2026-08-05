#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Specialized/NotifyCollectionChangedAction.h"
#include "unitysdk/System/ReadOnlySpan_1.h"
#include "unitysdk/System/ValueType.h"

namespace ObservableCollections
{
	inline static constexpr unsigned int NotifyCollectionChangedEventArgs_1_TypeDefinitionIndex = 28649;

	template <typename T>
	struct NotifyCollectionChangedEventArgs_1
	{
		::System::Collections::Specialized::NotifyCollectionChangedAction Action; // 0x0
		::System::Boolean IsSingleItem; // 0x0
		T NewItem; // 0x0
		T OldItem; // 0x0
		::System::ReadOnlySpan_1<T> NewItems; // 0x0
		::System::ReadOnlySpan_1<T> OldItems; // 0x0
		::System::Int32 NewStartingIndex; // 0x0
		::System::Int32 OldStartingIndex; // 0x0
	};
}
