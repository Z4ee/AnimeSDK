#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/Formatters/CollectionFormatterBase_3.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int InterfaceCollectionFormatter2_1_TypeDefinitionIndex = 7354;

	template <typename T>
	class InterfaceCollectionFormatter2_1 : public ::MessagePack::Formatters::CollectionFormatterBase_3<T, ::System::Collections::Generic::List_1<T>*, ::System::Collections::Generic::ICollection_1<T>*>
	{
	public:
	};
}
