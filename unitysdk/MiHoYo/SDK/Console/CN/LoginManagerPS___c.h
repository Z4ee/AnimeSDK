#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MIHOYO_SDK_CONSOLE_CN_LOGINMANAGERPS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x163AE0E0)
#define MIHOYO_SDK_CONSOLE_CN_LOGINMANAGERPS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x163AE120)
#define MIHOYO_SDK_CONSOLE_CN_LOGINMANAGERPS___C___CTOR_B__2_0_OFFSET UNITYSDK_OFFSET(0x163AE130)

namespace MiHoYo::SDK::Console::CN
{
	inline static constexpr unsigned int LoginManagerPS___c_TypeDefinitionIndex = 8785;

	class LoginManagerPS___c : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Console::CN::LoginManagerPS___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::Console::CN::LoginManagerPS___c**)Il2CppClass::FromTypeDefinitionIndex(LoginManagerPS___c_TypeDefinitionIndex)->GetStaticField(0x18390);
		}
		static ::System::Action** StaticGet___9__2_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(LoginManagerPS___c_TypeDefinitionIndex)->GetStaticField(0x18398);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_LOGINMANAGERPS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_LOGINMANAGERPS___C__CTOR_OFFSET))(this);
		}

		::System::Void __ctor_b__2_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_LOGINMANAGERPS___C___CTOR_B__2_0_OFFSET))(this);
		}
	};
}
