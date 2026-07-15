#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int DictionaryFormatterBase_5_TypeDefinitionIndex = 7375;

	template <typename TKey, typename TValue, typename TIntermediate, typename TEnumerator, typename TDictionary>
	class DictionaryFormatterBase_5 : public ::System::Object
	{
	public:
	};
}
