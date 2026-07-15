#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/Formatters/CollectionFormatterBase_4.h"
#include "unitysdk/System/Collections/Generic/HashSet_1_Enumerator.h"
#include "unitysdk/System/Nullable_1.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int HashSetFormatter_1_TypeDefinitionIndex = 7351;

	template <typename T>
	class HashSetFormatter_1 : public ::MessagePack::Formatters::CollectionFormatterBase_4<T, ::System::Collections::Generic::HashSet_1<T>*, ::System::Collections::Generic::HashSet_1_Enumerator<T>, ::System::Collections::Generic::HashSet_1<T>*>
	{
	public:
	};
}
