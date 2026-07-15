#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/Formatters/CollectionFormatterBase_4.h"
#include "unitysdk/System/Collections/Generic/Queue_1_Enumerator.h"
#include "unitysdk/System/Nullable_1.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int QueueFormatter_1_TypeDefinitionIndex = 7349;

	template <typename T>
	class QueueFormatter_1 : public ::MessagePack::Formatters::CollectionFormatterBase_4<T, ::System::Collections::Generic::Queue_1<T>*, ::System::Collections::Generic::Queue_1_Enumerator<T>, ::System::Collections::Generic::Queue_1<T>*>
	{
	public:
	};
}
