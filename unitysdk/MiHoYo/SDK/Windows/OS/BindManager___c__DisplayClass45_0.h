#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModelEx; }
namespace MiHoYo::SDK::Windows::OS { class BindManager; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WINDOWS_OS_BINDMANAGER___C__DISPLAYCLASS45_0__CTOR_OFFSET UNITYSDK_OFFSET(0x182E1E00)
#define MIHOYO_SDK_WINDOWS_OS_BINDMANAGER___C__DISPLAYCLASS45_0__LOGINBYEMAILCAPTCHA_B__0_OFFSET UNITYSDK_OFFSET(0x182E5E90)
#define MIHOYO_SDK_WINDOWS_OS_BINDMANAGER___C__DISPLAYCLASS45_0__LOGINBYEMAILCAPTCHA_B__1_OFFSET UNITYSDK_OFFSET(0x182E6870)

namespace MiHoYo::SDK::Windows::OS
{
	inline static constexpr unsigned int BindManager___c__DisplayClass45_0_TypeDefinitionIndex = 8295;

	class BindManager___c__DisplayClass45_0 : public ::System::Object
	{
	public:
		::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>* onLogin; // 0x10
		::System::Action* completeCallback; // 0x18
		::MiHoYo::SDK::Windows::OS::BindManager* __4__this; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_BINDMANAGER___C__DISPLAYCLASS45_0__CTOR_OFFSET))(this);
		}

		::System::Void _LoginByEmailCaptcha_b__0(::MiHoYo::SDK::NetworkResponseModelEx* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModelEx*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_BINDMANAGER___C__DISPLAYCLASS45_0__LOGINBYEMAILCAPTCHA_B__0_OFFSET))(this, a1);
		}

		::System::Void _LoginByEmailCaptcha_b__1(::MiHoYo::SDK::NetworkResponseModelEx* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModelEx*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_BINDMANAGER___C__DISPLAYCLASS45_0__LOGINBYEMAILCAPTCHA_B__1_OFFSET))(this, a1);
		}
	};
}
