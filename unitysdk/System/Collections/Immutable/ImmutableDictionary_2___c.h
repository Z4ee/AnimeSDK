#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Collections/Immutable/ImmutableDictionary_2_HashBucket.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Immutable { template <typename T1, typename T2> class ImmutableDictionary_2___c; }

namespace System::Collections::Immutable
{
	inline static constexpr unsigned int ImmutableDictionary_2___c_TypeDefinitionIndex = 7010;

	template <typename TKey, typename TValue>
	class ImmutableDictionary_2___c : public ::System::Object
	{
	public:
		static ::System::Collections::Immutable::ImmutableDictionary_2___c<TKey, TValue>** StaticGet___9()
		{
			return (::System::Collections::Immutable::ImmutableDictionary_2___c<TKey, TValue>**)Il2CppClass::FromTypeDefinitionIndex(ImmutableDictionary_2___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
