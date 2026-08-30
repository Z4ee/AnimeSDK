#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK::PC::OS::CXHandheld { class LoginManagerCXHandheld; }

#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERCXHANDHELD___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9FEA10)

namespace MiHoYo::SDK::PC::OS::CXHandheld
{
	inline static constexpr unsigned int LoginManagerCXHandheld___c__DisplayClass5_0_TypeDefinitionIndex = 8699;

	class LoginManagerCXHandheld___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::PC::OS::CXHandheld::LoginManagerCXHandheld* __4__this; // 0x10
		::MiHoYo::SDK::NetworkResponseModel* response; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERCXHANDHELD___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}
	};
}
