#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/Formatters/CollectionFormatterBase_3.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int InterfaceReadOnlyListFormatter_1_TypeDefinitionIndex = 7368;

	template <typename T>
	class InterfaceReadOnlyListFormatter_1 : public ::MessagePack::Formatters::CollectionFormatterBase_3<T, ::Il2CppArray<T>*, ::System::Collections::Generic::IReadOnlyList_1<T>*>
	{
	public:
	};
}
