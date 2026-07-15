#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

namespace Newtonsoft::Json::Utilities
{
	inline static constexpr unsigned int DictionaryWrapper_2_DictionaryEnumerator_2_TypeDefinitionIndex = 9329;

	template <typename TKey, typename TValue, typename TEnumeratorKey, typename TEnumeratorValue>
	struct DictionaryWrapper_2_DictionaryEnumerator_2
	{
		::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TEnumeratorKey, TEnumeratorValue>>* _e; // 0x0
	};
}
