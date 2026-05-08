#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_ACCOUNTPLATNATIVE___C__DISPLAYCLASS32_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2CB4B0)
#define MIHOYO_SDK_ACCOUNTPLATNATIVE___C__DISPLAYCLASS32_0__HOYOSDKINTERNALCALLBACK_B__0_OFFSET UNITYSDK_OFFSET(0x1A2CB4C0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int AccountPlatNative___c__DisplayClass32_0_TypeDefinitionIndex = 34915;

	class AccountPlatNative___c__DisplayClass32_0 : public ::System::Object
	{
	public:
		::System::String* strArgs; // 0x10
		::System::Int32 nCallbackIndex; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATNATIVE___C__DISPLAYCLASS32_0__CTOR_OFFSET))(this);
		}

		::System::Void _HoYoSDKInternalCallback_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATNATIVE___C__DISPLAYCLASS32_0__HOYOSDKINTERNALCALLBACK_B__0_OFFSET))(this);
		}
	};
}
