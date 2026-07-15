#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/Dictionary_2_ValueCollection_Enumerator.h"
#include "unitysdk/System/Object.h"

namespace System { class Array; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

namespace System::Collections::Generic
{
	inline static constexpr unsigned int Dictionary_2_ValueCollection_TypeDefinitionIndex = 1533;

	template <typename TKey, typename TValue>
	class Dictionary_2_ValueCollection : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<TKey, TValue>* dictionary; // 0x0
	};
}
