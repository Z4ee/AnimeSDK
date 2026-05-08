#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation { template <typename T1, typename T2> class DictionaryPool_2___c; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

namespace Foundation
{
	inline static constexpr unsigned int DictionaryPool_2___c_TypeDefinitionIndex = 7911;

	template <typename TKey, typename TValue>
	class DictionaryPool_2___c : public ::System::Object
	{
	public:
		static ::Foundation::DictionaryPool_2___c<TKey, TValue>** StaticGet___9()
		{
			return (::Foundation::DictionaryPool_2___c<TKey, TValue>**)Il2CppClass::FromTypeDefinitionIndex(DictionaryPool_2___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
