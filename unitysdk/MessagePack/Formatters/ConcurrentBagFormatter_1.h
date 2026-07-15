#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/Formatters/CollectionFormatterBase_2.h"
#include "unitysdk/System/Nullable_1.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace System::Collections::Concurrent { template <typename T> class ConcurrentBag_1; }

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int ConcurrentBagFormatter_1_TypeDefinitionIndex = 7371;

	template <typename T>
	class ConcurrentBagFormatter_1 : public ::MessagePack::Formatters::CollectionFormatterBase_2<T, ::System::Collections::Concurrent::ConcurrentBag_1<T>*>
	{
	public:
	};
}
