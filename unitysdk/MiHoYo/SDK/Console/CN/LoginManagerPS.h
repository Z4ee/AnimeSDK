#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Console/CN/LoginManager.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_CONSOLE_CN_LOGINMANAGERPS_CHECKAGREEMENT_OFFSET UNITYSDK_OFFSET(0x1731C680)
#define MIHOYO_SDK_CONSOLE_CN_LOGINMANAGERPS_GENERATEACCESSTOKEN_OFFSET UNITYSDK_OFFSET(0x173196B0)
#define MIHOYO_SDK_CONSOLE_CN_LOGINMANAGERPS_GETPROTOCOLCHANNEL_OFFSET UNITYSDK_OFFSET(0x173198B0)
#define MIHOYO_SDK_CONSOLE_CN_LOGINMANAGERPS_GETUSERUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1731CFB0)
#define MIHOYO_SDK_CONSOLE_CN_LOGINMANAGERPS_ISBINDINGACCOUNTSWITCHON_OFFSET UNITYSDK_OFFSET(0x1731CFF0)
#define MIHOYO_SDK_CONSOLE_CN_LOGINMANAGERPS_ISNEEDSHOWBINDMOBILE_OFFSET UNITYSDK_OFFSET(0x1731C3D0)
#define MIHOYO_SDK_CONSOLE_CN_LOGINMANAGERPS_LOGREPORT_OFFSET UNITYSDK_OFFSET(0x17319DF0)
#define MIHOYO_SDK_CONSOLE_CN_LOGINMANAGERPS_ONCONSOLELOGINCALLBACK_OFFSET UNITYSDK_OFFSET(0x1731A0B0)
#define MIHOYO_SDK_CONSOLE_CN_LOGINMANAGERPS_OPENURL_OFFSET UNITYSDK_OFFSET(0x1731CFE0)
#define MIHOYO_SDK_CONSOLE_CN_LOGINMANAGERPS_REALNAMEENVCHECK_OFFSET UNITYSDK_OFFSET(0x1731D050)
#define MIHOYO_SDK_CONSOLE_CN_LOGINMANAGERPS_REQUESTLOGINBYCONSOLE_OFFSET UNITYSDK_OFFSET(0x173198C0)
#define MIHOYO_SDK_CONSOLE_CN_LOGINMANAGERPS__CTOR_OFFSET UNITYSDK_OFFSET(0x173193F0)

namespace MiHoYo::SDK::Console::CN
{
	inline static constexpr unsigned int LoginManagerPS_TypeDefinitionIndex = 9054;

	class LoginManagerPS : public ::MiHoYo::SDK::Console::CN::LoginManager
	{
	public:
		// static const ::System::String* SN; // 0x0
		::MiHoYo::SDK::AccountModel* userModel; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_LOGINMANAGERPS__CTOR_OFFSET))(this);
		}

		::System::Void GenerateAccessToken(::System::Action_1<::System::String*>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_LOGINMANAGERPS_GENERATEACCESSTOKEN_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetProtocolChannel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_LOGINMANAGERPS_GETPROTOCOLCHANNEL_OFFSET))(this);
		}

		::System::Void RequestLoginByConsole(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_LOGINMANAGERPS_REQUESTLOGINBYCONSOLE_OFFSET))(this, a1);
		}

		::System::Void OnConsoleLoginCallback(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_LOGINMANAGERPS_ONCONSOLELOGINCALLBACK_OFFSET))(this, a1);
		}

		::System::Void CheckAgreement(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_LOGINMANAGERPS_CHECKAGREEMENT_OFFSET))(this, a1);
		}

		::System::String* GetUserUniqueId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_LOGINMANAGERPS_GETUSERUNIQUEID_OFFSET))(this);
		}

		::System::Void OpenURL(::System::String* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_LOGINMANAGERPS_OPENURL_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsBindingAccountSwitchOn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_LOGINMANAGERPS_ISBINDINGACCOUNTSWITCHON_OFFSET))(this);
		}

		::System::Void LogReport(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_LOGINMANAGERPS_LOGREPORT_OFFSET))(this, a1, a2);
		}

		::System::Boolean RealNameEnvCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_LOGINMANAGERPS_REALNAMEENVCHECK_OFFSET))(this);
		}

		::System::Boolean IsNeedShowBindMobile(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_LOGINMANAGERPS_ISNEEDSHOWBINDMOBILE_OFFSET))(this, a1);
		}
	};
}
