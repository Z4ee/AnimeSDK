#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackSecurity_CollisionResistantHasher_1.h"
#include "unitysdk/System/Guid.h"

#define MESSAGEPACK_MESSAGEPACKSECURITY_GUIDEQUALITYCOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1B4B1720)
#define MESSAGEPACK_MESSAGEPACKSECURITY_GUIDEQUALITYCOMPARER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B4B17E0)
#define MESSAGEPACK_MESSAGEPACKSECURITY_GUIDEQUALITYCOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4B1780)

namespace MessagePack
{
	inline static constexpr unsigned int MessagePackSecurity_GuidEqualityComparer_TypeDefinitionIndex = 26807;

	class MessagePackSecurity_GuidEqualityComparer : public ::MessagePack::MessagePackSecurity_CollisionResistantHasher_1<::System::Guid>
	{
	public:
		static ::MessagePack::MessagePackSecurity_GuidEqualityComparer** StaticGet_Instance()
		{
			return (::MessagePack::MessagePackSecurity_GuidEqualityComparer**)Il2CppClass::FromTypeDefinitionIndex(MessagePackSecurity_GuidEqualityComparer_TypeDefinitionIndex)->GetStaticField(0x20020);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSECURITY_GUIDEQUALITYCOMPARER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSECURITY_GUIDEQUALITYCOMPARER__CCTOR_OFFSET))();
		}

		::System::Int32 GetHashCode(::System::Guid value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Guid))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSECURITY_GUIDEQUALITYCOMPARER_GETHASHCODE_OFFSET))(this, value);
		}
	};
}
