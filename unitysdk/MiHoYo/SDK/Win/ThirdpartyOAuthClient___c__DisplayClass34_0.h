#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Win { class ThirdpartyOAuthClient; }
namespace System { class String; }

#define MIHOYO_SDK_WIN_THIRDPARTYOAUTHCLIENT___C__DISPLAYCLASS34_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B6010B0)
#define MIHOYO_SDK_WIN_THIRDPARTYOAUTHCLIENT___C__DISPLAYCLASS34_0__ONCONTEXTCALLBACK_B__0_OFFSET UNITYSDK_OFFSET(0x1B6010C0)
#define MIHOYO_SDK_WIN_THIRDPARTYOAUTHCLIENT___C__DISPLAYCLASS34_0__ONCONTEXTCALLBACK_B__1_OFFSET UNITYSDK_OFFSET(0x1B6010F0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int ThirdpartyOAuthClient___c__DisplayClass34_0_TypeDefinitionIndex = 21008;

	class ThirdpartyOAuthClient___c__DisplayClass34_0 : public ::System::Object
	{
	public:
		::System::String* error; // 0x10
		::System::String* idToken; // 0x18
		::MiHoYo::SDK::Win::ThirdpartyOAuthClient* __4__this; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_THIRDPARTYOAUTHCLIENT___C__DISPLAYCLASS34_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnContextCallback_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_THIRDPARTYOAUTHCLIENT___C__DISPLAYCLASS34_0__ONCONTEXTCALLBACK_B__0_OFFSET))(this);
		}

		::System::Void _OnContextCallback_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_THIRDPARTYOAUTHCLIENT___C__DISPLAYCLASS34_0__ONCONTEXTCALLBACK_B__1_OFFSET))(this);
		}
	};
}
