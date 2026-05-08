#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_WIN_BILIBILIMANAGER___C__DISPLAYCLASS24_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19B61ED0)
#define MIHOYO_SDK_WIN_BILIBILIMANAGER___C__DISPLAYCLASS24_0__LOGINRESULTCALLBACK_B__1_OFFSET UNITYSDK_OFFSET(0x19B61EE0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int BiliBiliManager___c__DisplayClass24_0_TypeDefinitionIndex = 19908;

	class BiliBiliManager___c__DisplayClass24_0 : public ::System::Object
	{
	public:
		::System::String* uname; // 0x10
		::System::String* accessKey; // 0x18
		::System::String* uid; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BILIBILIMANAGER___C__DISPLAYCLASS24_0__CTOR_OFFSET))(this);
		}

		::System::Void _LoginResultCallback_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BILIBILIMANAGER___C__DISPLAYCLASS24_0__LOGINRESULTCALLBACK_B__1_OFFSET))(this);
		}
	};
}
