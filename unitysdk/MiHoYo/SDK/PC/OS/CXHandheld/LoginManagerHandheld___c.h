#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERHANDHELD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C0DD6A0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERHANDHELD___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0DD6E0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERHANDHELD___C__OPENUSERCENTER_G__CALLBACK_25_2_OFFSET UNITYSDK_OFFSET(0x1C0DD6F0)

namespace MiHoYo::SDK::PC::OS::CXHandheld
{
	inline static constexpr unsigned int LoginManagerHandheld___c_TypeDefinitionIndex = 20503;

	class LoginManagerHandheld___c : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::PC::OS::CXHandheld::LoginManagerHandheld___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::PC::OS::CXHandheld::LoginManagerHandheld___c**)Il2CppClass::FromTypeDefinitionIndex(LoginManagerHandheld___c_TypeDefinitionIndex)->GetStaticField(0xA4F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERHANDHELD___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERHANDHELD___C__CTOR_OFFSET))(this);
		}

		::System::Void _OpenUserCenter_g__callback_25_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERHANDHELD___C__OPENUSERCENTER_G__CALLBACK_25_2_OFFSET))(this);
		}
	};
}
