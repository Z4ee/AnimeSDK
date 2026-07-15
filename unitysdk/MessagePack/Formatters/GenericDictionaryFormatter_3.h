#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/Formatters/DictionaryFormatterBase_3.h"

namespace MessagePack { class MessagePackSerializerOptions; }

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int GenericDictionaryFormatter_3_TypeDefinitionIndex = 7379;

	template <typename TKey, typename TValue, typename TDictionary>
	class GenericDictionaryFormatter_3 : public ::MessagePack::Formatters::DictionaryFormatterBase_3<TKey, TValue, TDictionary>
	{
	public:
	};
}
