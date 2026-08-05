#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Console/CN/LoginManager.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_CONSOLE_CN_LOGINMANAGERPS_CHECKAGREEMENT_OFFSET UNITYSDK_OFFSET(0x1DD37EE0)
#define MIHOYO_SDK_CONSOLE_CN_LOGINMANAGERPS_GENERATEACCESSTOKEN_OFFSET UNITYSDK_OFFSET(0x1DD35B40)
#define MIHOYO_SDK_CONSOLE_CN_LOGINMANAGERPS_GETPROTOCOLCHANNEL_OFFSET UNITYSDK_OFFSET(0x1DD36090)
#define MIHOYO_SDK_CONSOLE_CN_LOGINMANAGERPS_GETUSERUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1DD38210)
#define MIHOYO_SDK_CONSOLE_CN_LOGINMANAGERPS_ISBINDINGACCOUNTSWITCHON_OFFSET UNITYSDK_OFFSET(0x1DD38250)
#define MIHOYO_SDK_CONSOLE_CN_LOGINMANAGERPS_ISNEEDSHOWBINDMOBILE_OFFSET UNITYSDK_OFFSET(0x1DD37C80)
#define MIHOYO_SDK_CONSOLE_CN_LOGINMANAGERPS_LOGREPORT_OFFSET UNITYSDK_OFFSET(0x1DD364E0)
#define MIHOYO_SDK_CONSOLE_CN_LOGINMANAGERPS_ONCONSOLELOGINCALLBACK_OFFSET UNITYSDK_OFFSET(0x1DD36750)
#define MIHOYO_SDK_CONSOLE_CN_LOGINMANAGERPS_OPENURL_OFFSET UNITYSDK_OFFSET(0x1DD38240)
#define MIHOYO_SDK_CONSOLE_CN_LOGINMANAGERPS_REALNAMEENVCHECK_OFFSET UNITYSDK_OFFSET(0x1DD382E0)
#define MIHOYO_SDK_CONSOLE_CN_LOGINMANAGERPS_REQUESTLOGINBYCONSOLE_OFFSET UNITYSDK_OFFSET(0x1DD360A0)
#define MIHOYO_SDK_CONSOLE_CN_LOGINMANAGERPS__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD35920)

namespace MiHoYo::SDK::Console::CN
{
	inline static constexpr unsigned int LoginManagerPS_TypeDefinitionIndex = 21206;

	class LoginManagerPS : public ::MiHoYo::SDK::Console::CN::LoginManager
	{
	public:
		// static const ::System::String* SN; // 0x0
		::MiHoYo::SDK::AccountModel* userModel; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_LOGINMANAGERPS__CTOR_OFFSET))(this);
		}

		::System::Void GenerateAccessToken(::System::Action_1<::System::String*>* callback, ::System::Boolean refreshToken)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_LOGINMANAGERPS_GENERATEACCESSTOKEN_OFFSET))(this, callback, refreshToken);
		}

		::System::Int32 GetProtocolChannel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_LOGINMANAGERPS_GETPROTOCOLCHANNEL_OFFSET))(this);
		}

		::System::Void RequestLoginByConsole(::System::String* token)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_LOGINMANAGERPS_REQUESTLOGINBYCONSOLE_OFFSET))(this, token);
		}

		::System::Void OnConsoleLoginCallback(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_LOGINMANAGERPS_ONCONSOLELOGINCALLBACK_OFFSET))(this, response);
		}

		::System::Void CheckAgreement(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_LOGINMANAGERPS_CHECKAGREEMENT_OFFSET))(this, response);
		}

		::System::String* GetUserUniqueId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_LOGINMANAGERPS_GETUSERUNIQUEID_OFFSET))(this);
		}

		::System::Void OpenURL(::System::String* url, ::System::Action* closeCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_LOGINMANAGERPS_OPENURL_OFFSET))(this, url, closeCallback);
		}

		::System::Boolean IsBindingAccountSwitchOn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_LOGINMANAGERPS_ISBINDINGACCOUNTSWITCHON_OFFSET))(this);
		}

		::System::Void LogReport(::System::String* msg, ::System::Int32 code)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_LOGINMANAGERPS_LOGREPORT_OFFSET))(this, msg, code);
		}

		::System::Boolean RealNameEnvCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_LOGINMANAGERPS_REALNAMEENVCHECK_OFFSET))(this);
		}

		::System::Boolean IsNeedShowBindMobile(::System::String* mobile)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_LOGINMANAGERPS_ISNEEDSHOWBINDMOBILE_OFFSET))(this, mobile);
		}
	};
}
