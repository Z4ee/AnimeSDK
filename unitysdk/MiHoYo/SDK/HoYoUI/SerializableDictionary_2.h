#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/HoYoUI/SerializableDictionaryBase_2.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Runtime::Serialization { class SerializationInfo; }

namespace MiHoYo::SDK::HoYoUI
{
	inline static constexpr unsigned int SerializableDictionary_2_TypeDefinitionIndex = 44959;

	template <typename TKey, typename TValue>
	class SerializableDictionary_2 : public ::MiHoYo::SDK::HoYoUI::SerializableDictionaryBase_2<TKey, TValue>
	{
	public:
	};
}
