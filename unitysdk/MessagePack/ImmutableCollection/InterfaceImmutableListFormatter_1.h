#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/Formatters/CollectionFormatterBase_3.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace System::Collections::Immutable { template <typename T> class IImmutableList_1; }
namespace System::Collections::Immutable { template <typename T> class ImmutableList_1_Builder; }

namespace MessagePack::ImmutableCollection
{
	inline static constexpr unsigned int InterfaceImmutableListFormatter_1_TypeDefinitionIndex = 7322;

	template <typename T>
	class InterfaceImmutableListFormatter_1 : public ::MessagePack::Formatters::CollectionFormatterBase_3<T, ::System::Collections::Immutable::ImmutableList_1_Builder<T>*, ::System::Collections::Immutable::IImmutableList_1<T>*>
	{
	public:
	};
}
