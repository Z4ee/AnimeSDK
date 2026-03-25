#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MIHOYO_SDK_SECURITYTUNNEL_THREADUTIL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x85951F0)
#define MIHOYO_SDK_SECURITYTUNNEL_THREADUTIL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x8595230)
#define MIHOYO_SDK_SECURITYTUNNEL_THREADUTIL___C__RANDOMSTRING_B__8_0_OFFSET UNITYSDK_OFFSET(0x8595240)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SecurityTunnel_ThreadUtil___c_TypeDefinitionIndex = 37176;

	class SecurityTunnel_ThreadUtil___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::String*, ::System::Char>** StaticGet___9__8_0()
		{
			return (::System::Func_2<::System::String*, ::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(SecurityTunnel_ThreadUtil___c_TypeDefinitionIndex)->GetStaticField(0x16130);
		}
		static ::MiHoYo::SDK::SecurityTunnel_ThreadUtil___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::SecurityTunnel_ThreadUtil___c**)Il2CppClass::FromTypeDefinitionIndex(SecurityTunnel_ThreadUtil___c_TypeDefinitionIndex)->GetStaticField(0x16138);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_THREADUTIL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_THREADUTIL___C__CTOR_OFFSET))(this);
		}

		::System::Char _RandomString_b__8_0(::System::String* s)
		{
			return ((::System::Char(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_THREADUTIL___C__RANDOMSTRING_B__8_0_OFFSET))(this, s);
		}
	};
}
