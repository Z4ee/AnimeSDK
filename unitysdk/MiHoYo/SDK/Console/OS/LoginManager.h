#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Console/LoginManagerBase.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK { class NetworkResponseModelEx; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_CONSOLE_OS_LOGINMANAGER_ADDREALNAME_OFFSET UNITYSDK_OFFSET(0x1B7C0690)
#define MIHOYO_SDK_CONSOLE_OS_LOGINMANAGER_GETACCOUNTPRIVACYPROTOCOLURL_OFFSET UNITYSDK_OFFSET(0x1B7BE330)
#define MIHOYO_SDK_CONSOLE_OS_LOGINMANAGER_GETACCOUNTUSERAGREEMENTURL_OFFSET UNITYSDK_OFFSET(0x1B7BE2A0)
#define MIHOYO_SDK_CONSOLE_OS_LOGINMANAGER_GETCHILDRENPROTOCOLURL_OFFSET UNITYSDK_OFFSET(0x1B7BE240)
#define MIHOYO_SDK_CONSOLE_OS_LOGINMANAGER_GETPRIVACYPROTOCOLURL_OFFSET UNITYSDK_OFFSET(0x1B7BE1E0)
#define MIHOYO_SDK_CONSOLE_OS_LOGINMANAGER_GETUSERPROTOCOLURL_OFFSET UNITYSDK_OFFSET(0x1B7BE180)
#define MIHOYO_SDK_CONSOLE_OS_LOGINMANAGER_HANDLEAGEGATECOMPLETEDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1B7BE620)
#define MIHOYO_SDK_CONSOLE_OS_LOGINMANAGER_LOGREPORT_OFFSET UNITYSDK_OFFSET(0x1B7BFF90)
#define MIHOYO_SDK_CONSOLE_OS_LOGINMANAGER_ONCONSOLELOGINCALLBACKEX_OFFSET UNITYSDK_OFFSET(0x1B7BE460)
#define MIHOYO_SDK_CONSOLE_OS_LOGINMANAGER_OPENUSERCENTER_OFFSET UNITYSDK_OFFSET(0x1B7BF7B0)
#define MIHOYO_SDK_CONSOLE_OS_LOGINMANAGER_REACTIVATEACCOUNTBYACTIONTICKET_OFFSET UNITYSDK_OFFSET(0x1B7BF490)
#define MIHOYO_SDK_CONSOLE_OS_LOGINMANAGER_REACTIVATEACCOUNT_OFFSET UNITYSDK_OFFSET(0x1B7C04A0)
#define MIHOYO_SDK_CONSOLE_OS_LOGINMANAGER_REPORTLOGINFAIL_OFFSET UNITYSDK_OFFSET(0x1B7BE870)
#define MIHOYO_SDK_CONSOLE_OS_LOGINMANAGER_REPORTLOGININIT_OFFSET UNITYSDK_OFFSET(0x1B7BFDF0)
#define MIHOYO_SDK_CONSOLE_OS_LOGINMANAGER_REPORTLOGINSUCC_OFFSET UNITYSDK_OFFSET(0x1B7BFEC0)
#define MIHOYO_SDK_CONSOLE_OS_LOGINMANAGER_REQUESTACCOUNTPLATFORMLOGINBYCONSOLE_OFFSET UNITYSDK_OFFSET(0x1B7BEA20)
#define MIHOYO_SDK_CONSOLE_OS_LOGINMANAGER_REQUESTLOGINBYCONSOLEEX_OFFSET UNITYSDK_OFFSET(0x1B7BE940)
#define MIHOYO_SDK_CONSOLE_OS_LOGINMANAGER_REQUESTLOGINBYCONSOLE_OFFSET UNITYSDK_OFFSET(0x1B7BE3C0)
#define MIHOYO_SDK_CONSOLE_OS_LOGINMANAGER_TRYACTIVATEACCOUNT_OFFSET UNITYSDK_OFFSET(0x1B7C0250)
#define MIHOYO_SDK_CONSOLE_OS_LOGINMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7C06A0)
#define MIHOYO_SDK_CONSOLE_OS_LOGINMANAGER__REACTIVATEACCOUNT_B__26_0_OFFSET UNITYSDK_OFFSET(0x1B7C06D0)

namespace MiHoYo::SDK::Console::OS
{
	inline static constexpr unsigned int LoginManager_TypeDefinitionIndex = 9016;

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

		::System::Void RequestLoginByConsole(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_LOGINMANAGER_REQUESTLOGINBYCONSOLE_OFFSET))(this, a1);
		}

		::System::Void OnConsoleLoginCallbackEx(::MiHoYo::SDK::NetworkResponseModelEx* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModelEx*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_LOGINMANAGER_ONCONSOLELOGINCALLBACKEX_OFFSET))(this, a1);
		}

		::System::Void HandleAgeGateCompletedCallback(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_LOGINMANAGER_HANDLEAGEGATECOMPLETEDCALLBACK_OFFSET))(this, a1);
		}

		::System::Void RequestLoginByConsoleEx(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_LOGINMANAGER_REQUESTLOGINBYCONSOLEEX_OFFSET))(this, a1, a2);
		}

		::System::Void RequestAccountPlatformLoginByConsole(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_LOGINMANAGER_REQUESTACCOUNTPLATFORMLOGINBYCONSOLE_OFFSET))(this, a1, a2);
		}

		::System::Void ReactivateAccountByActionTicket(::System::String* a1, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_LOGINMANAGER_REACTIVATEACCOUNTBYACTIONTICKET_OFFSET))(this, a1, a2);
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

		::System::Void LogReport(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_LOGINMANAGER_LOGREPORT_OFFSET))(this, a1, a2);
		}

		::System::Boolean TryActivateAccount(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_LOGINMANAGER_TRYACTIVATEACCOUNT_OFFSET))(this, a1);
		}

		::System::Void ReactivateAccount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_LOGINMANAGER_REACTIVATEACCOUNT_OFFSET))(this);
		}

		::System::Void AddRealName(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_LOGINMANAGER_ADDREALNAME_OFFSET))(this, a1, a2);
		}

		::System::Void _ReactivateAccount_b__26_0(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_LOGINMANAGER__REACTIVATEACCOUNT_B__26_0_OFFSET))(this, a1);
		}
	};
}
