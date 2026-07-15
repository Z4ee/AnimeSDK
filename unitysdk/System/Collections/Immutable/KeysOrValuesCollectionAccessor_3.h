#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Array; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Immutable { template <typename T1, typename T2> class IImmutableDictionary_2; }

namespace System::Collections::Immutable
{
	inline static constexpr unsigned int KeysOrValuesCollectionAccessor_3_TypeDefinitionIndex = 7039;

	template <typename TKey, typename TValue, typename T>
	class KeysOrValuesCollectionAccessor_3 : public ::System::Object
	{
	public:
		::System::Collections::Immutable::IImmutableDictionary_2<TKey, TValue>* _dictionary; // 0x0
		::System::Collections::Generic::IEnumerable_1<T>* _keysOrValues; // 0x0
	};
}
