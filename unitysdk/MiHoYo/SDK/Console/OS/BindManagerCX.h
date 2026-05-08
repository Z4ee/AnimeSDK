#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Console/OS/BindManager.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_CONSOLE_OS_BINDMANAGERCX_GENERATEACCESSTOKEN_OFFSET UNITYSDK_OFFSET(0x197D77A0)
#define MIHOYO_SDK_CONSOLE_OS_BINDMANAGERCX_GETBINDINGWEBURL_OFFSET UNITYSDK_OFFSET(0x197D7A10)
#define MIHOYO_SDK_CONSOLE_OS_BINDMANAGERCX_PERFORMBINDINGFLOW_OFFSET UNITYSDK_OFFSET(0x197D7900)
#define MIHOYO_SDK_CONSOLE_OS_BINDMANAGERCX_REACTIVATEACCOUNT_OFFSET UNITYSDK_OFFSET(0x197D7E70)
#define MIHOYO_SDK_CONSOLE_OS_BINDMANAGERCX__CTOR_OFFSET UNITYSDK_OFFSET(0x197D7660)

namespace MiHoYo::SDK::Console::OS
{
	inline static constexpr unsigned int BindManagerCX_TypeDefinitionIndex = 19656;

	class BindManagerCX : public ::MiHoYo::SDK::Console::OS::BindManager
	{
	public:
		// static const ::System::String* XTOKEN_URL; // 0x0
		// static const ::System::String* PlatformTag; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_BINDMANAGERCX__CTOR_OFFSET))(this);
		}

		::System::Void GenerateAccessToken(::System::Action_1<::System::String*>* callback, ::System::Boolean refreshToken)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_BINDMANAGERCX_GENERATEACCESSTOKEN_OFFSET))(this, callback, refreshToken);
		}

		::System::Void PerformBindingFlow(::System::String* captcha)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_BINDMANAGERCX_PERFORMBINDINGFLOW_OFFSET))(this, captcha);
		}

		::System::String* GetBindingWebURL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_BINDMANAGERCX_GETBINDINGWEBURL_OFFSET))(this);
		}

		::System::Void ReactivateAccount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_BINDMANAGERCX_REACTIVATEACCOUNT_OFFSET))(this);
		}
	};
}
