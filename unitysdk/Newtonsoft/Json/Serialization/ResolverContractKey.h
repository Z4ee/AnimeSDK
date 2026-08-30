#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class Type; }

#define NEWTONSOFT_JSON_SERIALIZATION_RESOLVERCONTRACTKEY_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x84D030)
#define NEWTONSOFT_JSON_SERIALIZATION_RESOLVERCONTRACTKEY_EQUALS_OFFSET UNITYSDK_OFFSET(0x3AAA730)
#define NEWTONSOFT_JSON_SERIALIZATION_RESOLVERCONTRACTKEY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3AAA720)
#define NEWTONSOFT_JSON_SERIALIZATION_RESOLVERCONTRACTKEY__CTOR_OFFSET UNITYSDK_OFFSET(0x6B85C0)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int ResolverContractKey_TypeDefinitionIndex = 9645;

	struct alignas(8) ResolverContractKey
	{
		::System::Type* _resolverType; // 0x10
		::System::Type* _contractType; // 0x18

		::System::Void _ctor(::System::Type* a1, ::System::Type* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_RESOLVERCONTRACTKEY__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_RESOLVERCONTRACTKEY_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_RESOLVERCONTRACTKEY_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::Newtonsoft::Json::Serialization::ResolverContractKey a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Newtonsoft::Json::Serialization::ResolverContractKey))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_RESOLVERCONTRACTKEY_EQUALS_1_OFFSET))(this, a1);
		}
	};
}
