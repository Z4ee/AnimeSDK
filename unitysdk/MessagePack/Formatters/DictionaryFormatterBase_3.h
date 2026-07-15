#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/Formatters/DictionaryFormatterBase_4.h"

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int DictionaryFormatterBase_3_TypeDefinitionIndex = 7377;

	template <typename TKey, typename TValue, typename TDictionary>
	class DictionaryFormatterBase_3 : public ::MessagePack::Formatters::DictionaryFormatterBase_4<TKey, TValue, TDictionary, TDictionary>
	{
	public:
	};
}
