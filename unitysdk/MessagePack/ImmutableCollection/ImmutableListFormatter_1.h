#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/Formatters/CollectionFormatterBase_4.h"
#include "unitysdk/System/Collections/Immutable/ImmutableList_1_Enumerator.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace System::Collections::Immutable { template <typename T> class ImmutableList_1; }
namespace System::Collections::Immutable { template <typename T> class ImmutableList_1_Builder; }

namespace MessagePack::ImmutableCollection
{
	inline static constexpr unsigned int ImmutableListFormatter_1_TypeDefinitionIndex = 7315;

	template <typename T>
	class ImmutableListFormatter_1 : public ::MessagePack::Formatters::CollectionFormatterBase_4<T, ::System::Collections::Immutable::ImmutableList_1_Builder<T>*, ::System::Collections::Immutable::ImmutableList_1_Enumerator<T>, ::System::Collections::Immutable::ImmutableList_1<T>*>
	{
	public:
	};
}
