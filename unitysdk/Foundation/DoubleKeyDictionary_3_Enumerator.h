#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/SDoubleKeyValue_3.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace Foundation { template <typename T1, typename T2, typename T3> class DoubleKeyDictionary_3; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

namespace Foundation
{
	inline static constexpr unsigned int DoubleKeyDictionary_3_Enumerator_TypeDefinitionIndex = 8123;

	template <typename TKey, typename TSubKey, typename TValue>
	class DoubleKeyDictionary_3_Enumerator : public ::System::Object
	{
	public:
		::Foundation::DoubleKeyDictionary_3<TKey, TSubKey, TValue>* m_oOwner; // 0x0
		::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey, ::System::Collections::Generic::Dictionary_2<TSubKey, TValue>*>>* m_oEnumerator1; // 0x0
		::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TSubKey, TValue>>* m_oEnumerator2; // 0x0
	};
}
