#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class MiHoYoSDKServer; }

#define MIHOYO_SDK_MIHOYOSDKSERVER___C__DISPLAYCLASS98_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB246540)
#define MIHOYO_SDK_MIHOYOSDKSERVER___C__DISPLAYCLASS98_0__ONGETSDKEVENTCALLBACK_B__0_OFFSET UNITYSDK_OFFSET(0xB249430)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKServer___c__DisplayClass98_0_TypeDefinitionIndex = 46788;

	class MiHoYoSDKServer___c__DisplayClass98_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::MiHoYoSDKServer* __4__this; // 0x10
		::Il2CppArray<::System::Byte>* bytes; // 0x18
		::System::UInt32 length; // 0x20
		::System::Int32 evt; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER___C__DISPLAYCLASS98_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnGetSDKEventCallback_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER___C__DISPLAYCLASS98_0__ONGETSDKEVENTCALLBACK_B__0_OFFSET))(this);
		}
	};
}
