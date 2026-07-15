#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/Formatters/DictionaryFormatterBase_4.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int GenericReadOnlyDictionaryFormatter_3_TypeDefinitionIndex = 7380;

	template <typename TKey, typename TValue, typename TDictionary>
	class GenericReadOnlyDictionaryFormatter_3 : public ::MessagePack::Formatters::DictionaryFormatterBase_4<TKey, TValue, ::System::Collections::Generic::Dictionary_2<TKey, TValue>*, TDictionary>
	{
	public:
	};
}
