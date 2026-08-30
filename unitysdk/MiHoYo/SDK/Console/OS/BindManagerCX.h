#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Console/OS/BindManager.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_CONSOLE_OS_BINDMANAGERCX_GENERATEACCESSTOKEN_OFFSET UNITYSDK_OFFSET(0x1B7BAC90)
#define MIHOYO_SDK_CONSOLE_OS_BINDMANAGERCX_GETBINDINGWEBURL_OFFSET UNITYSDK_OFFSET(0x1B7BAFF0)
#define MIHOYO_SDK_CONSOLE_OS_BINDMANAGERCX_PERFORMBINDINGFLOW_OFFSET UNITYSDK_OFFSET(0x1B7BAE90)
#define MIHOYO_SDK_CONSOLE_OS_BINDMANAGERCX_REACTIVATEACCOUNT_OFFSET UNITYSDK_OFFSET(0x1B7BB360)
#define MIHOYO_SDK_CONSOLE_OS_BINDMANAGERCX__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7BAAD0)

namespace MiHoYo::SDK::Console::OS
{
	inline static constexpr unsigned int BindManagerCX_TypeDefinitionIndex = 9012;

	class BindManagerCX : public ::MiHoYo::SDK::Console::OS::BindManager
	{
	public:
		// static const ::System::String* XTOKEN_URL; // 0x0
		// static const ::System::String* PlatformTag; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_BINDMANAGERCX__CTOR_OFFSET))(this);
		}

		::System::Void GenerateAccessToken(::System::Action_1<::System::String*>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_BINDMANAGERCX_GENERATEACCESSTOKEN_OFFSET))(this, a1, a2);
		}

		::System::Void PerformBindingFlow(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_BINDMANAGERCX_PERFORMBINDINGFLOW_OFFSET))(this, a1);
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
