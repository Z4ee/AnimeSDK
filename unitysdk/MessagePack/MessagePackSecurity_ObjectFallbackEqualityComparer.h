#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSecurity; }
namespace MessagePack::Internal { template <typename T> class ThreadsafeTypeKeyHashTable_1; }
namespace System::Collections { class IEqualityComparer; }
namespace System::Reflection { class MethodInfo; }

#define MESSAGEPACK_MESSAGEPACKSECURITY_OBJECTFALLBACKEQUALITYCOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8BF470)
#define MESSAGEPACK_MESSAGEPACKSECURITY_OBJECTFALLBACKEQUALITYCOMPARER_SYSTEM_COLLECTIONS_GENERIC_IEQUALITYCOMPARER_SYSTEM_OBJECT__EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8BF2F0)
#define MESSAGEPACK_MESSAGEPACKSECURITY_OBJECTFALLBACKEQUALITYCOMPARER_SYSTEM_COLLECTIONS_IEQUALITYCOMPARER_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8BF370)
#define MESSAGEPACK_MESSAGEPACKSECURITY_OBJECTFALLBACKEQUALITYCOMPARER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8BF8A0)
#define MESSAGEPACK_MESSAGEPACKSECURITY_OBJECTFALLBACKEQUALITYCOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E8BF250)

namespace MessagePack
{
	inline static constexpr unsigned int MessagePackSecurity_ObjectFallbackEqualityComparer_TypeDefinitionIndex = 29833;

	class MessagePackSecurity_ObjectFallbackEqualityComparer : public ::System::Object
	{
	public:
		static ::System::Reflection::MethodInfo** StaticGet_GetHashCollisionResistantEqualityComparerOpenGenericMethod()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(MessagePackSecurity_ObjectFallbackEqualityComparer_TypeDefinitionIndex)->GetStaticField(0x25EC0);
		}
		::MessagePack::MessagePackSecurity* security; // 0x10
		::MessagePack::Internal::ThreadsafeTypeKeyHashTable_1<::System::Collections::IEqualityComparer*>* equalityComparerCache; // 0x18

		::System::Void _ctor(::MessagePack::MessagePackSecurity* security)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackSecurity*))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSECURITY_OBJECTFALLBACKEQUALITYCOMPARER__CTOR_OFFSET))(this, security);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSECURITY_OBJECTFALLBACKEQUALITYCOMPARER__CCTOR_OFFSET))();
		}

		::System::Boolean System_Collections_Generic_IEqualityComparer_System_Object__Equals(::System::Object* x, ::System::Object* y)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSECURITY_OBJECTFALLBACKEQUALITYCOMPARER_SYSTEM_COLLECTIONS_GENERIC_IEQUALITYCOMPARER_SYSTEM_OBJECT__EQUALS_OFFSET))(this, x, y);
		}

		::System::Boolean System_Collections_IEqualityComparer_Equals(::System::Object* x, ::System::Object* y)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSECURITY_OBJECTFALLBACKEQUALITYCOMPARER_SYSTEM_COLLECTIONS_IEQUALITYCOMPARER_EQUALS_OFFSET))(this, x, y);
		}

		::System::Int32 GetHashCode(::System::Object* value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSECURITY_OBJECTFALLBACKEQUALITYCOMPARER_GETHASHCODE_OFFSET))(this, value);
		}
	};
}
