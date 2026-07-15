#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/Formatters/CollectionFormatterBase_3.h"

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int CollectionFormatterBase_2_TypeDefinitionIndex = 7345;

	template <typename TElement, typename TCollection>
	class CollectionFormatterBase_2 : public ::MessagePack::Formatters::CollectionFormatterBase_3<TElement, TCollection, TCollection>
	{
	public:
	};
}
