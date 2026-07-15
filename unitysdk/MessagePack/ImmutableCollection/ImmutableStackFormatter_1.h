#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/Formatters/CollectionFormatterBase_3.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace System::Collections::Immutable { template <typename T> class ImmutableStack_1; }

namespace MessagePack::ImmutableCollection
{
	inline static constexpr unsigned int ImmutableStackFormatter_1_TypeDefinitionIndex = 7321;

	template <typename T>
	class ImmutableStackFormatter_1 : public ::MessagePack::Formatters::CollectionFormatterBase_3<T, ::Il2CppArray<T>*, ::System::Collections::Immutable::ImmutableStack_1<T>*>
	{
	public:
	};
}
