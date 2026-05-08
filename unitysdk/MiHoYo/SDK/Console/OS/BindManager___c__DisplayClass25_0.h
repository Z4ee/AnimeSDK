#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK::Console::OS { class BindManager; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_CONSOLE_OS_BINDMANAGER___C__DISPLAYCLASS25_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A171FE0)
#define MIHOYO_SDK_CONSOLE_OS_BINDMANAGER___C__DISPLAYCLASS25_0__GETUSERGAMESERVERLIST_B__0_OFFSET UNITYSDK_OFFSET(0x1A171FF0)
#define MIHOYO_SDK_CONSOLE_OS_BINDMANAGER___C__DISPLAYCLASS25_0__GETUSERGAMESERVERLIST_B__1_OFFSET UNITYSDK_OFFSET(0x1A1724D0)
#define MIHOYO_SDK_CONSOLE_OS_BINDMANAGER___C__DISPLAYCLASS25_0__GETUSERGAMESERVERLIST_B__2_OFFSET UNITYSDK_OFFSET(0x1A1727C0)

namespace MiHoYo::SDK::Console::OS
{
	inline static constexpr unsigned int BindManager___c__DisplayClass25_0_TypeDefinitionIndex = 19651;

	class BindManager___c__DisplayClass25_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Console::OS::BindManager* __4__this; // 0x10
		::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* OnUserServerList; // 0x18
		::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* OnServerByRegionCode; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_BINDMANAGER___C__DISPLAYCLASS25_0__CTOR_OFFSET))(this);
		}

		::System::Void _GetUserGameServerList_b__0(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_BINDMANAGER___C__DISPLAYCLASS25_0__GETUSERGAMESERVERLIST_B__0_OFFSET))(this, response);
		}

		::System::Void _GetUserGameServerList_b__1(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_BINDMANAGER___C__DISPLAYCLASS25_0__GETUSERGAMESERVERLIST_B__1_OFFSET))(this, response);
		}

		::System::Void _GetUserGameServerList_b__2(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_BINDMANAGER___C__DISPLAYCLASS25_0__GETUSERGAMESERVERLIST_B__2_OFFSET))(this, response);
		}
	};
}
