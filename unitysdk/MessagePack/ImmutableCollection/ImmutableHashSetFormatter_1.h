#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/Formatters/CollectionFormatterBase_4.h"
#include "unitysdk/System/Collections/Immutable/ImmutableHashSet_1_Enumerator.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace System::Collections::Immutable { template <typename T> class ImmutableHashSet_1; }
namespace System::Collections::Immutable { template <typename T> class ImmutableHashSet_1_Builder; }

namespace MessagePack::ImmutableCollection
{
	inline static constexpr unsigned int ImmutableHashSetFormatter_1_TypeDefinitionIndex = 7317;

	template <typename T>
	class ImmutableHashSetFormatter_1 : public ::MessagePack::Formatters::CollectionFormatterBase_4<T, ::System::Collections::Immutable::ImmutableHashSet_1_Builder<T>*, ::System::Collections::Immutable::ImmutableHashSet_1_Enumerator<T>, ::System::Collections::Immutable::ImmutableHashSet_1<T>*>
	{
	public:
	};
}
