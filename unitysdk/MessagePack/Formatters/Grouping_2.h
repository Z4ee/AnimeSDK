#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int Grouping_2_TypeDefinitionIndex = 7358;

	template <typename TKey, typename TElement>
	class Grouping_2 : public ::System::Object
	{
	public:
		TKey key; // 0x0
		::System::Collections::Generic::IEnumerable_1<TElement>* elements; // 0x0
	};
}
