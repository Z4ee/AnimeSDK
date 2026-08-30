#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/SecurityTunnel_ErrorCode.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class MiHoYoSDKServer; }
namespace System { class String; }

#define MIHOYO_SDK_MIHOYOSDKSERVER___C__DISPLAYCLASS97_0__CTOR_OFFSET UNITYSDK_OFFSET(0x194A7EB0)
#define MIHOYO_SDK_MIHOYOSDKSERVER___C__DISPLAYCLASS97_0__ONGETLOGERRORWITHCODE_B__0_OFFSET UNITYSDK_OFFSET(0x194AAA80)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKServer___c__DisplayClass97_0_TypeDefinitionIndex = 46787;

	class MiHoYoSDKServer___c__DisplayClass97_0 : public ::System::Object
	{
	public:
		::System::String* message; // 0x10
		::MiHoYo::SDK::MiHoYoSDKServer* __4__this; // 0x18
		::MiHoYo::SDK::SecurityTunnel_ErrorCode code; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER___C__DISPLAYCLASS97_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnGetLogErrorWithCode_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER___C__DISPLAYCLASS97_0__ONGETLOGERRORWITHCODE_B__0_OFFSET))(this);
		}
	};
}
