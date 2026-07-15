#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/DictionaryEntry.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

namespace System::Collections::Immutable
{
	inline static constexpr unsigned int DictionaryEnumerator_2_TypeDefinitionIndex = 6967;

	template <typename TKey, typename TValue>
	class DictionaryEnumerator_2 : public ::System::Object
	{
	public:
		::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>* _inner; // 0x0
	};
}
