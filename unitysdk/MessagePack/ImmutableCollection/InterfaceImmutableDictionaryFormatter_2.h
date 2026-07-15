#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/Formatters/DictionaryFormatterBase_4.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace System::Collections::Immutable { template <typename T1, typename T2> class IImmutableDictionary_2; }
namespace System::Collections::Immutable { template <typename T1, typename T2> class ImmutableDictionary_2_Builder; }

namespace MessagePack::ImmutableCollection
{
	inline static constexpr unsigned int InterfaceImmutableDictionaryFormatter_2_TypeDefinitionIndex = 7323;

	template <typename TKey, typename TValue>
	class InterfaceImmutableDictionaryFormatter_2 : public ::MessagePack::Formatters::DictionaryFormatterBase_4<TKey, TValue, ::System::Collections::Immutable::ImmutableDictionary_2_Builder<TKey, TValue>*, ::System::Collections::Immutable::IImmutableDictionary_2<TKey, TValue>*>
	{
	public:
	};
}
