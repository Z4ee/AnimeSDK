#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/Formatters/DictionaryFormatterBase_3.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int ConcurrentDictionaryFormatter_2_TypeDefinitionIndex = 7386;

	template <typename TKey, typename TValue>
	class ConcurrentDictionaryFormatter_2 : public ::MessagePack::Formatters::DictionaryFormatterBase_3<TKey, TValue, ::System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>*>
	{
	public:
	};
}
