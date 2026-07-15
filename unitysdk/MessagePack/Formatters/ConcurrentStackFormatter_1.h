#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/Formatters/CollectionFormatterBase_3.h"
#include "unitysdk/System/Nullable_1.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace System::Collections::Concurrent { template <typename T> class ConcurrentStack_1; }

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int ConcurrentStackFormatter_1_TypeDefinitionIndex = 7373;

	template <typename T>
	class ConcurrentStackFormatter_1 : public ::MessagePack::Formatters::CollectionFormatterBase_3<T, ::Il2CppArray<T>*, ::System::Collections::Concurrent::ConcurrentStack_1<T>*>
	{
	public:
	};
}
