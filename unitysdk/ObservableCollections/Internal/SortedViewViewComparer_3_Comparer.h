#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System::Collections::Generic { template <typename T> class IComparer_1; }

namespace ObservableCollections::Internal
{
	inline static constexpr unsigned int SortedViewViewComparer_3_Comparer_TypeDefinitionIndex = 25698;

	template <typename T, typename TKey, typename TView>
	class SortedViewViewComparer_3_Comparer : public ::System::Object
	{
	public:
		::System::Collections::Generic::IComparer_1<TView>* comparer; // 0x0
	};
}
