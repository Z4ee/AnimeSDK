#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Console/OS/BindManager.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_CONSOLE_OS_BINDMANAGERPS_GENERATEACCESSTOKEN_OFFSET UNITYSDK_OFFSET(0x163F5DC0)
#define MIHOYO_SDK_CONSOLE_OS_BINDMANAGERPS_GETBINDINGWEBURL_OFFSET UNITYSDK_OFFSET(0x163F5FC0)
#define MIHOYO_SDK_CONSOLE_OS_BINDMANAGERPS_PERFORMBINDINGFLOW_OFFSET UNITYSDK_OFFSET(0x163F6380)
#define MIHOYO_SDK_CONSOLE_OS_BINDMANAGERPS_REACTIVATEACCOUNT_OFFSET UNITYSDK_OFFSET(0x163F64E0)
#define MIHOYO_SDK_CONSOLE_OS_BINDMANAGERPS__CTOR_OFFSET UNITYSDK_OFFSET(0x163F5BE0)
#define MIHOYO_SDK_CONSOLE_OS_BINDMANAGERPS__REACTIVATEACCOUNT_B__5_0_OFFSET UNITYSDK_OFFSET(0x163F6670)

namespace MiHoYo::SDK::Console::OS
{
	inline static constexpr unsigned int BindManagerPS_TypeDefinitionIndex = 8741;

	class BindManagerPS : public ::MiHoYo::SDK::Console::OS::BindManager
	{
	public:
		// static const ::System::String* PlatformTag; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_BINDMANAGERPS__CTOR_OFFSET))(this);
		}

		::System::Void GenerateAccessToken(::System::Action_1<::System::String*>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_BINDMANAGERPS_GENERATEACCESSTOKEN_OFFSET))(this, a1, a2);
		}

		::System::String* GetBindingWebURL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_BINDMANAGERPS_GETBINDINGWEBURL_OFFSET))(this);
		}

		::System::Void PerformBindingFlow(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_BINDMANAGERPS_PERFORMBINDINGFLOW_OFFSET))(this, a1);
		}

		::System::Void ReactivateAccount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_BINDMANAGERPS_REACTIVATEACCOUNT_OFFSET))(this);
		}

		::System::Void _ReactivateAccount_b__5_0(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_BINDMANAGERPS__REACTIVATEACCOUNT_B__5_0_OFFSET))(this, a1);
		}
	};
}
