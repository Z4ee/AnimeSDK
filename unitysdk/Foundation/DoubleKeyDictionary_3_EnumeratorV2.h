#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/SDoubleKeyValue_3.h"
#include "unitysdk/System/Collections/Generic/Dictionary_2_Enumerator.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation { template <typename T1, typename T2, typename T3> class DoubleKeyDictionary_3; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

namespace Foundation
{
	inline static constexpr unsigned int DoubleKeyDictionary_3_EnumeratorV2_TypeDefinitionIndex = 8364;

	template <typename TKey, typename TSubKey, typename TValue>
	struct DoubleKeyDictionary_3_EnumeratorV2
	{
		::Foundation::DoubleKeyDictionary_3<TKey, TSubKey, TValue>* _owner; // 0x0
		::System::Collections::Generic::Dictionary_2_Enumerator<TKey, ::System::Collections::Generic::Dictionary_2<TSubKey, TValue>*> _outerEnumerator; // 0x0
		::System::Collections::Generic::Dictionary_2_Enumerator<TSubKey, TValue> _innerEnumerator; // 0x0
		::System::Boolean _initialized; // 0x0
		::System::Boolean _outerMoved; // 0x0
		::Foundation::SDoubleKeyValue_3<TKey, TSubKey, TValue> _Current_k__BackingField; // 0x0
	};
}
