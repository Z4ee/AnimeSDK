#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/Formatters/CollectionFormatterBase_4.h"
#include "unitysdk/System/Collections/Generic/Stack_1_Enumerator.h"
#include "unitysdk/System/Nullable_1.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int StackFormatter_1_TypeDefinitionIndex = 7350;

	template <typename T>
	class StackFormatter_1 : public ::MessagePack::Formatters::CollectionFormatterBase_4<T, ::Il2CppArray<T>*, ::System::Collections::Generic::Stack_1_Enumerator<T>, ::System::Collections::Generic::Stack_1<T>*>
	{
	public:
	};
}
