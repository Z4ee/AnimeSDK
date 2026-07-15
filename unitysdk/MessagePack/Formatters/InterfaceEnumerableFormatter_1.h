#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/Formatters/CollectionFormatterBase_3.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int InterfaceEnumerableFormatter_1_TypeDefinitionIndex = 7355;

	template <typename T>
	class InterfaceEnumerableFormatter_1 : public ::MessagePack::Formatters::CollectionFormatterBase_3<T, ::Il2CppArray<T>*, ::System::Collections::Generic::IEnumerable_1<T>*>
	{
	public:
	};
}
