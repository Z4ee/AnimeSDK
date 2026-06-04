#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MIHOYO_SDK_PS_LOGINMANAGER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x183B0290)
#define MIHOYO_SDK_PS_LOGINMANAGER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x183B02D0)
#define MIHOYO_SDK_PS_LOGINMANAGER___C__OPENUSERCENTER_B__20_0_OFFSET UNITYSDK_OFFSET(0x183B02E0)

namespace MiHoYo::SDK::PS
{
	inline static constexpr unsigned int LoginManager___c_TypeDefinitionIndex = 8568;

	class LoginManager___c : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::PS::LoginManager___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::PS::LoginManager___c**)Il2CppClass::FromTypeDefinitionIndex(LoginManager___c_TypeDefinitionIndex)->GetStaticField(0x186B0);
		}
		static ::System::Action** StaticGet___9__20_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(LoginManager___c_TypeDefinitionIndex)->GetStaticField(0x186B8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_LOGINMANAGER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_LOGINMANAGER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OpenUserCenter_b__20_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_LOGINMANAGER___C__OPENUSERCENTER_B__20_0_OFFSET))(this);
		}
	};
}
