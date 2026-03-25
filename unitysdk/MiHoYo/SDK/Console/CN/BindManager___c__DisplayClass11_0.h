#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK::Console::CN { class BindManager; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_CONSOLE_CN_BINDMANAGER___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15E0FAA0)
#define MIHOYO_SDK_CONSOLE_CN_BINDMANAGER___C__DISPLAYCLASS11_0__GETCAPTCHACODE_B__0_OFFSET UNITYSDK_OFFSET(0x15E120A0)
#define MIHOYO_SDK_CONSOLE_CN_BINDMANAGER___C__DISPLAYCLASS11_0__GETCAPTCHACODE_B__1_OFFSET UNITYSDK_OFFSET(0x15E12300)

namespace MiHoYo::SDK::Console::CN
{
	inline static constexpr unsigned int BindManager___c__DisplayClass11_0_TypeDefinitionIndex = 7716;

	class BindManager___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* OnCaptchaResponse; // 0x10
		::System::String* input; // 0x18
		::MiHoYo::SDK::Console::CN::BindManager* __4__this; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_BINDMANAGER___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
		}

		::System::Void _GetCaptchaCode_b__0(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_BINDMANAGER___C__DISPLAYCLASS11_0__GETCAPTCHACODE_B__0_OFFSET))(this, response);
		}

		::System::Void _GetCaptchaCode_b__1(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_BINDMANAGER___C__DISPLAYCLASS11_0__GETCAPTCHACODE_B__1_OFFSET))(this, response);
		}
	};
}
