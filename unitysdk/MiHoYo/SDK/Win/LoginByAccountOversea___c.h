#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Win { class LoginByAccountOversea; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_LOGINBYACCOUNTOVERSEA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x184DB6D0)
#define MIHOYO_SDK_WIN_LOGINBYACCOUNTOVERSEA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x184DB710)
#define MIHOYO_SDK_WIN_LOGINBYACCOUNTOVERSEA___C__SHOW_B__51_0_OFFSET UNITYSDK_OFFSET(0x184DB720)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int LoginByAccountOversea___c_TypeDefinitionIndex = 9185;

	class LoginByAccountOversea___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::MiHoYo::SDK::Win::LoginByAccountOversea*>** StaticGet___9__51_0()
		{
			return (::System::Action_1<::MiHoYo::SDK::Win::LoginByAccountOversea*>**)Il2CppClass::FromTypeDefinitionIndex(LoginByAccountOversea___c_TypeDefinitionIndex)->GetStaticField(0x28EE0);
		}
		static ::MiHoYo::SDK::Win::LoginByAccountOversea___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::Win::LoginByAccountOversea___c**)Il2CppClass::FromTypeDefinitionIndex(LoginByAccountOversea___c_TypeDefinitionIndex)->GetStaticField(0x28EE8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYACCOUNTOVERSEA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYACCOUNTOVERSEA___C__CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__51_0(::MiHoYo::SDK::Win::LoginByAccountOversea* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Win::LoginByAccountOversea*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYACCOUNTOVERSEA___C__SHOW_B__51_0_OFFSET))(this, a1);
		}
	};
}
