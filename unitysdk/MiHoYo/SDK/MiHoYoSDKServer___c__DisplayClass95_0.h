#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class MiHoYoSDKServer; }
namespace System { class String; }

#define MIHOYO_SDK_MIHOYOSDKSERVER___C__DISPLAYCLASS95_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB246290)
#define MIHOYO_SDK_MIHOYOSDKSERVER___C__DISPLAYCLASS95_0__ONGETLOGMESSAGE_B__0_OFFSET UNITYSDK_OFFSET(0xB248DB0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKServer___c__DisplayClass95_0_TypeDefinitionIndex = 46785;

	class MiHoYoSDKServer___c__DisplayClass95_0 : public ::System::Object
	{
	public:
		::System::String* message; // 0x10
		::MiHoYo::SDK::MiHoYoSDKServer* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER___C__DISPLAYCLASS95_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnGetLogMessage_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER___C__DISPLAYCLASS95_0__ONGETLOGMESSAGE_B__0_OFFSET))(this);
		}
	};
}
