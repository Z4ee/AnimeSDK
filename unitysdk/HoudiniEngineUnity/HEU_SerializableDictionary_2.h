#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_SerializableDictionary_2_TypeDefinitionIndex = 38504;

	template <typename TKey, typename TValue>
	class HEU_SerializableDictionary_2 : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<TKey, TValue>* _dictionary; // 0x0
		::Il2CppArray<TKey>* _keys; // 0x0
		::Il2CppArray<TValue>* _values; // 0x0
	};
}
