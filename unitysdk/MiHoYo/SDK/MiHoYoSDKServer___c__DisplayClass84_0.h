#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/MiHoYoSDKServer_LogLevel.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class MiHoYoSDKServer; }
namespace System { class String; }

#define MIHOYO_SDK_MIHOYOSDKSERVER___C__DISPLAYCLASS84_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA1B1A20)
#define MIHOYO_SDK_MIHOYOSDKSERVER___C__DISPLAYCLASS84_0__KIBANAREPORTKCPONMAINTHREAD_B__0_OFFSET UNITYSDK_OFFSET(0xA1B65F0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKServer___c__DisplayClass84_0_TypeDefinitionIndex = 43735;

	class MiHoYoSDKServer___c__DisplayClass84_0 : public ::System::Object
	{
	public:
		::System::String* eventStr; // 0x10
		::MiHoYo::SDK::MiHoYoSDKServer* __4__this; // 0x18
		::System::String* msg; // 0x20
		::MiHoYo::SDK::MiHoYoSDKServer_LogLevel logLevel; // 0x28
		::System::Int32 code; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER___C__DISPLAYCLASS84_0__CTOR_OFFSET))(this);
		}

		::System::Void _KibanaReportKCPOnMainThread_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER___C__DISPLAYCLASS84_0__KIBANAREPORTKCPONMAINTHREAD_B__0_OFFSET))(this);
		}
	};
}
