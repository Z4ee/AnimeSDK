#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

namespace RPG
{
	inline static constexpr unsigned int EmptyDictionary_2_TypeDefinitionIndex = 6742;

	template <typename TKey, typename TValue>
	class EmptyDictionary_2 : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<TKey, TValue>** StaticGet_Instance()
		{
			return (::System::Collections::Generic::Dictionary_2<TKey, TValue>**)Il2CppClass::FromTypeDefinitionIndex(EmptyDictionary_2_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
