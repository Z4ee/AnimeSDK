#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/Formatters/CollectionFormatterBase_3.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace MessagePack::ImmutableCollection { template <typename T> class ImmutableQueueBuilder_1; }
namespace System::Collections::Immutable { template <typename T> class IImmutableQueue_1; }

namespace MessagePack::ImmutableCollection
{
	inline static constexpr unsigned int InterfaceImmutableQueueFormatter_1_TypeDefinitionIndex = 7325;

	template <typename T>
	class InterfaceImmutableQueueFormatter_1 : public ::MessagePack::Formatters::CollectionFormatterBase_3<T, ::MessagePack::ImmutableCollection::ImmutableQueueBuilder_1<T>*, ::System::Collections::Immutable::IImmutableQueue_1<T>*>
	{
	public:
	};
}
