#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERCXHANDHELD___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA81F30)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERCXHANDHELD___C__DISPLAYCLASS8_0__OPENURL_B__0_OFFSET UNITYSDK_OFFSET(0x1BA81F40)

namespace MiHoYo::SDK::PC::OS::CXHandheld
{
	inline static constexpr unsigned int LoginManagerCXHandheld___c__DisplayClass8_0_TypeDefinitionIndex = 20508;

	class LoginManagerCXHandheld___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::System::Action* closeCallback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERCXHANDHELD___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
		}

		::System::Void _OpenURL_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERCXHANDHELD___C__DISPLAYCLASS8_0__OPENURL_B__0_OFFSET))(this);
		}
	};
}
