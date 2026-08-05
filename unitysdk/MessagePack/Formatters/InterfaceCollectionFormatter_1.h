#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/Formatters/CollectionFormatterBase_3.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int InterfaceCollectionFormatter_1_TypeDefinitionIndex = 30325;

	template <typename T>
	class InterfaceCollectionFormatter_1 : public ::MessagePack::Formatters::CollectionFormatterBase_3<T, ::Il2CppArray<T>*, ::System::Collections::Generic::ICollection_1<T>*>
	{
	public:
	};
}
