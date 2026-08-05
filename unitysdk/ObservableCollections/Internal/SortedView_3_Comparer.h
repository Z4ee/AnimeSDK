#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System::Collections::Generic { template <typename T> class IComparer_1; }

namespace ObservableCollections::Internal
{
	inline static constexpr unsigned int SortedView_3_Comparer_TypeDefinitionIndex = 28767;

	template <typename T, typename TKey, typename TView>
	class SortedView_3_Comparer : public ::System::Object
	{
	public:
		::System::Collections::Generic::IComparer_1<T>* comparer; // 0x0
	};
}
