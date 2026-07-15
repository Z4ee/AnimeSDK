#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/DictionaryEntry.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2___c; }
namespace System { template <typename T1, typename T2> class Func_2; }

namespace Google::Protobuf::Collections
{
	inline static constexpr unsigned int MapField_2___c_TypeDefinitionIndex = 5588;

	template <typename TKey, typename TValue>
	class MapField_2___c : public ::System::Object
	{
	public:
		static ::Google::Protobuf::Collections::MapField_2___c<TKey, TValue>** StaticGet___9()
		{
			return (::Google::Protobuf::Collections::MapField_2___c<TKey, TValue>**)Il2CppClass::FromTypeDefinitionIndex(MapField_2___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>, TKey>** StaticGet___9__14_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>, TKey>**)Il2CppClass::FromTypeDefinitionIndex(MapField_2___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>, TValue>** StaticGet___9__16_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>, TValue>**)Il2CppClass::FromTypeDefinitionIndex(MapField_2___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>, ::System::Collections::DictionaryEntry>** StaticGet___9__40_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>, ::System::Collections::DictionaryEntry>**)Il2CppClass::FromTypeDefinitionIndex(MapField_2___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
