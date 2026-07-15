#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/HoYoUI/SerializableDictionaryBase.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace MiHoYo::SDK::HoYoUI { template <typename T1, typename T2> class SerializableDictionaryBase_Dictionary_2; }
namespace System { class Array; }
namespace System { class Object; }
namespace System::Collections { class ICollection; }
namespace System::Collections { class IDictionaryEnumerator; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Runtime::Serialization { class SerializationInfo; }

namespace MiHoYo::SDK::HoYoUI
{
	inline static constexpr unsigned int SerializableDictionaryBase_2_TypeDefinitionIndex = 44956;

	template <typename TKey, typename TValue>
	class SerializableDictionaryBase_2 : public ::MiHoYo::SDK::HoYoUI::SerializableDictionaryBase
	{
	public:
		::MiHoYo::SDK::HoYoUI::SerializableDictionaryBase_Dictionary_2<TKey, TValue>* m_dict; // 0x0
		::Il2CppArray<TKey>* m_keys; // 0x0
		::Il2CppArray<TValue>* m_values; // 0x0
	};
}
