#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PC/OS/CXHandheld/HandheldUserAgreementDialog_DisplayMode.h"
#include "unitysdk/MiHoYo/SDK/PC/OS/CXHandheld/LoginManagerBase.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK { class NetworkResponseModelEx; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERHANDHELD_ADDREALNAME_OFFSET UNITYSDK_OFFSET(0x1BE54960)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERHANDHELD_GETACCOUNTPRIVACYPROTOCOLURL_OFFSET UNITYSDK_OFFSET(0x1BE51BC0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERHANDHELD_GETACCOUNTUSERAGREEMENTURL_OFFSET UNITYSDK_OFFSET(0x1BE51B30)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERHANDHELD_GETCHILDRENPROTOCOLURL_OFFSET UNITYSDK_OFFSET(0x1BE51AB0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERHANDHELD_GETPRIVACYPROTOCOLURL_OFFSET UNITYSDK_OFFSET(0x1BE51A30)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERHANDHELD_GETUSERPROTOCOLURL_OFFSET UNITYSDK_OFFSET(0x1BE519B0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERHANDHELD_HANDLEAGEGATECOMPLETEDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1BE52950)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERHANDHELD_LOGREPORT_OFFSET UNITYSDK_OFFSET(0x1BE54400)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERHANDHELD_ONCONSOLELOGINCALLBACKEX_OFFSET UNITYSDK_OFFSET(0x1BE527E0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERHANDHELD_OPENUSERCENTER_OFFSET UNITYSDK_OFFSET(0x1BE53600)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERHANDHELD_REACTIVATEACCOUNTBYACTIONTICKET_OFFSET UNITYSDK_OFFSET(0x1BE53280)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERHANDHELD_REACTIVATEACCOUNT_OFFSET UNITYSDK_OFFSET(0x1BE548C0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERHANDHELD_REPORTACCEPTAGREEMENTS_OFFSET UNITYSDK_OFFSET(0x1BE52320)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERHANDHELD_REPORTLOGINFAIL_OFFSET UNITYSDK_OFFSET(0x1BE52AF0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERHANDHELD_REPORTLOGININIT_OFFSET UNITYSDK_OFFSET(0x1BE54200)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERHANDHELD_REPORTLOGINSUCC_OFFSET UNITYSDK_OFFSET(0x1BE54300)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERHANDHELD_REPORTREFUSEAGREEMENTS_OFFSET UNITYSDK_OFFSET(0x1BE526F0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERHANDHELD_REPORTSHOWAGREEMENTDIALOG_OFFSET UNITYSDK_OFFSET(0x1BE51E30)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERHANDHELD_REQUESTACCOUNTPLATFORMLOGINBYCONSOLE_OFFSET UNITYSDK_OFFSET(0x1BE52C70)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERHANDHELD_REQUESTLOGINBYCONSOLEEX_OFFSET UNITYSDK_OFFSET(0x1BE52BF0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERHANDHELD_REQUESTLOGINBYHANDHELD_OFFSET UNITYSDK_OFFSET(0x1BE52790)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERHANDHELD_SHOWUSERAGREEMENTDIALOG_OFFSET UNITYSDK_OFFSET(0x1BE51C50)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERHANDHELD_TRYACTIVATEACCOUNT_OFFSET UNITYSDK_OFFSET(0x1BE54670)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERHANDHELD__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE54970)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERHANDHELD__REACTIVATEACCOUNT_B__31_0_OFFSET UNITYSDK_OFFSET(0x1BE549A0)

namespace MiHoYo::SDK::PC::OS::CXHandheld
{
	inline static constexpr unsigned int LoginManagerHandheld_TypeDefinitionIndex = 20496;

	class LoginManagerHandheld : public ::MiHoYo::SDK::PC::OS::CXHandheld::LoginManagerBase
	{
	public:
		// static const ::System::String* ACCOUNT_USER_AGREEMENT_URL_OS; // 0x0
		// static const ::System::String* ACCOUNT_PRIVACY_POLICY_URL_OS; // 0x0
		// static const ::System::String* X_RPC_APP_ID; // 0x0
		// static const ::System::String* X_RPC_AGE_GATE_TICKET; // 0x0
		// static const ::System::String* REACTIVATE_ACTION_KEY; // 0x0
		// static const ::System::String* PRIVACY_PROTOCOL; // 0x0
		// static const ::System::String* USER_AGREEMENT; // 0x0
		// static const ::System::String* CHILDREN_PROTOCOL; // 0x0
		::System::String* ReactiveActionTicket; // 0x38
		::System::Action* OpenUserCenterCallback; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERHANDHELD__CTOR_OFFSET))(this);
		}

		::System::String* GetUserProtocolURL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERHANDHELD_GETUSERPROTOCOLURL_OFFSET))(this);
		}

		::System::String* GetPrivacyProtocolURL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERHANDHELD_GETPRIVACYPROTOCOLURL_OFFSET))(this);
		}

		::System::String* GetChildrenProtocolURL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERHANDHELD_GETCHILDRENPROTOCOLURL_OFFSET))(this);
		}

		::System::String* GetAccountUserAgreementURL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERHANDHELD_GETACCOUNTUSERAGREEMENTURL_OFFSET))(this);
		}

		::System::String* GetAccountPrivacyProtocolURL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERHANDHELD_GETACCOUNTPRIVACYPROTOCOLURL_OFFSET))(this);
		}

		::System::Void ShowUserAgreementDialog(::System::Action* agreedCallback, ::MiHoYo::SDK::PC::OS::CXHandheld::HandheldUserAgreementDialog_DisplayMode mode)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::MiHoYo::SDK::PC::OS::CXHandheld::HandheldUserAgreementDialog_DisplayMode))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERHANDHELD_SHOWUSERAGREEMENTDIALOG_OFFSET))(this, agreedCallback, mode);
		}

		::System::Void ReportShowAgreementDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERHANDHELD_REPORTSHOWAGREEMENTDIALOG_OFFSET))(this);
		}

		::System::Void ReportAcceptAgreements()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERHANDHELD_REPORTACCEPTAGREEMENTS_OFFSET))(this);
		}

		::System::Void ReportRefuseAgreements()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERHANDHELD_REPORTREFUSEAGREEMENTS_OFFSET))(this);
		}

		::System::Void RequestLoginByHandheld(::System::String* token)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERHANDHELD_REQUESTLOGINBYHANDHELD_OFFSET))(this, token);
		}

		::System::Void OnConsoleLoginCallbackEx(::MiHoYo::SDK::NetworkResponseModelEx* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModelEx*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERHANDHELD_ONCONSOLELOGINCALLBACKEX_OFFSET))(this, response);
		}

		::System::Void HandleAgeGateCompletedCallback(::System::String* ticket)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERHANDHELD_HANDLEAGEGATECOMPLETEDCALLBACK_OFFSET))(this, ticket);
		}

		::System::Void RequestLoginByConsoleEx(::System::String* token, ::System::String* ageGateTicket)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERHANDHELD_REQUESTLOGINBYCONSOLEEX_OFFSET))(this, token, ageGateTicket);
		}

		::System::Void RequestAccountPlatformLoginByConsole(::System::String* token, ::System::String* ageGateTicket)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERHANDHELD_REQUESTACCOUNTPLATFORMLOGINBYCONSOLE_OFFSET))(this, token, ageGateTicket);
		}

		::System::Void ReactivateAccountByActionTicket(::System::String* actionTicket, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERHANDHELD_REACTIVATEACCOUNTBYACTIONTICKET_OFFSET))(this, actionTicket, callback);
		}

		::System::Void OpenUserCenter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERHANDHELD_OPENUSERCENTER_OFFSET))(this);
		}

		::System::Void ReportLoginInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERHANDHELD_REPORTLOGININIT_OFFSET))(this);
		}

		::System::Void ReportLoginSucc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERHANDHELD_REPORTLOGINSUCC_OFFSET))(this);
		}

		::System::Void ReportLoginFail()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERHANDHELD_REPORTLOGINFAIL_OFFSET))(this);
		}

		::System::Void LogReport(::System::String* msg, ::System::Int32 code)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERHANDHELD_LOGREPORT_OFFSET))(this, msg, code);
		}

		::System::Boolean TryActivateAccount(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERHANDHELD_TRYACTIVATEACCOUNT_OFFSET))(this, response);
		}

		::System::Void ReactivateAccount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERHANDHELD_REACTIVATEACCOUNT_OFFSET))(this);
		}

		::System::Void AddRealName(::System::String* identityCard, ::System::String* realname)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERHANDHELD_ADDREALNAME_OFFSET))(this, identityCard, realname);
		}

		::System::Void _ReactivateAccount_b__31_0(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERHANDHELD__REACTIVATEACCOUNT_B__31_0_OFFSET))(this, response);
		}
	};
}
