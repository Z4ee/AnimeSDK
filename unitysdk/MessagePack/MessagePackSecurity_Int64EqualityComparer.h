#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackSecurity_CollisionResistantHasher_1.h"

#define MESSAGEPACK_MESSAGEPACKSECURITY_INT64EQUALITYCOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1D6E3E60)
#define MESSAGEPACK_MESSAGEPACKSECURITY_INT64EQUALITYCOMPARER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D6E3F20)
#define MESSAGEPACK_MESSAGEPACKSECURITY_INT64EQUALITYCOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6E3EC0)

namespace MessagePack
{
	inline static constexpr unsigned int MessagePackSecurity_Int64EqualityComparer_TypeDefinitionIndex = 30419;

	class MessagePackSecurity_Int64EqualityComparer : public ::MessagePack::MessagePackSecurity_CollisionResistantHasher_1<::System::Int64>
	{
	public:
		static ::MessagePack::MessagePackSecurity_Int64EqualityComparer** StaticGet_Instance()
		{
			return (::MessagePack::MessagePackSecurity_Int64EqualityComparer**)Il2CppClass::FromTypeDefinitionIndex(MessagePackSecurity_Int64EqualityComparer_TypeDefinitionIndex)->GetStaticField(0x24C10);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSECURITY_INT64EQUALITYCOMPARER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSECURITY_INT64EQUALITYCOMPARER__CCTOR_OFFSET))();
		}

		::System::Int32 GetHashCode(::System::Int64 value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSECURITY_INT64EQUALITYCOMPARER_GETHASHCODE_OFFSET))(this, value);
		}
	};
}
