#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Reflection { class MethodInfo; }

#define MESSAGEPACK_MESSAGEPACKSECURITY_OBJECTFALLBACKEQUALITYCOMPARER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EBB9650)
#define MESSAGEPACK_MESSAGEPACKSECURITY_OBJECTFALLBACKEQUALITYCOMPARER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1EBB9690)
#define MESSAGEPACK_MESSAGEPACKSECURITY_OBJECTFALLBACKEQUALITYCOMPARER___C___CCTOR_B__7_0_OFFSET UNITYSDK_OFFSET(0x1EBB96A0)

namespace MessagePack
{
	inline static constexpr unsigned int MessagePackSecurity_ObjectFallbackEqualityComparer___c_TypeDefinitionIndex = 29834;

	class MessagePackSecurity_ObjectFallbackEqualityComparer___c : public ::System::Object
	{
	public:
		static ::MessagePack::MessagePackSecurity_ObjectFallbackEqualityComparer___c** StaticGet___9()
		{
			return (::MessagePack::MessagePackSecurity_ObjectFallbackEqualityComparer___c**)Il2CppClass::FromTypeDefinitionIndex(MessagePackSecurity_ObjectFallbackEqualityComparer___c_TypeDefinitionIndex)->GetStaticField(0x25600);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSECURITY_OBJECTFALLBACKEQUALITYCOMPARER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSECURITY_OBJECTFALLBACKEQUALITYCOMPARER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean __cctor_b__7_0(::System::Reflection::MethodInfo* m)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSECURITY_OBJECTFALLBACKEQUALITYCOMPARER___C___CCTOR_B__7_0_OFFSET))(this, m);
		}
	};
}
