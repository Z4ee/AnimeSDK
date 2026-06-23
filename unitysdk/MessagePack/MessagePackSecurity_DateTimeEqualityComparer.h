#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackSecurity_CollisionResistantHasher_1.h"
#include "unitysdk/System/DateTime.h"

#define MESSAGEPACK_MESSAGEPACKSECURITY_DATETIMEEQUALITYCOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1D536120)
#define MESSAGEPACK_MESSAGEPACKSECURITY_DATETIMEEQUALITYCOMPARER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D536220)
#define MESSAGEPACK_MESSAGEPACKSECURITY_DATETIMEEQUALITYCOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5361C0)

namespace MessagePack
{
	inline static constexpr unsigned int MessagePackSecurity_DateTimeEqualityComparer_TypeDefinitionIndex = 30412;

	class MessagePackSecurity_DateTimeEqualityComparer : public ::MessagePack::MessagePackSecurity_CollisionResistantHasher_1<::System::DateTime>
	{
	public:
		static ::MessagePack::MessagePackSecurity_DateTimeEqualityComparer** StaticGet_Instance()
		{
			return (::MessagePack::MessagePackSecurity_DateTimeEqualityComparer**)Il2CppClass::FromTypeDefinitionIndex(MessagePackSecurity_DateTimeEqualityComparer_TypeDefinitionIndex)->GetStaticField(0x23790);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSECURITY_DATETIMEEQUALITYCOMPARER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSECURITY_DATETIMEEQUALITYCOMPARER__CCTOR_OFFSET))();
		}

		::System::Int32 GetHashCode(::System::DateTime value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSECURITY_DATETIMEEQUALITYCOMPARER_GETHASHCODE_OFFSET))(this, value);
		}
	};
}
