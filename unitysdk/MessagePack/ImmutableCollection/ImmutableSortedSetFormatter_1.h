#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/Formatters/CollectionFormatterBase_4.h"
#include "unitysdk/System/Collections/Immutable/ImmutableSortedSet_1_Enumerator.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace System::Collections::Immutable { template <typename T> class ImmutableSortedSet_1; }
namespace System::Collections::Immutable { template <typename T> class ImmutableSortedSet_1_Builder; }

namespace MessagePack::ImmutableCollection
{
	inline static constexpr unsigned int ImmutableSortedSetFormatter_1_TypeDefinitionIndex = 7319;

	template <typename T>
	class ImmutableSortedSetFormatter_1 : public ::MessagePack::Formatters::CollectionFormatterBase_4<T, ::System::Collections::Immutable::ImmutableSortedSet_1_Builder<T>*, ::System::Collections::Immutable::ImmutableSortedSet_1_Enumerator<T>, ::System::Collections::Immutable::ImmutableSortedSet_1<T>*>
	{
	public:
	};
}
