#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/Formatters/DictionaryFormatterBase_3.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace System::Collections::Generic { template <typename T1, typename T2> class SortedList_2; }

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int SortedListFormatter_2_TypeDefinitionIndex = 7382;

	template <typename TKey, typename TValue>
	class SortedListFormatter_2 : public ::MessagePack::Formatters::DictionaryFormatterBase_3<TKey, TValue, ::System::Collections::Generic::SortedList_2<TKey, TValue>*>
	{
	public:
	};
}
