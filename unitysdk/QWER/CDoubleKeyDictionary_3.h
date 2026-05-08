#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/QWER/SDoubleKeyValue_3.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

namespace QWER
{
	inline static constexpr unsigned int CDoubleKeyDictionary_3_TypeDefinitionIndex = 8568;

	template <typename TKey, typename TSubKey, typename TValue>
	class CDoubleKeyDictionary_3 : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<TKey, ::System::Collections::Generic::Dictionary_2<TSubKey, TValue>*>* m_oItems; // 0x0
		::System::Int32 _Count_k__BackingField; // 0x0
	};
}
