#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/Formatters/CollectionFormatterBase_3.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace System::Collections::Immutable { template <typename T> class IImmutableStack_1; }

namespace MessagePack::ImmutableCollection
{
	inline static constexpr unsigned int InterfaceImmutableStackFormatter_1_TypeDefinitionIndex = 7326;

	template <typename T>
	class InterfaceImmutableStackFormatter_1 : public ::MessagePack::Formatters::CollectionFormatterBase_3<T, ::Il2CppArray<T>*, ::System::Collections::Immutable::IImmutableStack_1<T>*>
	{
	public:
	};
}
