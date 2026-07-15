#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/Formatters/CollectionFormatterBase_4.h"

namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int CollectionFormatterBase_3_TypeDefinitionIndex = 7344;

	template <typename TElement, typename TIntermediate, typename TCollection>
	class CollectionFormatterBase_3 : public ::MessagePack::Formatters::CollectionFormatterBase_4<TElement, TIntermediate, ::System::Collections::Generic::IEnumerator_1<TElement>*, TCollection>
	{
	public:
	};
}
