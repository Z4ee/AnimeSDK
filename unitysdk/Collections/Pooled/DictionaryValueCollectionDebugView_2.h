#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class ICollection_1; }

namespace Collections::Pooled
{
	inline static constexpr unsigned int DictionaryValueCollectionDebugView_2_TypeDefinitionIndex = 5075;

	template <typename TKey, typename TValue>
	class DictionaryValueCollectionDebugView_2 : public ::System::Object
	{
	public:
		::System::Collections::Generic::ICollection_1<TValue>* _collection; // 0x0
	};
}
