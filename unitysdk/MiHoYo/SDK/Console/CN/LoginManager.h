#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Console/LoginManagerBase.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_CONSOLE_CN_LOGINMANAGER_ACCOUNTPLATOPENUSERCENTER_OFFSET UNITYSDK_OFFSET(0x17414890)
#define MIHOYO_SDK_CONSOLE_CN_LOGINMANAGER_ADDREALNAMEBYACTIONTICKET_OFFSET UNITYSDK_OFFSET(0x17415950)
#define MIHOYO_SDK_CONSOLE_CN_LOGINMANAGER_ADDREALNAME_OFFSET UNITYSDK_OFFSET(0x17415860)
#define MIHOYO_SDK_CONSOLE_CN_LOGINMANAGER_CREATECROSSLOGINTOKEN_OFFSET UNITYSDK_OFFSET(0x17415BD0)
#define MIHOYO_SDK_CONSOLE_CN_LOGINMANAGER_GETACCOUNTPRIVACYPROTOCOLURL_OFFSET UNITYSDK_OFFSET(0x17415510)
#define MIHOYO_SDK_CONSOLE_CN_LOGINMANAGER_GETACCOUNTUSERAGREEMENTURL_OFFSET UNITYSDK_OFFSET(0x174154D0)
#define MIHOYO_SDK_CONSOLE_CN_LOGINMANAGER_GETCHILDRENPROTOCOLURL_OFFSET UNITYSDK_OFFSET(0x17415470)
#define MIHOYO_SDK_CONSOLE_CN_LOGINMANAGER_GETPRIVACYPROTOCOLURL_OFFSET UNITYSDK_OFFSET(0x17415410)
#define MIHOYO_SDK_CONSOLE_CN_LOGINMANAGER_GETUSERPROTOCOLURL_OFFSET UNITYSDK_OFFSET(0x174153B0)
#define MIHOYO_SDK_CONSOLE_CN_LOGINMANAGER_OPENUSERCENTER_OFFSET UNITYSDK_OFFSET(0x174147D0)
#define MIHOYO_SDK_CONSOLE_CN_LOGINMANAGER_REACTIVATEACCOUNTBYACTIONTICKET_OFFSET UNITYSDK_OFFSET(0x174156C0)
#define MIHOYO_SDK_CONSOLE_CN_LOGINMANAGER_REACTIVATEACCOUNT_OFFSET UNITYSDK_OFFSET(0x17415550)
#define MIHOYO_SDK_CONSOLE_CN_LOGINMANAGER_REPORTLOGINFAIL_OFFSET UNITYSDK_OFFSET(0x174152F0)
#define MIHOYO_SDK_CONSOLE_CN_LOGINMANAGER_REPORTLOGININIT_OFFSET UNITYSDK_OFFSET(0x17415170)
#define MIHOYO_SDK_CONSOLE_CN_LOGINMANAGER_REPORTLOGINSUCC_OFFSET UNITYSDK_OFFSET(0x17415230)
#define MIHOYO_SDK_CONSOLE_CN_LOGINMANAGER__ACCOUNTPLATOPENUSERCENTER_B__16_0_OFFSET UNITYSDK_OFFSET(0x17416810)
#define MIHOYO_SDK_CONSOLE_CN_LOGINMANAGER__ADDREALNAME_B__15_0_OFFSET UNITYSDK_OFFSET(0x17416460)
#define MIHOYO_SDK_CONSOLE_CN_LOGINMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x17415DF0)
#define MIHOYO_SDK_CONSOLE_CN_LOGINMANAGER__REACTIVATEACCOUNT_B__14_0_OFFSET UNITYSDK_OFFSET(0x17415E80)

namespace MiHoYo::SDK::Console::CN
{
	inline static constexpr unsigned int LoginManager_TypeDefinitionIndex = 7868;

	class LoginManager : public ::MiHoYo::SDK::Console::LoginManagerBase
	{
	public:
		// static const ::System::String* ACCOUNT_USER_AGREEMENT_URL_CN; // 0x0
		// static const ::System::String* ACCOUNT_PRIVACY_POLICY_URL_CN; // 0x0
		::System::Action* OpenUserCenterCallback; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* Headers; // 0x40
		::System::String* ActionTicket; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_LOGINMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void OpenUserCenter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_LOGINMANAGER_OPENUSERCENTER_OFFSET))(this);
		}

		::System::Void ReportLoginInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_LOGINMANAGER_REPORTLOGININIT_OFFSET))(this);
		}

		::System::Void ReportLoginSucc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_LOGINMANAGER_REPORTLOGINSUCC_OFFSET))(this);
		}

		::System::Void ReportLoginFail()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_LOGINMANAGER_REPORTLOGINFAIL_OFFSET))(this);
		}

		::System::String* GetUserProtocolURL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_LOGINMANAGER_GETUSERPROTOCOLURL_OFFSET))(this);
		}

		::System::String* GetPrivacyProtocolURL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_LOGINMANAGER_GETPRIVACYPROTOCOLURL_OFFSET))(this);
		}

		::System::String* GetChildrenProtocolURL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_LOGINMANAGER_GETCHILDRENPROTOCOLURL_OFFSET))(this);
		}

		::System::String* GetAccountUserAgreementURL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_LOGINMANAGER_GETACCOUNTUSERAGREEMENTURL_OFFSET))(this);
		}

		::System::String* GetAccountPrivacyProtocolURL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_LOGINMANAGER_GETACCOUNTPRIVACYPROTOCOLURL_OFFSET))(this);
		}

		::System::Void ReactivateAccount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_LOGINMANAGER_REACTIVATEACCOUNT_OFFSET))(this);
		}

		::System::Void AddRealName(::System::String* identityCard, ::System::String* realname)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_LOGINMANAGER_ADDREALNAME_OFFSET))(this, identityCard, realname);
		}

		::System::Void AccountPlatOpenUserCenter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_LOGINMANAGER_ACCOUNTPLATOPENUSERCENTER_OFFSET))(this);
		}

		::System::Void ReactivateAccountByActionTicket(::System::String* actionTicket, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_LOGINMANAGER_REACTIVATEACCOUNTBYACTIONTICKET_OFFSET))(this, actionTicket, callback);
		}

		::System::Void AddRealNameByActionTicket(::System::String* actionTicket, ::System::String* identityCard, ::System::String* realname, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_LOGINMANAGER_ADDREALNAMEBYACTIONTICKET_OFFSET))(this, actionTicket, identityCard, realname, callback);
		}

		::System::Void CreateCrossLoginToken(::System::String* dest, ::System::String* stoken, ::System::String* uid, ::System::String* mid, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_LOGINMANAGER_CREATECROSSLOGINTOKEN_OFFSET))(this, dest, stoken, uid, mid, callback);
		}

		::System::Void _ReactivateAccount_b__14_0(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_LOGINMANAGER__REACTIVATEACCOUNT_B__14_0_OFFSET))(this, response);
		}

		::System::Void _AddRealName_b__15_0(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_LOGINMANAGER__ADDREALNAME_B__15_0_OFFSET))(this, response);
		}

		::System::Void _AccountPlatOpenUserCenter_b__16_0(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_LOGINMANAGER__ACCOUNTPLATOPENUSERCENTER_B__16_0_OFFSET))(this, response);
		}
	};
}
