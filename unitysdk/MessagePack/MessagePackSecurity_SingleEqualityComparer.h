#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackSecurity_CollisionResistantHasherUnmanaged_1.h"

#define MESSAGEPACK_MESSAGEPACKSECURITY_SINGLEEQUALITYCOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x173751B0)
#define MESSAGEPACK_MESSAGEPACKSECURITY_SINGLEEQUALITYCOMPARER__CCTOR_OFFSET UNITYSDK_OFFSET(0x17375280)
#define MESSAGEPACK_MESSAGEPACKSECURITY_SINGLEEQUALITYCOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x17375220)

namespace MessagePack
{
	inline static constexpr unsigned int MessagePackSecurity_SingleEqualityComparer_TypeDefinitionIndex = 9257;

	class MessagePackSecurity_SingleEqualityComparer : public ::MessagePack::MessagePackSecurity_CollisionResistantHasherUnmanaged_1<::System::Single>
	{
	public:
		static ::MessagePack::MessagePackSecurity_SingleEqualityComparer** StaticGet_Instance()
		{
			return (::MessagePack::MessagePackSecurity_SingleEqualityComparer**)Il2CppClass::FromTypeDefinitionIndex(MessagePackSecurity_SingleEqualityComparer_TypeDefinitionIndex)->GetStaticField(0x44AA0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSECURITY_SINGLEEQUALITYCOMPARER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSECURITY_SINGLEEQUALITYCOMPARER__CCTOR_OFFSET))();
		}

		::System::Int32 GetHashCode(::System::Single value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSECURITY_SINGLEEQUALITYCOMPARER_GETHASHCODE_OFFSET))(this, value);
		}
	};
}
