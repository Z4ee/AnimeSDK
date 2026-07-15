#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/Formatters/DictionaryFormatterBase_5.h"
#include "unitysdk/System/Collections/Generic/SortedDictionary_2_Enumerator.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace System::Collections::Generic { template <typename T1, typename T2> class SortedDictionary_2; }

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int SortedDictionaryFormatter_2_TypeDefinitionIndex = 7383;

	template <typename TKey, typename TValue>
	class SortedDictionaryFormatter_2 : public ::MessagePack::Formatters::DictionaryFormatterBase_5<TKey, TValue, ::System::Collections::Generic::SortedDictionary_2<TKey, TValue>*, ::System::Collections::Generic::SortedDictionary_2_Enumerator<TKey, TValue>, ::System::Collections::Generic::SortedDictionary_2<TKey, TValue>*>
	{
	public:
	};
}
