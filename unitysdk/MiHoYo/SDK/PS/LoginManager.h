#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PS/PSUserAgreementDialog_DisplayMode.h"
#include "unitysdk/MiHoYo/SDK/RealNameOperation.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PS_LOGINMANAGER_ASYNSONYLOGIN_OFFSET UNITYSDK_OFFSET(0x183AA8D0)
#define MIHOYO_SDK_PS_LOGINMANAGER_BINDEXISTINGACCOUNT_OFFSET UNITYSDK_OFFSET(0x183AE810)
#define MIHOYO_SDK_PS_LOGINMANAGER_CANCELDBINDING_OFFSET UNITYSDK_OFFSET(0x183AE5B0)
#define MIHOYO_SDK_PS_LOGINMANAGER_CANOPENUSERCENTER_OFFSET UNITYSDK_OFFSET(0x183ACA50)
#define MIHOYO_SDK_PS_LOGINMANAGER_CREATEANDBINDNEWACCOUNT_OFFSET UNITYSDK_OFFSET(0x183AE720)
#define MIHOYO_SDK_PS_LOGINMANAGER_GETACCOUNTPARAMETERS_OFFSET UNITYSDK_OFFSET(0x183AEA10)
#define MIHOYO_SDK_PS_LOGINMANAGER_GETREALNAMEOPERATIONTYPE_OFFSET UNITYSDK_OFFSET(0x183AFD30)
#define MIHOYO_SDK_PS_LOGINMANAGER_LOGINBYSONY_OFFSET UNITYSDK_OFFSET(0x183AD8E0)
#define MIHOYO_SDK_PS_LOGINMANAGER_LOGIN_OFFSET UNITYSDK_OFFSET(0x183A7BB0)
#define MIHOYO_SDK_PS_LOGINMANAGER_LOGOUT_OFFSET UNITYSDK_OFFSET(0x183A7EE0)
#define MIHOYO_SDK_PS_LOGINMANAGER_ONASYNGETAUTHCODE_OFFSET UNITYSDK_OFFSET(0x183ADD80)
#define MIHOYO_SDK_PS_LOGINMANAGER_ONBINDEXISTINGACCOUNTCANCELED_OFFSET UNITYSDK_OFFSET(0x183AE800)
#define MIHOYO_SDK_PS_LOGINMANAGER_ONLOGINCALLBACK_OFFSET UNITYSDK_OFFSET(0x183AE410)
#define MIHOYO_SDK_PS_LOGINMANAGER_ONPS4LOGINCALLBACK_OFFSET UNITYSDK_OFFSET(0x183AEBE0)
#define MIHOYO_SDK_PS_LOGINMANAGER_OPENPROTOCOLWEBVIEW_OFFSET UNITYSDK_OFFSET(0x183AC2B0)
#define MIHOYO_SDK_PS_LOGINMANAGER_OPENUSERCENTER_OFFSET UNITYSDK_OFFSET(0x183ACAB0)
#define MIHOYO_SDK_PS_LOGINMANAGER_REPORTLOGINFAIL_OFFSET UNITYSDK_OFFSET(0x183AE1D0)
#define MIHOYO_SDK_PS_LOGINMANAGER_SHOWACCOUNTPRIVACYPOLICY_OFFSET UNITYSDK_OFFSET(0x183AC7D0)
#define MIHOYO_SDK_PS_LOGINMANAGER_SHOWACCOUNTUSERAGREEMENT_OFFSET UNITYSDK_OFFSET(0x183AC550)
#define MIHOYO_SDK_PS_LOGINMANAGER_SHOWCHILDRENPRIVACY_OFFSET UNITYSDK_OFFSET(0x183ABBE0)
#define MIHOYO_SDK_PS_LOGINMANAGER_SHOWPRIVACYPROTOCOL_OFFSET UNITYSDK_OFFSET(0x183AB500)
#define MIHOYO_SDK_PS_LOGINMANAGER_SHOWREALNAMEWEB_OFFSET UNITYSDK_OFFSET(0x183AEA80)
#define MIHOYO_SDK_PS_LOGINMANAGER_SHOWUSERAGREEMENTDIALOG_OFFSET UNITYSDK_OFFSET(0x183AD210)
#define MIHOYO_SDK_PS_LOGINMANAGER_SHOWUSERAGREEMENT_OFFSET UNITYSDK_OFFSET(0x183AAE10)
#define MIHOYO_SDK_PS_LOGINMANAGER_SHOWWELCOMEDIALOG_OFFSET UNITYSDK_OFFSET(0x183AD540)
#define MIHOYO_SDK_PS_LOGINMANAGER_SWITCHROLE_OFFSET UNITYSDK_OFFSET(0x183A8020)
#define MIHOYO_SDK_PS_LOGINMANAGER__ASYNSONYLOGIN_B__26_0_OFFSET UNITYSDK_OFFSET(0x183B00A0)
#define MIHOYO_SDK_PS_LOGINMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x183B0050)
#define MIHOYO_SDK_PS_LOGINMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x183B0040)

namespace MiHoYo::SDK::PS
{
	inline static constexpr unsigned int LoginManager_TypeDefinitionIndex = 8567;

	class LoginManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::PS::LoginManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::PS::LoginManager**)Il2CppClass::FromTypeDefinitionIndex(LoginManager_TypeDefinitionIndex)->GetStaticField(0x178C0);
		}
		// static const ::System::String* ACCOUNT_USER_AGREEMENT_URL_CN; // 0x0
		// static const ::System::String* ACCOUNT_USER_AGREEMENT_URL_OS; // 0x0
		// static const ::System::String* ACCOUNT_PRIVACY_POLICY_URL_CN; // 0x0
		// static const ::System::String* ACCOUNT_PRIVACY_POLICY_URL_OS; // 0x0
		::System::String* accessToken; // 0x10
		::MiHoYo::SDK::AccountModel* userData; // 0x18
		::System::Action_3<::System::Int32, ::System::String*, ::MiHoYo::SDK::AccountModel*>* loginCallback; // 0x20
		::System::Boolean isNoRegister; // 0x28
		::System::Boolean isAgreementAccepted; // 0x29

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_LOGINMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_LOGINMANAGER__CCTOR_OFFSET))();
		}

		::System::Void Login(::System::Action_3<::System::Int32, ::System::String*, ::MiHoYo::SDK::AccountModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_3<::System::Int32, ::System::String*, ::MiHoYo::SDK::AccountModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_LOGINMANAGER_LOGIN_OFFSET))(this, a1);
		}

		::System::Void Logout()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_LOGINMANAGER_LOGOUT_OFFSET))(this);
		}

		::System::Void SwitchRole(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_LOGINMANAGER_SWITCHROLE_OFFSET))(this, a1);
		}

		::System::Void ShowUserAgreement()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_LOGINMANAGER_SHOWUSERAGREEMENT_OFFSET))(this);
		}

		::System::Void ShowPrivacyProtocol()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_LOGINMANAGER_SHOWPRIVACYPROTOCOL_OFFSET))(this);
		}

		::System::Void ShowChildrenPrivacy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_LOGINMANAGER_SHOWCHILDRENPRIVACY_OFFSET))(this);
		}

		::System::Void OpenProtocolWebView(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_LOGINMANAGER_OPENPROTOCOLWEBVIEW_OFFSET))(this, a1);
		}

		::System::Void ShowAccountUserAgreement()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_LOGINMANAGER_SHOWACCOUNTUSERAGREEMENT_OFFSET))(this);
		}

		::System::Void ShowAccountPrivacyPolicy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_LOGINMANAGER_SHOWACCOUNTPRIVACYPOLICY_OFFSET))(this);
		}

		::System::Boolean CanOpenUserCenter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_LOGINMANAGER_CANOPENUSERCENTER_OFFSET))(this);
		}

		::System::Void OpenUserCenter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_LOGINMANAGER_OPENUSERCENTER_OFFSET))(this);
		}

		::System::Void ShowUserAgreementDialog(::System::Action* a1, ::MiHoYo::SDK::PS::PSUserAgreementDialog_DisplayMode a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::MiHoYo::SDK::PS::PSUserAgreementDialog_DisplayMode))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_LOGINMANAGER_SHOWUSERAGREEMENTDIALOG_OFFSET))(this, a1, a2);
		}

		::System::Void ShowWelcomeDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_LOGINMANAGER_SHOWWELCOMEDIALOG_OFFSET))(this);
		}

		::System::Void LoginBySony(::System::String* a1, ::System::String* a2, ::System::Boolean a3, ::System::Int32 a4, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean, ::System::Int32, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_LOGINMANAGER_LOGINBYSONY_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void OnAsynGetAuthCode(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_LOGINMANAGER_ONASYNGETAUTHCODE_OFFSET))(this, a1, a2);
		}

		::System::Void ReportLoginFail()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_LOGINMANAGER_REPORTLOGINFAIL_OFFSET))(this);
		}

		::System::Void AsynSonyLogin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_LOGINMANAGER_ASYNSONYLOGIN_OFFSET))(this);
		}

		::System::Void CanceldBinding()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_LOGINMANAGER_CANCELDBINDING_OFFSET))(this);
		}

		::System::Void CreateAndBindNewAccount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_LOGINMANAGER_CREATEANDBINDNEWACCOUNT_OFFSET))(this);
		}

		::System::Void OnBindExistingAccountCanceled()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_LOGINMANAGER_ONBINDEXISTINGACCOUNTCANCELED_OFFSET))(this);
		}

		::System::Void BindExistingAccount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_LOGINMANAGER_BINDEXISTINGACCOUNT_OFFSET))(this);
		}

		::System::String* GetAccountParameters(::MiHoYo::SDK::AccountModel* a1)
		{
			return ((::System::String*(*)(::PVOID, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_LOGINMANAGER_GETACCOUNTPARAMETERS_OFFSET))(this, a1);
		}

		::System::Void ShowRealNameWeb(::MiHoYo::SDK::AccountModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_LOGINMANAGER_SHOWREALNAMEWEB_OFFSET))(this, a1);
		}

		::System::Void OnPS4LoginCallback(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_LOGINMANAGER_ONPS4LOGINCALLBACK_OFFSET))(this, a1);
		}

		::System::Void OnLoginCallback(::System::Int32 a1, ::System::String* a2, ::MiHoYo::SDK::AccountModel* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_LOGINMANAGER_ONLOGINCALLBACK_OFFSET))(this, a1, a2, a3);
		}

		::MiHoYo::SDK::RealNameOperation GetRealNameOperationType(::MiHoYo::SDK::JSONNode* a1)
		{
			return ((::MiHoYo::SDK::RealNameOperation(*)(::PVOID, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_LOGINMANAGER_GETREALNAMEOPERATIONTYPE_OFFSET))(this, a1);
		}

		::System::Void _AsynSonyLogin_b__26_0(::System::Int32 a1, ::System::String* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_LOGINMANAGER__ASYNSONYLOGIN_B__26_0_OFFSET))(this, a1, a2, a3);
		}
	};
}
