#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class Type; }

#define NEWTONSOFT_JSON_SERIALIZATION_RESOLVERCONTRACTKEY_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x9F9030)
#define NEWTONSOFT_JSON_SERIALIZATION_RESOLVERCONTRACTKEY_EQUALS_OFFSET UNITYSDK_OFFSET(0x9F8FD0)
#define NEWTONSOFT_JSON_SERIALIZATION_RESOLVERCONTRACTKEY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9F8F60)
#define NEWTONSOFT_JSON_SERIALIZATION_RESOLVERCONTRACTKEY__CTOR_OFFSET UNITYSDK_OFFSET(0x2BDE80)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int ResolverContractKey_TypeDefinitionIndex = 7095;

	struct alignas(8) ResolverContractKey
	{
		::System::Type* _resolverType; // 0x10
		::System::Type* _contractType; // 0x18

		::System::Void _ctor(::System::Type* resolverType, ::System::Type* contractType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_RESOLVERCONTRACTKEY__CTOR_OFFSET))(this, resolverType, contractType);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_RESOLVERCONTRACTKEY_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_RESOLVERCONTRACTKEY_EQUALS_OFFSET))(this, obj);
		}

		::System::Boolean Equals_1(::Newtonsoft::Json::Serialization::ResolverContractKey other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Newtonsoft::Json::Serialization::ResolverContractKey))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_RESOLVERCONTRACTKEY_EQUALS_1_OFFSET))(this, other);
		}
	};
}
