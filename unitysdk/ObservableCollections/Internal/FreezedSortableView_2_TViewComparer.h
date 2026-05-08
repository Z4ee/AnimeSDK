#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System::Collections::Generic { template <typename T> class IComparer_1; }

namespace ObservableCollections::Internal
{
	inline static constexpr unsigned int FreezedSortableView_2_TViewComparer_TypeDefinitionIndex = 25664;

	template <typename T, typename TView>
	class FreezedSortableView_2_TViewComparer : public ::System::Object
	{
	public:
		::System::Collections::Generic::IComparer_1<TView>* comparer; // 0x0
	};
}
