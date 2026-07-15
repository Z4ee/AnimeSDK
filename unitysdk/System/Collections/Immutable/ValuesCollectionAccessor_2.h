#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Immutable/KeysOrValuesCollectionAccessor_3.h"

namespace System::Collections::Immutable { template <typename T1, typename T2> class IImmutableDictionary_2; }

namespace System::Collections::Immutable
{
	inline static constexpr unsigned int ValuesCollectionAccessor_2_TypeDefinitionIndex = 7041;

	template <typename TKey, typename TValue>
	class ValuesCollectionAccessor_2 : public ::System::Collections::Immutable::KeysOrValuesCollectionAccessor_3<TKey, TValue, TValue>
	{
	public:
	};
}
