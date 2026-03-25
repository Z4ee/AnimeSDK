#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class MiHoYoSDKServer; }
namespace System { class String; }

#define MIHOYO_SDK_MIHOYOSDKSERVER___C__DISPLAYCLASS96_0__CTOR_OFFSET UNITYSDK_OFFSET(0x8524D80)
#define MIHOYO_SDK_MIHOYOSDKSERVER___C__DISPLAYCLASS96_0__ONGETLOGERROR_B__0_OFFSET UNITYSDK_OFFSET(0x8527630)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKServer___c__DisplayClass96_0_TypeDefinitionIndex = 37090;

	class MiHoYoSDKServer___c__DisplayClass96_0 : public ::System::Object
	{
	public:
		::System::String* message; // 0x10
		::MiHoYo::SDK::MiHoYoSDKServer* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER___C__DISPLAYCLASS96_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnGetLogError_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER___C__DISPLAYCLASS96_0__ONGETLOGERROR_B__0_OFFSET))(this);
		}
	};
}
