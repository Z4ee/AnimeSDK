#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSecurity_ObjectFallbackEqualityComparer; }
namespace System::Collections { class IEqualityComparer; }
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }

#define MESSAGEPACK_MESSAGEPACKSECURITY_CLONE_OFFSET UNITYSDK_OFFSET(0x1DB99640)
#define MESSAGEPACK_MESSAGEPACKSECURITY_DEPTHSTEP_OFFSET UNITYSDK_OFFSET(0x1DB962F0)
#define MESSAGEPACK_MESSAGEPACKSECURITY_GETEQUALITYCOMPARER_OFFSET UNITYSDK_OFFSET(0x1DB99510)
#define MESSAGEPACK_MESSAGEPACKSECURITY_GETHASHCOLLISIONRESISTANTEQUALITYCOMPARER_OFFSET UNITYSDK_OFFSET(0x1DB99570)
#define MESSAGEPACK_MESSAGEPACKSECURITY_GET_HASHCOLLISIONRESISTANT_OFFSET UNITYSDK_OFFSET(0x1DB99450)
#define MESSAGEPACK_MESSAGEPACKSECURITY_GET_MAXIMUMOBJECTGRAPHDEPTH_OFFSET UNITYSDK_OFFSET(0x1DB99470)
#define MESSAGEPACK_MESSAGEPACKSECURITY_SET_HASHCOLLISIONRESISTANT_OFFSET UNITYSDK_OFFSET(0x1DB99460)
#define MESSAGEPACK_MESSAGEPACKSECURITY_SET_MAXIMUMOBJECTGRAPHDEPTH_OFFSET UNITYSDK_OFFSET(0x1DB99480)
#define MESSAGEPACK_MESSAGEPACKSECURITY_WITHHASHCOLLISIONRESISTANT_OFFSET UNITYSDK_OFFSET(0x1DB994D0)
#define MESSAGEPACK_MESSAGEPACKSECURITY_WITHMAXIMUMOBJECTGRAPHDEPTH_OFFSET UNITYSDK_OFFSET(0x1DB99490)
#define MESSAGEPACK_MESSAGEPACKSECURITY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DB99690)
#define MESSAGEPACK_MESSAGEPACKSECURITY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DB99390)
#define MESSAGEPACK_MESSAGEPACKSECURITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB99330)

namespace MessagePack
{
	inline static constexpr unsigned int MessagePackSecurity_TypeDefinitionIndex = 30409;

	class MessagePackSecurity : public ::System::Object
	{
	public:
		static ::MessagePack::MessagePackSecurity** StaticGet_UntrustedData()
		{
			return (::MessagePack::MessagePackSecurity**)Il2CppClass::FromTypeDefinitionIndex(MessagePackSecurity_TypeDefinitionIndex)->GetStaticField(0x23B30);
		}
		static ::MessagePack::MessagePackSecurity** StaticGet_TrustedData()
		{
			return (::MessagePack::MessagePackSecurity**)Il2CppClass::FromTypeDefinitionIndex(MessagePackSecurity_TypeDefinitionIndex)->GetStaticField(0x23B38);
		}
		::MessagePack::MessagePackSecurity_ObjectFallbackEqualityComparer* objectFallbackEqualityComparer; // 0x10
		::System::Boolean _HashCollisionResistant_k__BackingField; // 0x18
		::System::Int32 _MaximumObjectGraphDepth_k__BackingField; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSECURITY__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MessagePack::MessagePackSecurity* copyFrom)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackSecurity*))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSECURITY__CTOR_1_OFFSET))(this, copyFrom);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSECURITY__CCTOR_OFFSET))();
		}

		::System::Boolean get_HashCollisionResistant()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSECURITY_GET_HASHCOLLISIONRESISTANT_OFFSET))(this);
		}

		::System::Void set_HashCollisionResistant(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSECURITY_SET_HASHCOLLISIONRESISTANT_OFFSET))(this, value);
		}

		::System::Int32 get_MaximumObjectGraphDepth()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSECURITY_GET_MAXIMUMOBJECTGRAPHDEPTH_OFFSET))(this);
		}

		::System::Void set_MaximumObjectGraphDepth(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSECURITY_SET_MAXIMUMOBJECTGRAPHDEPTH_OFFSET))(this, value);
		}

		::MessagePack::MessagePackSecurity* WithMaximumObjectGraphDepth(::System::Int32 maximumObjectGraphDepth)
		{
			return ((::MessagePack::MessagePackSecurity*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSECURITY_WITHMAXIMUMOBJECTGRAPHDEPTH_OFFSET))(this, maximumObjectGraphDepth);
		}

		::MessagePack::MessagePackSecurity* WithHashCollisionResistant(::System::Boolean hashCollisionResistant)
		{
			return ((::MessagePack::MessagePackSecurity*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSECURITY_WITHHASHCOLLISIONRESISTANT_OFFSET))(this, hashCollisionResistant);
		}

		::System::Collections::IEqualityComparer* GetEqualityComparer()
		{
			return ((::System::Collections::IEqualityComparer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSECURITY_GETEQUALITYCOMPARER_OFFSET))(this);
		}

		::System::Void DepthStep(::MessagePack::MessagePackReader& reader)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackReader&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSECURITY_DEPTHSTEP_OFFSET))(this, reader);
		}

		::System::Collections::IEqualityComparer* GetHashCollisionResistantEqualityComparer()
		{
			return ((::System::Collections::IEqualityComparer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSECURITY_GETHASHCOLLISIONRESISTANTEQUALITYCOMPARER_OFFSET))(this);
		}

		::MessagePack::MessagePackSecurity* Clone()
		{
			return ((::MessagePack::MessagePackSecurity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSECURITY_CLONE_OFFSET))(this);
		}
	};
}
