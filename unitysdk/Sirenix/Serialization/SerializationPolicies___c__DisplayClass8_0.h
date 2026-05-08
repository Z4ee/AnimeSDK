#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System::Reflection { class MemberInfo; }

#define SIRENIX_SERIALIZATION_SERIALIZATIONPOLICIES___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4C71C0)
#define SIRENIX_SERIALIZATION_SERIALIZATIONPOLICIES___C__DISPLAYCLASS8_0__GET_UNITY_B__0_OFFSET UNITYSDK_OFFSET(0x1C4C71D0)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int SerializationPolicies___c__DisplayClass8_0_TypeDefinitionIndex = 7402;

	class SerializationPolicies___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::System::Type* tupleInterface; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONPOLICIES___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _get_Unity_b__0(::System::Reflection::MemberInfo* member)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONPOLICIES___C__DISPLAYCLASS8_0__GET_UNITY_B__0_OFFSET))(this, member);
		}
	};
}
