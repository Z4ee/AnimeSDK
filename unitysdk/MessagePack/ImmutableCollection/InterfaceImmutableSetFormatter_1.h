#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/Formatters/CollectionFormatterBase_3.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace System::Collections::Immutable { template <typename T> class IImmutableSet_1; }
namespace System::Collections::Immutable { template <typename T> class ImmutableHashSet_1_Builder; }

namespace MessagePack::ImmutableCollection
{
	inline static constexpr unsigned int InterfaceImmutableSetFormatter_1_TypeDefinitionIndex = 7324;

	template <typename T>
	class InterfaceImmutableSetFormatter_1 : public ::MessagePack::Formatters::CollectionFormatterBase_3<T, ::System::Collections::Immutable::ImmutableHashSet_1_Builder<T>*, ::System::Collections::Immutable::IImmutableSet_1<T>*>
	{
	public:
	};
}
