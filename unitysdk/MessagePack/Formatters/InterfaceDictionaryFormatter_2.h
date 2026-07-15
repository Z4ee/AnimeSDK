#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/Formatters/DictionaryFormatterBase_4.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int InterfaceDictionaryFormatter_2_TypeDefinitionIndex = 7381;

	template <typename TKey, typename TValue>
	class InterfaceDictionaryFormatter_2 : public ::MessagePack::Formatters::DictionaryFormatterBase_4<TKey, TValue, ::System::Collections::Generic::Dictionary_2<TKey, TValue>*, ::System::Collections::Generic::IDictionary_2<TKey, TValue>*>
	{
	public:
	};
}
