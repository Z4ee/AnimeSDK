#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/Formatters/DictionaryFormatterBase_4.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::ObjectModel { template <typename T1, typename T2> class ReadOnlyDictionary_2; }

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int ReadOnlyDictionaryFormatter_2_TypeDefinitionIndex = 7384;

	template <typename TKey, typename TValue>
	class ReadOnlyDictionaryFormatter_2 : public ::MessagePack::Formatters::DictionaryFormatterBase_4<TKey, TValue, ::System::Collections::Generic::Dictionary_2<TKey, TValue>*, ::System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>*>
	{
	public:
	};
}
