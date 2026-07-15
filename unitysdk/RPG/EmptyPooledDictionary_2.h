#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Collections::Pooled { template <typename T1, typename T2> class PooledDictionary_2; }

namespace RPG
{
	inline static constexpr unsigned int EmptyPooledDictionary_2_TypeDefinitionIndex = 6744;

	template <typename TKey, typename TValue>
	class EmptyPooledDictionary_2 : public ::System::Object
	{
	public:
		static ::Collections::Pooled::PooledDictionary_2<TKey, TValue>** StaticGet_Instance()
		{
			return (::Collections::Pooled::PooledDictionary_2<TKey, TValue>**)Il2CppClass::FromTypeDefinitionIndex(EmptyPooledDictionary_2_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
