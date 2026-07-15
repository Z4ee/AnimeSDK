#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/Formatters/CollectionFormatterBase_3.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyCollection_1; }

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int InterfaceReadOnlyCollectionFormatter_1_TypeDefinitionIndex = 7369;

	template <typename T>
	class InterfaceReadOnlyCollectionFormatter_1 : public ::MessagePack::Formatters::CollectionFormatterBase_3<T, ::Il2CppArray<T>*, ::System::Collections::Generic::IReadOnlyCollection_1<T>*>
	{
	public:
	};
}
