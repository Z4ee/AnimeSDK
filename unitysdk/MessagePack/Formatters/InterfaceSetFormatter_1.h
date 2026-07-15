#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/Formatters/CollectionFormatterBase_3.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class ISet_1; }

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int InterfaceSetFormatter_1_TypeDefinitionIndex = 7370;

	template <typename T>
	class InterfaceSetFormatter_1 : public ::MessagePack::Formatters::CollectionFormatterBase_3<T, ::System::Collections::Generic::HashSet_1<T>*, ::System::Collections::Generic::ISet_1<T>*>
	{
	public:
	};
}
