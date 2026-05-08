#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Console/LoginManagerBase.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK { class NetworkResponseModelEx; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_CONSOLE_OS_LOGINMANAGER_ADDREALNAME_OFFSET UNITYSDK_OFFSET(0x194AABB0)
#define MIHOYO_SDK_CONSOLE_OS_LOGINMANAGER_GETACCOUNTPRIVACYPROTOCOLURL_OFFSET UNITYSDK_OFFSET(0x194A9060)
#define MIHOYO_SDK_CONSOLE_OS_LOGINMANAGER_GETACCOUNTUSERAGREEMENTURL_OFFSET UNITYSDK_OFFSET(0x194A8FD0)
#define MIHOYO_SDK_CONSOLE_OS_LOGINMANAGER_GETCHILDRENPROTOCOLURL_OFFSET UNITYSDK_OFFSET(0x194A8F50)
#define MIHOYO_SDK_CONSOLE_OS_LOGINMANAGER_GETPRIVACYPROTOCOLURL_OFFSET UNITYSDK_OFFSET(0x194A8ED0)
#define MIHOYO_SDK_CONSOLE_OS_LOGINMANAGER_GETUSERPROTOCOLURL_OFFSET UNITYSDK_OFFSET(0x194A8E50)
#define MIHOYO_SDK_CONSOLE_OS_LOGINMANAGER_HANDLEAGEGATECOMPLETEDCALLBACK_OFFSET UNITYSDK_OFFSET(0x194A92A0)
#define MIHOYO_SDK_CONSOLE_OS_LOGINMANAGER_LOGREPORT_OFFSET UNITYSDK_OFFSET(0x194AA650)
#define MIHOYO_SDK_CONSOLE_OS_LOGINMANAGER_ONCONSOLELOGINCALLBACKEX_OFFSET UNITYSDK_OFFSET(0x194A9140)
#define MIHOYO_SDK_CONSOLE_OS_LOGINMANAGER_OPENUSERCENTER_OFFSET UNITYSDK_OFFSET(0x194A9F60)
#define MIHOYO_SDK_CONSOLE_OS_LOGINMANAGER_REACTIVATEACCOUNTBYACTIONTICKET_OFFSET UNITYSDK_OFFSET(0x194A9BE0)
#define MIHOYO_SDK_CONSOLE_OS_LOGINMANAGER_REACTIVATEACCOUNT_OFFSET UNITYSDK_OFFSET(0x194AAB10)
#define MIHOYO_SDK_CONSOLE_OS_LOGINMANAGER_REPORTLOGINFAIL_OFFSET UNITYSDK_OFFSET(0x194A9430)
#define MIHOYO_SDK_CONSOLE_OS_LOGINMANAGER_REPORTLOGININIT_OFFSET UNITYSDK_OFFSET(0x194AA450)
#define MIHOYO_SDK_CONSOLE_OS_LOGINMANAGER_REPORTLOGINSUCC_OFFSET UNITYSDK_OFFSET(0x194AA550)
#define MIHOYO_SDK_CONSOLE_OS_LOGINMANAGER_REQUESTACCOUNTPLATFORMLOGINBYCONSOLE_OFFSET UNITYSDK_OFFSET(0x194A95B0)
#define MIHOYO_SDK_CONSOLE_OS_LOGINMANAGER_REQUESTLOGINBYCONSOLEEX_OFFSET UNITYSDK_OFFSET(0x194A9530)
#define MIHOYO_SDK_CONSOLE_OS_LOGINMANAGER_REQUESTLOGINBYCONSOLE_OFFSET UNITYSDK_OFFSET(0x194A90F0)
#define MIHOYO_SDK_CONSOLE_OS_LOGINMANAGER_TRYACTIVATEACCOUNT_OFFSET UNITYSDK_OFFSET(0x194AA8C0)
#define MIHOYO_SDK_CONSOLE_OS_LOGINMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x194AABC0)
#define MIHOYO_SDK_CONSOLE_OS_LOGINMANAGER__REACTIVATEACCOUNT_B__26_0_OFFSET UNITYSDK_OFFSET(0x194AABF0)

namespace MiHoYo::SDK::Console::OS
{
	inline static constexpr unsigned int LoginManager_TypeDefinitionIndex = 19660;

	class LoginManager : public ::MiHoYo::SDK::Console::LoginManagerBase
	{
	public:
		// static const ::System::String* ACCOUNT_USER_AGREEMENT_URL_OS; // 0x0
		// static const ::System::String* ACCOUNT_PRIVACY_POLICY_URL_OS; // 0x0
		// static const ::System::String* X_RPC_APP_ID; // 0x0
		// static const ::System::String* X_RPC_AGE_GATE_TICKET; // 0x0
		// static const ::System::String* REACTIVATE_ACTION_KEY; // 0x0
		// static const ::System::Int32 ACCOUNT_PLAT_PROTECT_BAN = 0xFFFFF3DF; // 0x0
		// static const ::System::Int32 ACCOUNT_PLAT_NEW_CONSOLE_USER_OS = 0xFFFFF37D; // 0x0
		::System::Action* OpenUserCenterCallback; // 0x38
		::System::String* ReactiveActionTicket; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_LOGINMANAGER__CTOR_OFFSET))(this);
		}

		::System::String* GetUserProtocolURL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_LOGINMANAGER_GETUSERPROTOCOLURL_OFFSET))(this);
		}

		::System::String* GetPrivacyProtocolURL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_LOGINMANAGER_GETPRIVACYPROTOCOLURL_OFFSET))(this);
		}

		::System::String* GetChildrenProtocolURL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_LOGINMANAGER_GETCHILDRENPROTOCOLURL_OFFSET))(this);
		}

		::System::String* GetAccountUserAgreementURL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_LOGINMANAGER_GETACCOUNTUSERAGREEMENTURL_OFFSET))(this);
		}

		::System::String* GetAccountPrivacyProtocolURL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_LOGINMANAGER_GETACCOUNTPRIVACYPROTOCOLURL_OFFSET))(this);
		}

		::System::Void RequestLoginByConsole(::System::String* token)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_LOGINMANAGER_REQUESTLOGINBYCONSOLE_OFFSET))(this, token);
		}

		::System::Void OnConsoleLoginCallbackEx(::MiHoYo::SDK::NetworkResponseModelEx* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModelEx*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_LOGINMANAGER_ONCONSOLELOGINCALLBACKEX_OFFSET))(this, response);
		}

		::System::Void HandleAgeGateCompletedCallback(::System::String* ticket)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_LOGINMANAGER_HANDLEAGEGATECOMPLETEDCALLBACK_OFFSET))(this, ticket);
		}

		::System::Void RequestLoginByConsoleEx(::System::String* token, ::System::String* ageGateTicket)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_LOGINMANAGER_REQUESTLOGINBYCONSOLEEX_OFFSET))(this, token, ageGateTicket);
		}

		::System::Void RequestAccountPlatformLoginByConsole(::System::String* token, ::System::String* ageGateTicket)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_LOGINMANAGER_REQUESTACCOUNTPLATFORMLOGINBYCONSOLE_OFFSET))(this, token, ageGateTicket);
		}

		::System::Void ReactivateAccountByActionTicket(::System::String* actionTicket, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_LOGINMANAGER_REACTIVATEACCOUNTBYACTIONTICKET_OFFSET))(this, actionTicket, callback);
		}

		::System::Void OpenUserCenter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_LOGINMANAGER_OPENUSERCENTER_OFFSET))(this);
		}

		::System::Void ReportLoginInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_LOGINMANAGER_REPORTLOGININIT_OFFSET))(this);
		}

		::System::Void ReportLoginSucc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_LOGINMANAGER_REPORTLOGINSUCC_OFFSET))(this);
		}

		::System::Void ReportLoginFail()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_LOGINMANAGER_REPORTLOGINFAIL_OFFSET))(this);
		}

		::System::Void LogReport(::System::String* msg, ::System::Int32 code)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_LOGINMANAGER_LOGREPORT_OFFSET))(this, msg, code);
		}

		::System::Boolean TryActivateAccount(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_LOGINMANAGER_TRYACTIVATEACCOUNT_OFFSET))(this, response);
		}

		::System::Void ReactivateAccount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_LOGINMANAGER_REACTIVATEACCOUNT_OFFSET))(this);
		}

		::System::Void AddRealName(::System::String* identityCard, ::System::String* realname)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_LOGINMANAGER_ADDREALNAME_OFFSET))(this, identityCard, realname);
		}

		::System::Void _ReactivateAccount_b__26_0(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_LOGINMANAGER__REACTIVATEACCOUNT_B__26_0_OFFSET))(this, response);
		}
	};
}
