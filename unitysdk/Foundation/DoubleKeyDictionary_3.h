#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/DoubleKeyDictionary_3_EnumeratorV2.h"
#include "unitysdk/Foundation/SDoubleKeyValue_3.h"
#include "unitysdk/System/Object.h"

namespace Foundation { template <typename T1, typename T2, typename T3> class DoubleKeyDictionary_3; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

namespace Foundation
{
	inline static constexpr unsigned int DoubleKeyDictionary_3_TypeDefinitionIndex = 7806;

	template <typename TKey, typename TSubKey, typename TValue>
	class DoubleKeyDictionary_3 : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<TKey, ::System::Collections::Generic::Dictionary_2<TSubKey, TValue>*>* m_oItems; // 0x0
		::System::Int32 _Count_k__BackingField; // 0x0
	};
}
