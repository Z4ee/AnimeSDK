#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseFormatter_1.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }
namespace System::Reflection { class ConstructorInfo; }

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int DerivedDictionaryFormatter_3_TypeDefinitionIndex = 7457;

	template <typename TDictionary, typename TKey, typename TValue>
	class DerivedDictionaryFormatter_3 : public ::Sirenix::Serialization::BaseFormatter_1<TDictionary>
	{
	public:
		static ::System::Boolean* StaticGet_KeyIsValueType()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(DerivedDictionaryFormatter_3_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::IEqualityComparer_1<TKey>*>** StaticGet_EqualityComparerSerializer()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::IEqualityComparer_1<TKey>*>**)Il2CppClass::FromTypeDefinitionIndex(DerivedDictionaryFormatter_3_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::Sirenix::Serialization::Serializer_1<TKey>** StaticGet_KeyReaderWriter()
		{
			return (::Sirenix::Serialization::Serializer_1<TKey>**)Il2CppClass::FromTypeDefinitionIndex(DerivedDictionaryFormatter_3_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::Sirenix::Serialization::Serializer_1<TValue>** StaticGet_ValueReaderWriter()
		{
			return (::Sirenix::Serialization::Serializer_1<TValue>**)Il2CppClass::FromTypeDefinitionIndex(DerivedDictionaryFormatter_3_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Reflection::ConstructorInfo** StaticGet_ComparerConstructor()
		{
			return (::System::Reflection::ConstructorInfo**)Il2CppClass::FromTypeDefinitionIndex(DerivedDictionaryFormatter_3_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
