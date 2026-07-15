#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/Formatters/CollectionFormatterBase_3.h"

namespace MessagePack { class MessagePackSerializerOptions; }

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int GenericEnumerableFormatter_2_TypeDefinitionIndex = 7347;

	template <typename TElement, typename TCollection>
	class GenericEnumerableFormatter_2 : public ::MessagePack::Formatters::CollectionFormatterBase_3<TElement, ::Il2CppArray<TElement>*, TCollection>
	{
	public:
	};
}
