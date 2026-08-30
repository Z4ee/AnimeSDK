#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Reflection { class MethodInfo; }

#define MESSAGEPACK_MESSAGEPACKSECURITY_OBJECTFALLBACKEQUALITYCOMPARER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B6C3FE0)
#define MESSAGEPACK_MESSAGEPACKSECURITY_OBJECTFALLBACKEQUALITYCOMPARER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B6C4010)
#define MESSAGEPACK_MESSAGEPACKSECURITY_OBJECTFALLBACKEQUALITYCOMPARER___C___CCTOR_B__7_0_OFFSET UNITYSDK_OFFSET(0x1B6C4020)
#define MESSAGEPACK_MESSAGEPACKSECURITY_OBJECTFALLBACKEQUALITYCOMPARER___C___CCTOR_B__7_1_OFFSET UNITYSDK_OFFSET(0x1B6C4230)

namespace MessagePack
{
	inline static constexpr unsigned int MessagePackSecurity_ObjectFallbackEqualityComparer___c_TypeDefinitionIndex = 7151;

	class MessagePackSecurity_ObjectFallbackEqualityComparer___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Reflection::MethodInfo*, ::System::Boolean>** StaticGet___9__7_1()
		{
			return (::System::Func_2<::System::Reflection::MethodInfo*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MessagePackSecurity_ObjectFallbackEqualityComparer___c_TypeDefinitionIndex)->GetStaticField(0x2E480);
		}
		static ::MessagePack::MessagePackSecurity_ObjectFallbackEqualityComparer___c** StaticGet___9()
		{
			return (::MessagePack::MessagePackSecurity_ObjectFallbackEqualityComparer___c**)Il2CppClass::FromTypeDefinitionIndex(MessagePackSecurity_ObjectFallbackEqualityComparer___c_TypeDefinitionIndex)->GetStaticField(0x2E488);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSECURITY_OBJECTFALLBACKEQUALITYCOMPARER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSECURITY_OBJECTFALLBACKEQUALITYCOMPARER___C__CTOR_OFFSET))(this);
		}

		::System::Reflection::MethodInfo* __cctor_b__7_0()
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSECURITY_OBJECTFALLBACKEQUALITYCOMPARER___C___CCTOR_B__7_0_OFFSET))(this);
		}

		::System::Boolean __cctor_b__7_1(::System::Reflection::MethodInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSECURITY_OBJECTFALLBACKEQUALITYCOMPARER___C___CCTOR_B__7_1_OFFSET))(this, a1);
		}
	};
}
