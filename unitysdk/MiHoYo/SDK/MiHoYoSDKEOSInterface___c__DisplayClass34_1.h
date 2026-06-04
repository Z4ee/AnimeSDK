#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class MiHoYoSDKEOSInterface___c__DisplayClass34_0; }
namespace System { class String; }

#define MIHOYO_SDK_MIHOYOSDKEOSINTERFACE___C__DISPLAYCLASS34_1__CTOR_OFFSET UNITYSDK_OFFSET(0xA199650)
#define MIHOYO_SDK_MIHOYOSDKEOSINTERFACE___C__DISPLAYCLASS34_1__PAY_B__1_OFFSET UNITYSDK_OFFSET(0xA199660)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKEOSInterface___c__DisplayClass34_1_TypeDefinitionIndex = 43720;

	class MiHoYoSDKEOSInterface___c__DisplayClass34_1 : public ::System::Object
	{
	public:
		::System::String* accountId; // 0x10
		::System::String* accessToken; // 0x18
		::MiHoYo::SDK::MiHoYoSDKEOSInterface___c__DisplayClass34_0* CS___8__locals1; // 0x20
		::System::Int32 ret; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKEOSINTERFACE___C__DISPLAYCLASS34_1__CTOR_OFFSET))(this);
		}

		::System::Void _Pay_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKEOSINTERFACE___C__DISPLAYCLASS34_1__PAY_B__1_OFFSET))(this);
		}
	};
}
