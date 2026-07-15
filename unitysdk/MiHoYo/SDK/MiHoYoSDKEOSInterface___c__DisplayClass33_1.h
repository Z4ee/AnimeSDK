#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class MiHoYoSDKEOSInterface___c__DisplayClass33_0; }
namespace System { class String; }

#define MIHOYO_SDK_MIHOYOSDKEOSINTERFACE___C__DISPLAYCLASS33_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD1DB70)
#define MIHOYO_SDK_MIHOYOSDKEOSINTERFACE___C__DISPLAYCLASS33_1__LOGIN_B__1_OFFSET UNITYSDK_OFFSET(0x1AD1DB80)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKEOSInterface___c__DisplayClass33_1_TypeDefinitionIndex = 44580;

	class MiHoYoSDKEOSInterface___c__DisplayClass33_1 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::MiHoYoSDKEOSInterface___c__DisplayClass33_0* CS___8__locals1; // 0x10
		::System::String* epicUserId; // 0x18
		::System::Int32 ret; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKEOSINTERFACE___C__DISPLAYCLASS33_1__CTOR_OFFSET))(this);
		}

		::System::Void _Login_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKEOSINTERFACE___C__DISPLAYCLASS33_1__LOGIN_B__1_OFFSET))(this);
		}
	};
}
