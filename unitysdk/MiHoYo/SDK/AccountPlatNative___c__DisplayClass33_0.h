#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_ACCOUNTPLATNATIVE___C__DISPLAYCLASS33_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16A7FFA0)
#define MIHOYO_SDK_ACCOUNTPLATNATIVE___C__DISPLAYCLASS33_0__HOYOSDKINTERNALCALLBACK_B__0_OFFSET UNITYSDK_OFFSET(0x16A80790)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int AccountPlatNative___c__DisplayClass33_0_TypeDefinitionIndex = 46543;

	class AccountPlatNative___c__DisplayClass33_0 : public ::System::Object
	{
	public:
		::System::String* strArgs; // 0x10
		::System::Int32 nCallbackIndex; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATNATIVE___C__DISPLAYCLASS33_0__CTOR_OFFSET))(this);
		}

		::System::Void _HoYoSDKInternalCallback_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATNATIVE___C__DISPLAYCLASS33_0__HOYOSDKINTERNALCALLBACK_B__0_OFFSET))(this);
		}
	};
}
