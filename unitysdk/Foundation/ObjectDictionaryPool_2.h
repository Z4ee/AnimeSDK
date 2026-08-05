#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation { template <typename T1, typename T2> class DictionaryPoolInstance_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }

namespace Foundation
{
	inline static constexpr unsigned int ObjectDictionaryPool_2_TypeDefinitionIndex = 8233;

	template <typename TKey, typename TValue>
	class ObjectDictionaryPool_2 : public ::System::Object
	{
	public:
		static ::Foundation::DictionaryPoolInstance_2<TKey, TValue>** StaticGet__cache_k__BackingField()
		{
			return (::Foundation::DictionaryPoolInstance_2<TKey, TValue>**)Il2CppClass::FromTypeDefinitionIndex(ObjectDictionaryPool_2_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
