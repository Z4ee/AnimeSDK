#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackSecurity_CollisionResistantHasherUnmanaged_1.h"
#include "unitysdk/System/DateTime.h"

#define MESSAGEPACK_MESSAGEPACKSECURITY_DATETIMEEQUALITYCOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x18180F70)
#define MESSAGEPACK_MESSAGEPACKSECURITY_DATETIMEEQUALITYCOMPARER__CCTOR_OFFSET UNITYSDK_OFFSET(0x18181010)
#define MESSAGEPACK_MESSAGEPACKSECURITY_DATETIMEEQUALITYCOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x18180FB0)

namespace MessagePack
{
	inline static constexpr unsigned int MessagePackSecurity_DateTimeEqualityComparer_TypeDefinitionIndex = 7162;

	class MessagePackSecurity_DateTimeEqualityComparer : public ::MessagePack::MessagePackSecurity_CollisionResistantHasherUnmanaged_1<::System::DateTime>
	{
	public:
		static ::MessagePack::MessagePackSecurity_DateTimeEqualityComparer** StaticGet_Instance()
		{
			return (::MessagePack::MessagePackSecurity_DateTimeEqualityComparer**)Il2CppClass::FromTypeDefinitionIndex(MessagePackSecurity_DateTimeEqualityComparer_TypeDefinitionIndex)->GetStaticField(0xA100);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSECURITY_DATETIMEEQUALITYCOMPARER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSECURITY_DATETIMEEQUALITYCOMPARER__CCTOR_OFFSET))();
		}

		::System::Int32 GetHashCode(::System::DateTime a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSECURITY_DATETIMEEQUALITYCOMPARER_GETHASHCODE_OFFSET))(this, a1);
		}
	};
}
