#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackSecurity_CollisionResistantHasherUnmanaged_1.h"

#define MESSAGEPACK_MESSAGEPACKSECURITY_DOUBLEEQUALITYCOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x15D76F70)
#define MESSAGEPACK_MESSAGEPACKSECURITY_DOUBLEEQUALITYCOMPARER__CCTOR_OFFSET UNITYSDK_OFFSET(0x15D77050)
#define MESSAGEPACK_MESSAGEPACKSECURITY_DOUBLEEQUALITYCOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x15D76FF0)

namespace MessagePack
{
	inline static constexpr unsigned int MessagePackSecurity_DoubleEqualityComparer_TypeDefinitionIndex = 9061;

	class MessagePackSecurity_DoubleEqualityComparer : public ::MessagePack::MessagePackSecurity_CollisionResistantHasherUnmanaged_1<::System::Double>
	{
	public:
		static ::MessagePack::MessagePackSecurity_DoubleEqualityComparer** StaticGet_Instance()
		{
			return (::MessagePack::MessagePackSecurity_DoubleEqualityComparer**)Il2CppClass::FromTypeDefinitionIndex(MessagePackSecurity_DoubleEqualityComparer_TypeDefinitionIndex)->GetStaticField(0x22F30);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSECURITY_DOUBLEEQUALITYCOMPARER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSECURITY_DOUBLEEQUALITYCOMPARER__CCTOR_OFFSET))();
		}

		::System::Int32 GetHashCode(::System::Double value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSECURITY_DOUBLEEQUALITYCOMPARER_GETHASHCODE_OFFSET))(this, value);
		}
	};
}
