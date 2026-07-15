#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/Formatters/CollectionFormatterBase_4.h"
#include "unitysdk/System/Collections/Generic/LinkedList_1_Enumerator.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace System::Collections::Generic { template <typename T> class LinkedList_1; }

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int LinkedListFormatter_1_TypeDefinitionIndex = 7348;

	template <typename T>
	class LinkedListFormatter_1 : public ::MessagePack::Formatters::CollectionFormatterBase_4<T, ::System::Collections::Generic::LinkedList_1<T>*, ::System::Collections::Generic::LinkedList_1_Enumerator<T>, ::System::Collections::Generic::LinkedList_1<T>*>
	{
	public:
	};
}
