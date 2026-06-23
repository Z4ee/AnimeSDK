#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModelEx; }
namespace MiHoYo::SDK::Windows::OS::Channel { class BindManager; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER___C__DISPLAYCLASS45_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAAC450)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER___C__DISPLAYCLASS45_0__LOGINBYEMAILCAPTCHA_B__0_OFFSET UNITYSDK_OFFSET(0x1BAAC460)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER___C__DISPLAYCLASS45_0__LOGINBYEMAILCAPTCHA_B__1_OFFSET UNITYSDK_OFFSET(0x1BAACD90)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER___C__DISPLAYCLASS45_0__LOGINBYEMAILCAPTCHA_B__2_OFFSET UNITYSDK_OFFSET(0x1BAACD30)

namespace MiHoYo::SDK::Windows::OS::Channel
{
	inline static constexpr unsigned int BindManager___c__DisplayClass45_0_TypeDefinitionIndex = 20124;

	class BindManager___c__DisplayClass45_0 : public ::System::Object
	{
	public:
		::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>* onLogin; // 0x10
		::System::Action* __9__2; // 0x18
		::System::Action* completeCallback; // 0x20
		::MiHoYo::SDK::Windows::OS::Channel::BindManager* __4__this; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER___C__DISPLAYCLASS45_0__CTOR_OFFSET))(this);
		}

		::System::Void _LoginByEmailCaptcha_b__0(::MiHoYo::SDK::NetworkResponseModelEx* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModelEx*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER___C__DISPLAYCLASS45_0__LOGINBYEMAILCAPTCHA_B__0_OFFSET))(this, response);
		}

		::System::Void _LoginByEmailCaptcha_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER___C__DISPLAYCLASS45_0__LOGINBYEMAILCAPTCHA_B__2_OFFSET))(this);
		}

		::System::Void _LoginByEmailCaptcha_b__1(::MiHoYo::SDK::NetworkResponseModelEx* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModelEx*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER___C__DISPLAYCLASS45_0__LOGINBYEMAILCAPTCHA_B__1_OFFSET))(this, response);
		}
	};
}
