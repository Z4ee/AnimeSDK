#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System::Collections::Generic { template <typename T> class IComparer_1; }

namespace ObservableCollections::Internal
{
	inline static constexpr unsigned int FreezedSortableView_2_TComparer_TypeDefinitionIndex = 28170;

	template <typename T, typename TView>
	class FreezedSortableView_2_TComparer : public ::System::Object
	{
	public:
		::System::Collections::Generic::IComparer_1<T>* comparer; // 0x0
	};
}
