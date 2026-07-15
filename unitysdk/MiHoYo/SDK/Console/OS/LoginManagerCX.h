#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Console/OS/LoginManager.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_CONSOLE_OS_LOGINMANAGERCX_GENERATEACCESSTOKEN_OFFSET UNITYSDK_OFFSET(0x163FC430)
#define MIHOYO_SDK_CONSOLE_OS_LOGINMANAGERCX_GETPROTOCOLCHANNEL_OFFSET UNITYSDK_OFFSET(0x163FA7D0)
#define MIHOYO_SDK_CONSOLE_OS_LOGINMANAGERCX_GETUSERUNIQUEID_OFFSET UNITYSDK_OFFSET(0x163FC3E0)
#define MIHOYO_SDK_CONSOLE_OS_LOGINMANAGERCX_ISBINDINGACCOUNTSWITCHON_OFFSET UNITYSDK_OFFSET(0x163FC6C0)
#define MIHOYO_SDK_CONSOLE_OS_LOGINMANAGERCX_LOGREPORT_OFFSET UNITYSDK_OFFSET(0x163FC720)
#define MIHOYO_SDK_CONSOLE_OS_LOGINMANAGERCX_ONCONSOLELOGINCALLBACK_OFFSET UNITYSDK_OFFSET(0x163FA7E0)
#define MIHOYO_SDK_CONSOLE_OS_LOGINMANAGERCX_OPENURL_OFFSET UNITYSDK_OFFSET(0x163FC630)
#define MIHOYO_SDK_CONSOLE_OS_LOGINMANAGERCX__CTOR_OFFSET UNITYSDK_OFFSET(0x163D5DF0)

namespace MiHoYo::SDK::Console::OS
{
	inline static constexpr unsigned int LoginManagerCX_TypeDefinitionIndex = 8758;

	class LoginManagerCX : public ::MiHoYo::SDK::Console::OS::LoginManager
	{
	public:
		// static const ::System::String* CX; // 0x0
		// static const ::System::String* XTOKEN_URL; // 0x0
		::System::Collections::Generic::List_1<::System::String*>* cachedFriendList; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_LOGINMANAGERCX__CTOR_OFFSET))(this);
		}

		::System::Int32 GetProtocolChannel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_LOGINMANAGERCX_GETPROTOCOLCHANNEL_OFFSET))(this);
		}

		::System::Void OnConsoleLoginCallback(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_LOGINMANAGERCX_ONCONSOLELOGINCALLBACK_OFFSET))(this, a1);
		}

		::System::Void GenerateAccessToken(::System::Action_1<::System::String*>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_LOGINMANAGERCX_GENERATEACCESSTOKEN_OFFSET))(this, a1, a2);
		}

		::System::String* GetUserUniqueId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_LOGINMANAGERCX_GETUSERUNIQUEID_OFFSET))(this);
		}

		::System::Void OpenURL(::System::String* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_LOGINMANAGERCX_OPENURL_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsBindingAccountSwitchOn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_LOGINMANAGERCX_ISBINDINGACCOUNTSWITCHON_OFFSET))(this);
		}

		::System::Void LogReport(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_LOGINMANAGERCX_LOGREPORT_OFFSET))(this, a1, a2);
		}
	};
}
