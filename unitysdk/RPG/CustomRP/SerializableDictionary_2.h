#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/SerializableDictionaryBase_3.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Runtime::Serialization { class SerializationInfo; }

namespace RPG::CustomRP
{
	inline static constexpr unsigned int SerializableDictionary_2_TypeDefinitionIndex = 49513;

	template <typename TKey, typename TValue>
	class SerializableDictionary_2 : public ::RPG::CustomRP::SerializableDictionaryBase_3<TKey, TValue, TValue>
	{
	public:
	};
}
