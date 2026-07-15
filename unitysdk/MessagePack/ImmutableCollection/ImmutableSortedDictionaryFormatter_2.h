#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/Formatters/DictionaryFormatterBase_5.h"
#include "unitysdk/System/Collections/Immutable/ImmutableSortedDictionary_2_Enumerator.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace System::Collections::Immutable { template <typename T1, typename T2> class ImmutableSortedDictionary_2; }
namespace System::Collections::Immutable { template <typename T1, typename T2> class ImmutableSortedDictionary_2_Builder; }

namespace MessagePack::ImmutableCollection
{
	inline static constexpr unsigned int ImmutableSortedDictionaryFormatter_2_TypeDefinitionIndex = 7318;

	template <typename TKey, typename TValue>
	class ImmutableSortedDictionaryFormatter_2 : public ::MessagePack::Formatters::DictionaryFormatterBase_5<TKey, TValue, ::System::Collections::Immutable::ImmutableSortedDictionary_2_Builder<TKey, TValue>*, ::System::Collections::Immutable::ImmutableSortedDictionary_2_Enumerator<TKey, TValue>, ::System::Collections::Immutable::ImmutableSortedDictionary_2<TKey, TValue>*>
	{
	public:
	};
}
