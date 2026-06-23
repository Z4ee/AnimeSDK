#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class ICollection_1; }

namespace System::Collections::Generic
{
	inline static constexpr unsigned int DictionaryKeyCollectionDebugView_2_TypeDefinitionIndex = 3950;

	template <typename TKey, typename TValue>
	class DictionaryKeyCollectionDebugView_2 : public ::System::Object
	{
	public:
		::System::Collections::Generic::ICollection_1<TKey>* _collection; // 0x0
	};
}
