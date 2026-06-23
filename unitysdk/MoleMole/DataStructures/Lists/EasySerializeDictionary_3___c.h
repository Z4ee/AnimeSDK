#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::DataStructures::Lists { template <typename T1, typename T2, typename T3> class EasySerializeDictionary_3___c; }
namespace System { template <typename T> class Comparison_1; }

namespace MoleMole::DataStructures::Lists
{
	inline static constexpr unsigned int EasySerializeDictionary_3___c_TypeDefinitionIndex = 28115;

	template <typename TKey, typename TValue, typename TEntry>
	class EasySerializeDictionary_3___c : public ::System::Object
	{
	public:
		static ::MoleMole::DataStructures::Lists::EasySerializeDictionary_3___c<TKey, TValue, TEntry>** StaticGet___9()
		{
			return (::MoleMole::DataStructures::Lists::EasySerializeDictionary_3___c<TKey, TValue, TEntry>**)Il2CppClass::FromTypeDefinitionIndex(EasySerializeDictionary_3___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Comparison_1<TEntry>** StaticGet___9__14_0()
		{
			return (::System::Comparison_1<TEntry>**)Il2CppClass::FromTypeDefinitionIndex(EasySerializeDictionary_3___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
