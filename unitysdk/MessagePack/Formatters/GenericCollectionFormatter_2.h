#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/Formatters/CollectionFormatterBase_2.h"

namespace MessagePack { class MessagePackSerializerOptions; }

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int GenericCollectionFormatter_2_TypeDefinitionIndex = 7346;

	template <typename TElement, typename TCollection>
	class GenericCollectionFormatter_2 : public ::MessagePack::Formatters::CollectionFormatterBase_2<TElement, TCollection>
	{
	public:
	};
}
