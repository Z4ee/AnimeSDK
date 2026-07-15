#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/Formatters/DictionaryFormatterBase_5.h"
#include "unitysdk/System/Collections/Immutable/ImmutableDictionary_2_Enumerator.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace System::Collections::Immutable { template <typename T1, typename T2> class ImmutableDictionary_2; }
namespace System::Collections::Immutable { template <typename T1, typename T2> class ImmutableDictionary_2_Builder; }

namespace MessagePack::ImmutableCollection
{
	inline static constexpr unsigned int ImmutableDictionaryFormatter_2_TypeDefinitionIndex = 7316;

	template <typename TKey, typename TValue>
	class ImmutableDictionaryFormatter_2 : public ::MessagePack::Formatters::DictionaryFormatterBase_5<TKey, TValue, ::System::Collections::Immutable::ImmutableDictionary_2_Builder<TKey, TValue>*, ::System::Collections::Immutable::ImmutableDictionary_2_Enumerator<TKey, TValue>, ::System::Collections::Immutable::ImmutableDictionary_2<TKey, TValue>*>
	{
	public:
	};
}
