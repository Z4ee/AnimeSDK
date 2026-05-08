#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Specialized/NotifyCollectionChangedAction.h"
#include "unitysdk/System/ValueType.h"

namespace ObservableCollections
{
	inline static constexpr unsigned int SynchronizedViewChangedEventArgs_2_TypeDefinitionIndex = 25705;

	template <typename T, typename TView>
	struct SynchronizedViewChangedEventArgs_2
	{
		::System::Collections::Specialized::NotifyCollectionChangedAction Action; // 0x0
		T NewValue; // 0x0
		T OldValue; // 0x0
		TView NewView; // 0x0
		TView OldView; // 0x0
		::System::Int32 NewViewIndex; // 0x0
		::System::Int32 OldViewIndex; // 0x0
	};
}
