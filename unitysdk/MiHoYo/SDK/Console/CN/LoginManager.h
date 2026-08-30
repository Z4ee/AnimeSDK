#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Console/LoginManagerBase.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_CONSOLE_CN_LOGINMANAGER_ACCOUNTPLATOPENUSERCENTER_OFFSET UNITYSDK_OFFSET(0x17317A90)
#define MIHOYO_SDK_CONSOLE_CN_LOGINMANAGER_ADDREALNAMEBYACTIONTICKET_OFFSET UNITYSDK_OFFSET(0x17317810)
#define MIHOYO_SDK_CONSOLE_CN_LOGINMANAGER_ADDREALNAME_OFFSET UNITYSDK_OFFSET(0x173176A0)
#define MIHOYO_SDK_CONSOLE_CN_LOGINMANAGER_CREATECROSSLOGINTOKEN_OFFSET UNITYSDK_OFFSET(0x173181D0)
#define MIHOYO_SDK_CONSOLE_CN_LOGINMANAGER_GETACCOUNTPRIVACYPROTOCOLURL_OFFSET UNITYSDK_OFFSET(0x17317220)
#define MIHOYO_SDK_CONSOLE_CN_LOGINMANAGER_GETACCOUNTUSERAGREEMENTURL_OFFSET UNITYSDK_OFFSET(0x1A1D3760)
#define MIHOYO_SDK_CONSOLE_CN_LOGINMANAGER_GETCHILDRENPROTOCOLURL_OFFSET UNITYSDK_OFFSET(0x1A1D3700)
#define MIHOYO_SDK_CONSOLE_CN_LOGINMANAGER_GETPRIVACYPROTOCOLURL_OFFSET UNITYSDK_OFFSET(0x1A1D36A0)
#define MIHOYO_SDK_CONSOLE_CN_LOGINMANAGER_GETUSERPROTOCOLURL_OFFSET UNITYSDK_OFFSET(0x1A1D3640)
#define MIHOYO_SDK_CONSOLE_CN_LOGINMANAGER_OPENUSERCENTER_OFFSET UNITYSDK_OFFSET(0x1A1D3340)
#define MIHOYO_SDK_CONSOLE_CN_LOGINMANAGER_REACTIVATEACCOUNTBYACTIONTICKET_OFFSET UNITYSDK_OFFSET(0x17317500)
#define MIHOYO_SDK_CONSOLE_CN_LOGINMANAGER_REACTIVATEACCOUNT_OFFSET UNITYSDK_OFFSET(0x17317260)
#define MIHOYO_SDK_CONSOLE_CN_LOGINMANAGER_REPORTLOGINFAIL_OFFSET UNITYSDK_OFFSET(0x1A1D3580)
#define MIHOYO_SDK_CONSOLE_CN_LOGINMANAGER_REPORTLOGININIT_OFFSET UNITYSDK_OFFSET(0x1A1D3400)
#define MIHOYO_SDK_CONSOLE_CN_LOGINMANAGER_REPORTLOGINSUCC_OFFSET UNITYSDK_OFFSET(0x1A1D34C0)
#define MIHOYO_SDK_CONSOLE_CN_LOGINMANAGER__ACCOUNTPLATOPENUSERCENTER_B__16_0_OFFSET UNITYSDK_OFFSET(0x17319130)
#define MIHOYO_SDK_CONSOLE_CN_LOGINMANAGER__ADDREALNAME_B__15_0_OFFSET UNITYSDK_OFFSET(0x17318CC0)
#define MIHOYO_SDK_CONSOLE_CN_LOGINMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x173183F0)
#define MIHOYO_SDK_CONSOLE_CN_LOGINMANAGER__REACTIVATEACCOUNT_B__14_0_OFFSET UNITYSDK_OFFSET(0x173184B0)

namespace MiHoYo::SDK::Console::CN
{
	inline static constexpr unsigned int LoginManager_TypeDefinitionIndex = 9053;

	class LoginManager : public ::MiHoYo::SDK::Console::LoginManagerBase
	{
	public:
		// static const ::System::String* ACCOUNT_USER_AGREEMENT_URL_CN; // 0x0
		// static const ::System::String* ACCOUNT_PRIVACY_POLICY_URL_CN; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* Headers; // 0x38
		::System::String* ActionTicket; // 0x40
		::System::Action* OpenUserCenterCallback; // 0x48

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

		::System::Void AddRealName(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_LOGINMANAGER_ADDREALNAME_OFFSET))(this, a1, a2);
		}

		::System::Void AccountPlatOpenUserCenter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_LOGINMANAGER_ACCOUNTPLATOPENUSERCENTER_OFFSET))(this);
		}

		::System::Void ReactivateAccountByActionTicket(::System::String* a1, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_LOGINMANAGER_REACTIVATEACCOUNTBYACTIONTICKET_OFFSET))(this, a1, a2);
		}

		::System::Void AddRealNameByActionTicket(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_LOGINMANAGER_ADDREALNAMEBYACTIONTICKET_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void CreateCrossLoginToken(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_LOGINMANAGER_CREATECROSSLOGINTOKEN_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void _ReactivateAccount_b__14_0(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_LOGINMANAGER__REACTIVATEACCOUNT_B__14_0_OFFSET))(this, a1);
		}

		::System::Void _AddRealName_b__15_0(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_LOGINMANAGER__ADDREALNAME_B__15_0_OFFSET))(this, a1);
		}

		::System::Void _AccountPlatOpenUserCenter_b__16_0(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_LOGINMANAGER__ACCOUNTPLATOPENUSERCENTER_B__16_0_OFFSET))(this, a1);
		}
	};
}
