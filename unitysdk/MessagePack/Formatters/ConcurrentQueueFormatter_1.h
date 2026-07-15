#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/Formatters/CollectionFormatterBase_2.h"
#include "unitysdk/System/Nullable_1.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace System::Collections::Concurrent { template <typename T> class ConcurrentQueue_1; }

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int ConcurrentQueueFormatter_1_TypeDefinitionIndex = 7372;

	template <typename T>
	class ConcurrentQueueFormatter_1 : public ::MessagePack::Formatters::CollectionFormatterBase_2<T, ::System::Collections::Concurrent::ConcurrentQueue_1<T>*>
	{
	public:
	};
}
