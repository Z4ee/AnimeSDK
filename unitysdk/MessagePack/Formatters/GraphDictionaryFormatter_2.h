#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/Formatters/IGraphDictionaryFormatterBase_5.h"
#include "unitysdk/System/Collections/Generic/Dictionary_2_Enumerator.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int GraphDictionaryFormatter_2_TypeDefinitionIndex = 29513;

	template <typename TKey, typename TValue>
	class GraphDictionaryFormatter_2 : public ::MessagePack::Formatters::IGraphDictionaryFormatterBase_5<TKey, TValue, ::System::Collections::Generic::Dictionary_2<TKey, TValue>*, ::System::Collections::Generic::Dictionary_2_Enumerator<TKey, TValue>, ::System::Collections::Generic::Dictionary_2<TKey, TValue>*>
	{
	public:
	};
}
