#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/DictionaryEntry.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

namespace Google::Protobuf::Collections
{
	inline static constexpr unsigned int MapField_2_DictionaryEnumerator_TypeDefinitionIndex = 5584;

	template <typename TKey, typename TValue>
	class MapField_2_DictionaryEnumerator : public ::System::Object
	{
	public:
		::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>* enumerator; // 0x0
	};
}
