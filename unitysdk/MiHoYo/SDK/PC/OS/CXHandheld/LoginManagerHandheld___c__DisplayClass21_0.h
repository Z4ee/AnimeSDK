#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PC::OS::CXHandheld { class LoginManagerHandheld; }
namespace System { class String; }

#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERHANDHELD___C__DISPLAYCLASS21_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA81F70)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERHANDHELD___C__DISPLAYCLASS21_0__HANDLEAGEGATECOMPLETEDCALLBACK_B__0_OFFSET UNITYSDK_OFFSET(0x1BA81F80)

namespace MiHoYo::SDK::PC::OS::CXHandheld
{
	inline static constexpr unsigned int LoginManagerHandheld___c__DisplayClass21_0_TypeDefinitionIndex = 20501;

	class LoginManagerHandheld___c__DisplayClass21_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::PC::OS::CXHandheld::LoginManagerHandheld* __4__this; // 0x10
		::System::String* ticket; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERHANDHELD___C__DISPLAYCLASS21_0__CTOR_OFFSET))(this);
		}

		::System::Void _HandleAgeGateCompletedCallback_b__0(::System::String* token)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERHANDHELD___C__DISPLAYCLASS21_0__HANDLEAGEGATECOMPLETEDCALLBACK_B__0_OFFSET))(this, token);
		}
	};
}
