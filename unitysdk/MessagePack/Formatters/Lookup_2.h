#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Linq { template <typename T1, typename T2> class IGrouping_2; }

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int Lookup_2_TypeDefinitionIndex = 7359;

	template <typename TKey, typename TElement>
	class Lookup_2 : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<TKey, ::System::Linq::IGrouping_2<TKey, TElement>*>* groupings; // 0x0
	};
}
