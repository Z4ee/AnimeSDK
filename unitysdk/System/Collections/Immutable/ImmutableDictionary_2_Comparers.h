#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Collections/Immutable/ImmutableDictionary_2_HashBucket.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }
namespace System::Collections::Immutable { template <typename T1, typename T2> class ImmutableDictionary_2_Comparers; }

namespace System::Collections::Immutable
{
	inline static constexpr unsigned int ImmutableDictionary_2_Comparers_TypeDefinitionIndex = 7001;

	template <typename TKey, typename TValue>
	class ImmutableDictionary_2_Comparers : public ::System::Object
	{
	public:
		static ::System::Collections::Immutable::ImmutableDictionary_2_Comparers<TKey, TValue>** StaticGet_Default()
		{
			return (::System::Collections::Immutable::ImmutableDictionary_2_Comparers<TKey, TValue>**)Il2CppClass::FromTypeDefinitionIndex(ImmutableDictionary_2_Comparers_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::System::Collections::Generic::IEqualityComparer_1<TKey>* _keyComparer; // 0x0
		::System::Collections::Generic::IEqualityComparer_1<TValue>* _valueComparer; // 0x0
	};
}
