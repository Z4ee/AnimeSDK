#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK::PC::OS::CXHandheld { class LoginManagerCXHandheld___c__DisplayClass5_0; }

#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERCXHANDHELD___C__DISPLAYCLASS5_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9FEA20)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERCXHANDHELD___C__DISPLAYCLASS5_1__ONHANDHELDLOGINCALLBACK_B__0_OFFSET UNITYSDK_OFFSET(0x1B9FFB60)

namespace MiHoYo::SDK::PC::OS::CXHandheld
{
	inline static constexpr unsigned int LoginManagerCXHandheld___c__DisplayClass5_1_TypeDefinitionIndex = 8700;

	class LoginManagerCXHandheld___c__DisplayClass5_1 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::AccountModel* userModel; // 0x10
		::MiHoYo::SDK::PC::OS::CXHandheld::LoginManagerCXHandheld___c__DisplayClass5_0* CS___8__locals1; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERCXHANDHELD___C__DISPLAYCLASS5_1__CTOR_OFFSET))(this);
		}

		::System::Void _OnHandheldLoginCallback_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERCXHANDHELD___C__DISPLAYCLASS5_1__ONHANDHELDLOGINCALLBACK_B__0_OFFSET))(this);
		}
	};
}
