#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/Formatters/CollectionFormatterBase_3.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Linq { template <typename T1, typename T2> class IGrouping_2; }
namespace System::Linq { template <typename T1, typename T2> class ILookup_2; }

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int InterfaceLookupFormatter_2_TypeDefinitionIndex = 7357;

	template <typename TKey, typename TElement>
	class InterfaceLookupFormatter_2 : public ::MessagePack::Formatters::CollectionFormatterBase_3<::System::Linq::IGrouping_2<TKey, TElement>*, ::System::Collections::Generic::Dictionary_2<TKey, ::System::Linq::IGrouping_2<TKey, TElement>*>*, ::System::Linq::ILookup_2<TKey, TElement>*>
	{
	public:
	};
}
