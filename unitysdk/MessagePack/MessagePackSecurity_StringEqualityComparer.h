#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackSecurity_CollisionResistantHasher_1.h"

namespace System { class String; }

#define MESSAGEPACK_MESSAGEPACKSECURITY_STRINGEQUALITYCOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DB997A0)
#define MESSAGEPACK_MESSAGEPACKSECURITY_STRINGEQUALITYCOMPARER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DB998D0)
#define MESSAGEPACK_MESSAGEPACKSECURITY_STRINGEQUALITYCOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB99870)

namespace MessagePack
{
	inline static constexpr unsigned int MessagePackSecurity_StringEqualityComparer_TypeDefinitionIndex = 30415;

	class MessagePackSecurity_StringEqualityComparer : public ::MessagePack::MessagePackSecurity_CollisionResistantHasher_1<::System::String*>
	{
	public:
		static ::MessagePack::MessagePackSecurity_StringEqualityComparer** StaticGet_Instance()
		{
			return (::MessagePack::MessagePackSecurity_StringEqualityComparer**)Il2CppClass::FromTypeDefinitionIndex(MessagePackSecurity_StringEqualityComparer_TypeDefinitionIndex)->GetStaticField(0x24820);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSECURITY_STRINGEQUALITYCOMPARER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSECURITY_STRINGEQUALITYCOMPARER__CCTOR_OFFSET))();
		}

		::System::Int32 GetHashCode(::System::String* value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSECURITY_STRINGEQUALITYCOMPARER_GETHASHCODE_OFFSET))(this, value);
		}
	};
}
