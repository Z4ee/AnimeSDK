#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackSecurity_CollisionResistantHasherUnmanaged_1.h"
#include "unitysdk/System/DateTimeOffset.h"

#define MESSAGEPACK_MESSAGEPACKSECURITY_DATETIMEOFFSETEQUALITYCOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x181810B0)
#define MESSAGEPACK_MESSAGEPACKSECURITY_DATETIMEOFFSETEQUALITYCOMPARER__CCTOR_OFFSET UNITYSDK_OFFSET(0x181811A0)
#define MESSAGEPACK_MESSAGEPACKSECURITY_DATETIMEOFFSETEQUALITYCOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x18181140)

namespace MessagePack
{
	inline static constexpr unsigned int MessagePackSecurity_DateTimeOffsetEqualityComparer_TypeDefinitionIndex = 7163;

	class MessagePackSecurity_DateTimeOffsetEqualityComparer : public ::MessagePack::MessagePackSecurity_CollisionResistantHasherUnmanaged_1<::System::DateTimeOffset>
	{
	public:
		static ::MessagePack::MessagePackSecurity_DateTimeOffsetEqualityComparer** StaticGet_Instance()
		{
			return (::MessagePack::MessagePackSecurity_DateTimeOffsetEqualityComparer**)Il2CppClass::FromTypeDefinitionIndex(MessagePackSecurity_DateTimeOffsetEqualityComparer_TypeDefinitionIndex)->GetStaticField(0xA110);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSECURITY_DATETIMEOFFSETEQUALITYCOMPARER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSECURITY_DATETIMEOFFSETEQUALITYCOMPARER__CCTOR_OFFSET))();
		}

		::System::Int32 GetHashCode(::System::DateTimeOffset a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::DateTimeOffset))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSECURITY_DATETIMEOFFSETEQUALITYCOMPARER_GETHASHCODE_OFFSET))(this, a1);
		}
	};
}
