#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Array; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class SortedList_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

namespace System::Collections::Generic
{
	inline static constexpr unsigned int SortedList_2_KeyList_TypeDefinitionIndex = 3031;

	template <typename TKey, typename TValue>
	class SortedList_2_KeyList : public ::System::Object
	{
	public:
		::System::Collections::Generic::SortedList_2<TKey, TValue>* _dict; // 0x0
	};
}
