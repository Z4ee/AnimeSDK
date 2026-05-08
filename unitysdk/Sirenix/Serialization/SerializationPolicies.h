#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Sirenix::Serialization { class ISerializationPolicy; }
namespace System { class String; }

#define SIRENIX_SERIALIZATION_SERIALIZATIONPOLICIES_GET_EVERYTHING_OFFSET UNITYSDK_OFFSET(0x1B652E00)
#define SIRENIX_SERIALIZATION_SERIALIZATIONPOLICIES_GET_STRICT_OFFSET UNITYSDK_OFFSET(0x1B650B70)
#define SIRENIX_SERIALIZATION_SERIALIZATIONPOLICIES_GET_UNITY_OFFSET UNITYSDK_OFFSET(0x1B6530A0)
#define SIRENIX_SERIALIZATION_SERIALIZATIONPOLICIES_TRYGETBYID_OFFSET UNITYSDK_OFFSET(0x1B652CC0)
#define SIRENIX_SERIALIZATION_SERIALIZATIONPOLICIES__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B6533C0)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int SerializationPolicies_TypeDefinitionIndex = 7400;

	class SerializationPolicies : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet_LOCK()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(SerializationPolicies_TypeDefinitionIndex)->GetStaticField(0x6490);
		}
		static ::Sirenix::Serialization::ISerializationPolicy** StaticGet_strictPolicy()
		{
			return (::Sirenix::Serialization::ISerializationPolicy**)Il2CppClass::FromTypeDefinitionIndex(SerializationPolicies_TypeDefinitionIndex)->GetStaticField(0x6498);
		}
		static ::Sirenix::Serialization::ISerializationPolicy** StaticGet_everythingPolicy()
		{
			return (::Sirenix::Serialization::ISerializationPolicy**)Il2CppClass::FromTypeDefinitionIndex(SerializationPolicies_TypeDefinitionIndex)->GetStaticField(0x64A0);
		}
		static ::Sirenix::Serialization::ISerializationPolicy** StaticGet_unityPolicy()
		{
			return (::Sirenix::Serialization::ISerializationPolicy**)Il2CppClass::FromTypeDefinitionIndex(SerializationPolicies_TypeDefinitionIndex)->GetStaticField(0x64A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONPOLICIES__CCTOR_OFFSET))();
		}

		static ::System::Boolean TryGetByID(::System::String* name, ::Sirenix::Serialization::ISerializationPolicy*& policy)
		{
			return ((::System::Boolean(*)(::System::String*, ::Sirenix::Serialization::ISerializationPolicy*&))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONPOLICIES_TRYGETBYID_OFFSET))(name, policy);
		}

		static ::Sirenix::Serialization::ISerializationPolicy* get_Everything()
		{
			return ((::Sirenix::Serialization::ISerializationPolicy*(*)())((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONPOLICIES_GET_EVERYTHING_OFFSET))();
		}

		static ::Sirenix::Serialization::ISerializationPolicy* get_Unity()
		{
			return ((::Sirenix::Serialization::ISerializationPolicy*(*)())((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONPOLICIES_GET_UNITY_OFFSET))();
		}

		static ::Sirenix::Serialization::ISerializationPolicy* get_Strict()
		{
			return ((::Sirenix::Serialization::ISerializationPolicy*(*)())((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONPOLICIES_GET_STRICT_OFFSET))();
		}
	};
}
