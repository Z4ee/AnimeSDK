#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/Dictionary_2.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Runtime::Serialization { class SerializationInfo; }

namespace MiHoYo::SDK::HoYoUI
{
	inline static constexpr unsigned int SerializableDictionaryBase_Dictionary_2_TypeDefinitionIndex = 44955;

	template <typename TKey, typename TValue>
	class SerializableDictionaryBase_Dictionary_2 : public ::System::Collections::Generic::Dictionary_2<TKey, TValue>
	{
	public:
	};
}
