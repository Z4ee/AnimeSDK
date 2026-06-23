#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/Serializer_1.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { class ISerializationPolicy; }
namespace Sirenix::Serialization { template <typename T> class IFormatter_1; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int ComplexTypeSerializer_1_TypeDefinitionIndex = 7540;

	template <typename T>
	class ComplexTypeSerializer_1 : public ::Sirenix::Serialization::Serializer_1<T>
	{
	public:
		static ::System::Boolean* StaticGet_ComplexTypeMayBeBoxedValueType()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ComplexTypeSerializer_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Boolean* StaticGet_ComplexTypeIsAbstract()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ComplexTypeSerializer_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Boolean* StaticGet_ComplexTypeIsNullable()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ComplexTypeSerializer_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Boolean* StaticGet_ComplexTypeIsIEqualityComparer()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ComplexTypeSerializer_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Boolean* StaticGet_ComplexTypeIsValueType()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ComplexTypeSerializer_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Type** StaticGet_TypeOf_T()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(ComplexTypeSerializer_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Boolean* StaticGet_AllowDeserializeInvalidDataForT()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ComplexTypeSerializer_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Collections::Generic::Dictionary_2<::Sirenix::Serialization::ISerializationPolicy*, ::Sirenix::Serialization::IFormatter_1<T>*>** StaticGet_FormattersByPolicy()
		{
			return (::System::Collections::Generic::Dictionary_2<::Sirenix::Serialization::ISerializationPolicy*, ::Sirenix::Serialization::IFormatter_1<T>*>**)Il2CppClass::FromTypeDefinitionIndex(ComplexTypeSerializer_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Object** StaticGet_FormattersByPolicy_LOCK()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(ComplexTypeSerializer_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::Sirenix::Serialization::ISerializationPolicy** StaticGet_UnityPolicy()
		{
			return (::Sirenix::Serialization::ISerializationPolicy**)Il2CppClass::FromTypeDefinitionIndex(ComplexTypeSerializer_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::Sirenix::Serialization::ISerializationPolicy** StaticGet_StrictPolicy()
		{
			return (::Sirenix::Serialization::ISerializationPolicy**)Il2CppClass::FromTypeDefinitionIndex(ComplexTypeSerializer_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::Sirenix::Serialization::ISerializationPolicy** StaticGet_EverythingPolicy()
		{
			return (::Sirenix::Serialization::ISerializationPolicy**)Il2CppClass::FromTypeDefinitionIndex(ComplexTypeSerializer_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::Sirenix::Serialization::IFormatter_1<T>** StaticGet_UnityPolicyFormatter()
		{
			return (::Sirenix::Serialization::IFormatter_1<T>**)Il2CppClass::FromTypeDefinitionIndex(ComplexTypeSerializer_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::Sirenix::Serialization::IFormatter_1<T>** StaticGet_StrictPolicyFormatter()
		{
			return (::Sirenix::Serialization::IFormatter_1<T>**)Il2CppClass::FromTypeDefinitionIndex(ComplexTypeSerializer_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::Sirenix::Serialization::IFormatter_1<T>** StaticGet_EverythingPolicyFormatter()
		{
			return (::Sirenix::Serialization::IFormatter_1<T>**)Il2CppClass::FromTypeDefinitionIndex(ComplexTypeSerializer_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static T* StaticGet_DefaultEqualityComparer()
		{
			return (T*)Il2CppClass::FromTypeDefinitionIndex(ComplexTypeSerializer_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Boolean* StaticGet_WillDefaultEqualityComparerUseSerializableFormatter()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ComplexTypeSerializer_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Type** StaticGet_PredictedType()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(ComplexTypeSerializer_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::String** StaticGet_PredictedTypeName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ComplexTypeSerializer_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
