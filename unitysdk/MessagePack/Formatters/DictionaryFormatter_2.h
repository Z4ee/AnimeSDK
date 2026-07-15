#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/Formatters/DictionaryFormatterBase_5.h"
#include "unitysdk/System/Collections/Generic/Dictionary_2_Enumerator.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int DictionaryFormatter_2_TypeDefinitionIndex = 7378;

	template <typename TKey, typename TValue>
	class DictionaryFormatter_2 : public ::MessagePack::Formatters::DictionaryFormatterBase_5<TKey, TValue, ::System::Collections::Generic::Dictionary_2<TKey, TValue>*, ::System::Collections::Generic::Dictionary_2_Enumerator<TKey, TValue>, ::System::Collections::Generic::Dictionary_2<TKey, TValue>*>
	{
	public:
	};
}
