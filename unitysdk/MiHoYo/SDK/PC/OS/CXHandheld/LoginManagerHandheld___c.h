#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERHANDHELD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BA025B0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERHANDHELD___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA025F0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERHANDHELD___C__OPENUSERCENTER_G__CALLBACK_25_2_OFFSET UNITYSDK_OFFSET(0x1BA02600)

namespace MiHoYo::SDK::PC::OS::CXHandheld
{
	inline static constexpr unsigned int LoginManagerHandheld___c_TypeDefinitionIndex = 8697;

	class LoginManagerHandheld___c : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::PC::OS::CXHandheld::LoginManagerHandheld___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::PC::OS::CXHandheld::LoginManagerHandheld___c**)Il2CppClass::FromTypeDefinitionIndex(LoginManagerHandheld___c_TypeDefinitionIndex)->GetStaticField(0x1C970);
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
