#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/Formatters/CollectionFormatterBase_3.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int InterfaceListFormatter2_1_TypeDefinitionIndex = 7353;

	template <typename T>
	class InterfaceListFormatter2_1 : public ::MessagePack::Formatters::CollectionFormatterBase_3<T, ::System::Collections::Generic::List_1<T>*, ::System::Collections::Generic::IList_1<T>*>
	{
	public:
	};
}
