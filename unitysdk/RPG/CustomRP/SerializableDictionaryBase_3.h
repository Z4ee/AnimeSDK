#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/SerializableDictionaryBase.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace RPG::CustomRP { template <typename T1, typename T2> class SerializableDictionaryBase_Dictionary_2; }
namespace System { class Array; }
namespace System { class Object; }
namespace System::Collections { class ICollection; }
namespace System::Collections { class IDictionaryEnumerator; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Runtime::Serialization { class SerializationInfo; }

namespace RPG::CustomRP
{
	inline static constexpr unsigned int SerializableDictionaryBase_3_TypeDefinitionIndex = 49510;

	template <typename TKey, typename TValue, typename TValueStorage>
	class SerializableDictionaryBase_3 : public ::RPG::CustomRP::SerializableDictionaryBase
	{
	public:
		::RPG::CustomRP::SerializableDictionaryBase_Dictionary_2<TKey, TValue>* m_dict; // 0x0
		::Il2CppArray<TKey>* m_keys; // 0x0
		::Il2CppArray<TValueStorage>* m_values; // 0x0
	};
}
