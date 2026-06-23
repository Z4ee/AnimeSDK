#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackSecurity_CollisionResistantHasher_1.h"

#define MESSAGEPACK_MESSAGEPACKSECURITY_SINGLEEQUALITYCOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CC46780)
#define MESSAGEPACK_MESSAGEPACKSECURITY_SINGLEEQUALITYCOMPARER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CC469A0)
#define MESSAGEPACK_MESSAGEPACKSECURITY_SINGLEEQUALITYCOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC46940)

namespace MessagePack
{
	inline static constexpr unsigned int MessagePackSecurity_SingleEqualityComparer_TypeDefinitionIndex = 30420;

	class MessagePackSecurity_SingleEqualityComparer : public ::MessagePack::MessagePackSecurity_CollisionResistantHasher_1<::System::Single>
	{
	public:
		static ::MessagePack::MessagePackSecurity_SingleEqualityComparer** StaticGet_Instance()
		{
			return (::MessagePack::MessagePackSecurity_SingleEqualityComparer**)Il2CppClass::FromTypeDefinitionIndex(MessagePackSecurity_SingleEqualityComparer_TypeDefinitionIndex)->GetStaticField(0x23FC0);
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
