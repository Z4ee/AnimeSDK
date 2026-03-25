#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class MiHoYoSDKServer; }
namespace System { class String; }

#define MIHOYO_SDK_MIHOYOSDKSERVER___C__DISPLAYCLASS95_0__CTOR_OFFSET UNITYSDK_OFFSET(0x8524CC0)
#define MIHOYO_SDK_MIHOYOSDKSERVER___C__DISPLAYCLASS95_0__ONGETLOGMESSAGE_B__0_OFFSET UNITYSDK_OFFSET(0x8527500)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKServer___c__DisplayClass95_0_TypeDefinitionIndex = 37089;

	class MiHoYoSDKServer___c__DisplayClass95_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::MiHoYoSDKServer* __4__this; // 0x10
		::System::String* message; // 0x18

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
