#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Immutable { template <typename T1, typename T2> class ImmutableSortedDictionary_2_Node___c; }

namespace System::Collections::Immutable
{
	inline static constexpr unsigned int ImmutableSortedDictionary_2_Node___c_TypeDefinitionIndex = 7030;

	template <typename TKey, typename TValue>
	class ImmutableSortedDictionary_2_Node___c : public ::System::Object
	{
	public:
		static ::System::Collections::Immutable::ImmutableSortedDictionary_2_Node___c<TKey, TValue>** StaticGet___9()
		{
			return (::System::Collections::Immutable::ImmutableSortedDictionary_2_Node___c<TKey, TValue>**)Il2CppClass::FromTypeDefinitionIndex(ImmutableSortedDictionary_2_Node___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>, TKey>** StaticGet___9__30_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>, TKey>**)Il2CppClass::FromTypeDefinitionIndex(ImmutableSortedDictionary_2_Node___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>, TValue>** StaticGet___9__32_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>, TValue>**)Il2CppClass::FromTypeDefinitionIndex(ImmutableSortedDictionary_2_Node___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
