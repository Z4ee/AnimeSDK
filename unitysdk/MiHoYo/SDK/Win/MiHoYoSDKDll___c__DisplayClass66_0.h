#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_MIHOYOSDKDLL___C__DISPLAYCLASS66_0__CTOR_OFFSET UNITYSDK_OFFSET(0x171326A0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL___C__DISPLAYCLASS66_0__LOGIN_PAY_B__0_OFFSET UNITYSDK_OFFSET(0x171326B0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int MiHoYoSDKDll___c__DisplayClass66_0_TypeDefinitionIndex = 9102;

	class MiHoYoSDKDll___c__DisplayClass66_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::String*>* externalCallback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL___C__DISPLAYCLASS66_0__CTOR_OFFSET))(this);
		}

		::System::Void _login_pay_b__0(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL___C__DISPLAYCLASS66_0__LOGIN_PAY_B__0_OFFSET))(this, a1);
		}
	};
}
