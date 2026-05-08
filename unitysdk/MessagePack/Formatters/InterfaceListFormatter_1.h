#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/Formatters/CollectionFormatterBase_3.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int InterfaceListFormatter_1_TypeDefinitionIndex = 26481;

	template <typename T>
	class InterfaceListFormatter_1 : public ::MessagePack::Formatters::CollectionFormatterBase_3<T, ::Il2CppArray<T>*, ::System::Collections::Generic::IList_1<T>*>
	{
	public:
	};
}
