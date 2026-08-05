#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Console/OS/LoginManager.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_CONSOLE_OS_LOGINMANAGERPS_CHECKANDSHOWPROTOCOL_OFFSET UNITYSDK_OFFSET(0x1DA03530)
#define MIHOYO_SDK_CONSOLE_OS_LOGINMANAGERPS_GENERATEACCESSTOKEN_OFFSET UNITYSDK_OFFSET(0x1DA01C40)
#define MIHOYO_SDK_CONSOLE_OS_LOGINMANAGERPS_GETPROTOCOLCHANNEL_OFFSET UNITYSDK_OFFSET(0x1DA01DE0)
#define MIHOYO_SDK_CONSOLE_OS_LOGINMANAGERPS_GETUSERUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1DA03870)
#define MIHOYO_SDK_CONSOLE_OS_LOGINMANAGERPS_ISBINDINGACCOUNTSWITCHON_OFFSET UNITYSDK_OFFSET(0x1DA03960)
#define MIHOYO_SDK_CONSOLE_OS_LOGINMANAGERPS_LOGREPORT_OFFSET UNITYSDK_OFFSET(0x1DA039F0)
#define MIHOYO_SDK_CONSOLE_OS_LOGINMANAGERPS_ONCONSOLELOGINCALLBACK_OFFSET UNITYSDK_OFFSET(0x1DA01DF0)
#define MIHOYO_SDK_CONSOLE_OS_LOGINMANAGERPS_OPENURL_OFFSET UNITYSDK_OFFSET(0x1DA038A0)
#define MIHOYO_SDK_CONSOLE_OS_LOGINMANAGERPS__CTOR_OFFSET UNITYSDK_OFFSET(0x1DA01B40)

namespace MiHoYo::SDK::Console::OS
{
	inline static constexpr unsigned int LoginManagerPS_TypeDefinitionIndex = 21172;

	class LoginManagerPS : public ::MiHoYo::SDK::Console::OS::LoginManager
	{
	public:
		// static const ::System::String* SN; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_LOGINMANAGERPS__CTOR_OFFSET))(this);
		}

		::System::Void GenerateAccessToken(::System::Action_1<::System::String*>* callback, ::System::Boolean refreshToken)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_LOGINMANAGERPS_GENERATEACCESSTOKEN_OFFSET))(this, callback, refreshToken);
		}

		::System::Int32 GetProtocolChannel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_LOGINMANAGERPS_GETPROTOCOLCHANNEL_OFFSET))(this);
		}

		::System::Void OnConsoleLoginCallback(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_LOGINMANAGERPS_ONCONSOLELOGINCALLBACK_OFFSET))(this, response);
		}

		::System::Void CheckAndShowProtocol(::MiHoYo::SDK::AccountModel* userModel, ::System::String* callbackMessage)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::AccountModel*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_LOGINMANAGERPS_CHECKANDSHOWPROTOCOL_OFFSET))(this, userModel, callbackMessage);
		}

		::System::String* GetUserUniqueId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_LOGINMANAGERPS_GETUSERUNIQUEID_OFFSET))(this);
		}

		::System::Void OpenURL(::System::String* url, ::System::Action* closeCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_LOGINMANAGERPS_OPENURL_OFFSET))(this, url, closeCallback);
		}

		::System::Boolean IsBindingAccountSwitchOn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_LOGINMANAGERPS_ISBINDINGACCOUNTSWITCHON_OFFSET))(this);
		}

		::System::Void LogReport(::System::String* msg, ::System::Int32 code)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_LOGINMANAGERPS_LOGREPORT_OFFSET))(this, msg, code);
		}
	};
}
