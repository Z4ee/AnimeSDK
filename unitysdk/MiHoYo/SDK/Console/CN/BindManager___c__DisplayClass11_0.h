#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK::Console::CN { class BindManager; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_CONSOLE_CN_BINDMANAGER___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18211190)
#define MIHOYO_SDK_CONSOLE_CN_BINDMANAGER___C__DISPLAYCLASS11_0__GETCAPTCHACODE_B__0_OFFSET UNITYSDK_OFFSET(0x18213840)
#define MIHOYO_SDK_CONSOLE_CN_BINDMANAGER___C__DISPLAYCLASS11_0__GETCAPTCHACODE_B__1_OFFSET UNITYSDK_OFFSET(0x18213A20)

namespace MiHoYo::SDK::Console::CN
{
	inline static constexpr unsigned int BindManager___c__DisplayClass11_0_TypeDefinitionIndex = 8766;

	class BindManager___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::System::String* input; // 0x10
		::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* OnCaptchaResponse; // 0x18
		::MiHoYo::SDK::Console::CN::BindManager* __4__this; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_BINDMANAGER___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
		}

		::System::Void _GetCaptchaCode_b__0(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_BINDMANAGER___C__DISPLAYCLASS11_0__GETCAPTCHACODE_B__0_OFFSET))(this, a1);
		}

		::System::Void _GetCaptchaCode_b__1(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_BINDMANAGER___C__DISPLAYCLASS11_0__GETCAPTCHACODE_B__1_OFFSET))(this, a1);
		}
	};
}
