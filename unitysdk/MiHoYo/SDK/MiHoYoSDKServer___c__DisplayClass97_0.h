#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/SecurityTunnel_ErrorCode.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class MiHoYoSDKServer; }
namespace System { class String; }

#define MIHOYO_SDK_MIHOYOSDKSERVER___C__DISPLAYCLASS97_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C7313F0)
#define MIHOYO_SDK_MIHOYOSDKSERVER___C__DISPLAYCLASS97_0__ONGETLOGERRORWITHCODE_B__0_OFFSET UNITYSDK_OFFSET(0x1C732EC0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKServer___c__DisplayClass97_0_TypeDefinitionIndex = 36711;

	class MiHoYoSDKServer___c__DisplayClass97_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::MiHoYoSDKServer* __4__this; // 0x10
		::System::String* message; // 0x18
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
