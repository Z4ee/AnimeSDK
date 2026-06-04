#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlySpan_1.h"

namespace MessagePack { class MessagePackSecurity_ObjectFallbackEqualityComparer; }
namespace MessagePack { class SipHash; }
namespace System::Collections { class IEqualityComparer; }
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }

#define MESSAGEPACK_MESSAGEPACKSECURITY_DEPTHSTEP_OFFSET UNITYSDK_OFFSET(0x1817FE00)
#define MESSAGEPACK_MESSAGEPACKSECURITY_GETEQUALITYCOMPARER_OFFSET UNITYSDK_OFFSET(0x1817FDA0)
#define MESSAGEPACK_MESSAGEPACKSECURITY_GETHASHCOLLISIONRESISTANTEQUALITYCOMPARER_OFFSET UNITYSDK_OFFSET(0x1817FEA0)
#define MESSAGEPACK_MESSAGEPACKSECURITY_GET_HASHCOLLISIONRESISTANT_OFFSET UNITYSDK_OFFSET(0x1817FD60)
#define MESSAGEPACK_MESSAGEPACKSECURITY_GET_MAXIMUMOBJECTGRAPHDEPTH_OFFSET UNITYSDK_OFFSET(0x1817FD80)
#define MESSAGEPACK_MESSAGEPACKSECURITY_SECUREHASH_OFFSET UNITYSDK_OFFSET(0x18180030)
#define MESSAGEPACK_MESSAGEPACKSECURITY_SET_HASHCOLLISIONRESISTANT_OFFSET UNITYSDK_OFFSET(0x1817FD70)
#define MESSAGEPACK_MESSAGEPACKSECURITY_SET_MAXIMUMOBJECTGRAPHDEPTH_OFFSET UNITYSDK_OFFSET(0x1817FD90)
#define MESSAGEPACK_MESSAGEPACKSECURITY__CCTOR_OFFSET UNITYSDK_OFFSET(0x18180A20)
#define MESSAGEPACK_MESSAGEPACKSECURITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1817FBE0)

namespace MessagePack
{
	inline static constexpr unsigned int MessagePackSecurity_TypeDefinitionIndex = 7154;

	class MessagePackSecurity : public ::System::Object
	{
	public:
		static ::MessagePack::MessagePackSecurity** StaticGet_TrustedData()
		{
			return (::MessagePack::MessagePackSecurity**)Il2CppClass::FromTypeDefinitionIndex(MessagePackSecurity_TypeDefinitionIndex)->GetStaticField(0xA0E0);
		}
		static ::MessagePack::MessagePackSecurity** StaticGet_UntrustedData()
		{
			return (::MessagePack::MessagePackSecurity**)Il2CppClass::FromTypeDefinitionIndex(MessagePackSecurity_TypeDefinitionIndex)->GetStaticField(0xA0E8);
		}
		static ::MessagePack::SipHash** StaticGet_Hash()
		{
			return (::MessagePack::SipHash**)Il2CppClass::FromTypeDefinitionIndex(MessagePackSecurity_TypeDefinitionIndex)->GetStaticField(0xA0F0);
		}
		::MessagePack::MessagePackSecurity_ObjectFallbackEqualityComparer* objectFallbackEqualityComparer; // 0x10
		::System::Int32 _MaximumObjectGraphDepth_k__BackingField; // 0x18
		::System::Boolean _HashCollisionResistant_k__BackingField; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSECURITY__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSECURITY__CCTOR_OFFSET))();
		}

		::System::Boolean get_HashCollisionResistant()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSECURITY_GET_HASHCOLLISIONRESISTANT_OFFSET))(this);
		}

		::System::Void set_HashCollisionResistant(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSECURITY_SET_HASHCOLLISIONRESISTANT_OFFSET))(this, a1);
		}

		::System::Int32 get_MaximumObjectGraphDepth()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSECURITY_GET_MAXIMUMOBJECTGRAPHDEPTH_OFFSET))(this);
		}

		::System::Void set_MaximumObjectGraphDepth(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSECURITY_SET_MAXIMUMOBJECTGRAPHDEPTH_OFFSET))(this, a1);
		}

		::System::Collections::IEqualityComparer* GetEqualityComparer()
		{
			return ((::System::Collections::IEqualityComparer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSECURITY_GETEQUALITYCOMPARER_OFFSET))(this);
		}

		::System::Void DepthStep(::MessagePack::MessagePackReader& a1)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackReader&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSECURITY_DEPTHSTEP_OFFSET))(this, a1);
		}

		::System::Collections::IEqualityComparer* GetHashCollisionResistantEqualityComparer()
		{
			return ((::System::Collections::IEqualityComparer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSECURITY_GETHASHCOLLISIONRESISTANTEQUALITYCOMPARER_OFFSET))(this);
		}

		static ::System::Int32 SecureHash(::System::ReadOnlySpan_1<::System::Byte> a1)
		{
			return ((::System::Int32(*)(::System::ReadOnlySpan_1<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSECURITY_SECUREHASH_OFFSET))(a1);
		}
	};
}
