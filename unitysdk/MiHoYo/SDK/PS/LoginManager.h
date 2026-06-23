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

#define MIHOYO_SDK_PS_LOGINMANAGER_ASYNSONYLOGIN_OFFSET UNITYSDK_OFFSET(0x1C0DF760)
#define MIHOYO_SDK_PS_LOGINMANAGER_BINDEXISTINGACCOUNT_OFFSET UNITYSDK_OFFSET(0x1C0E3870)
#define MIHOYO_SDK_PS_LOGINMANAGER_CANCELDBINDING_OFFSET UNITYSDK_OFFSET(0x1C0E35E0)
#define MIHOYO_SDK_PS_LOGINMANAGER_CANOPENUSERCENTER_OFFSET UNITYSDK_OFFSET(0x1C0E1BC0)
#define MIHOYO_SDK_PS_LOGINMANAGER_CREATEANDBINDNEWACCOUNT_OFFSET UNITYSDK_OFFSET(0x1C0E3720)
#define MIHOYO_SDK_PS_LOGINMANAGER_GETACCOUNTPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1C0E3A30)
#define MIHOYO_SDK_PS_LOGINMANAGER_GETREALNAMEOPERATIONTYPE_OFFSET UNITYSDK_OFFSET(0x1C0E4150)
#define MIHOYO_SDK_PS_LOGINMANAGER_LOGINBYSONY_OFFSET UNITYSDK_OFFSET(0x1C0E26A0)
#define MIHOYO_SDK_PS_LOGINMANAGER_LOGIN_OFFSET UNITYSDK_OFFSET(0x1C0DF5F0)
#define MIHOYO_SDK_PS_LOGINMANAGER_LOGOUT_OFFSET UNITYSDK_OFFSET(0x1C0DFA20)
#define MIHOYO_SDK_PS_LOGINMANAGER_ONASYNGETAUTHCODE_OFFSET UNITYSDK_OFFSET(0x1C0E2E60)
#define MIHOYO_SDK_PS_LOGINMANAGER_ONBINDEXISTINGACCOUNTCANCELED_OFFSET UNITYSDK_OFFSET(0x1C0E3860)
#define MIHOYO_SDK_PS_LOGINMANAGER_ONLOGINCALLBACK_OFFSET UNITYSDK_OFFSET(0x1C0E3450)
#define MIHOYO_SDK_PS_LOGINMANAGER_ONPS4LOGINCALLBACK_OFFSET UNITYSDK_OFFSET(0x1C0E3BF0)
#define MIHOYO_SDK_PS_LOGINMANAGER_OPENPROTOCOLWEBVIEW_OFFSET UNITYSDK_OFFSET(0x1C0E1580)
#define MIHOYO_SDK_PS_LOGINMANAGER_OPENUSERCENTER_OFFSET UNITYSDK_OFFSET(0x1C0E1C50)
#define MIHOYO_SDK_PS_LOGINMANAGER_REPORTLOGINFAIL_OFFSET UNITYSDK_OFFSET(0x1C0E3290)
#define MIHOYO_SDK_PS_LOGINMANAGER_SHOWACCOUNTPRIVACYPOLICY_OFFSET UNITYSDK_OFFSET(0x1C0E1A40)
#define MIHOYO_SDK_PS_LOGINMANAGER_SHOWACCOUNTUSERAGREEMENT_OFFSET UNITYSDK_OFFSET(0x1C0E18C0)
#define MIHOYO_SDK_PS_LOGINMANAGER_SHOWCHILDRENPRIVACY_OFFSET UNITYSDK_OFFSET(0x1C0E0DB0)
#define MIHOYO_SDK_PS_LOGINMANAGER_SHOWPRIVACYPROTOCOL_OFFSET UNITYSDK_OFFSET(0x1C0E05E0)
#define MIHOYO_SDK_PS_LOGINMANAGER_SHOWREALNAMEWEB_OFFSET UNITYSDK_OFFSET(0x1C0E3AA0)
#define MIHOYO_SDK_PS_LOGINMANAGER_SHOWUSERAGREEMENTDIALOG_OFFSET UNITYSDK_OFFSET(0x1C0E22C0)
#define MIHOYO_SDK_PS_LOGINMANAGER_SHOWUSERAGREEMENT_OFFSET UNITYSDK_OFFSET(0x1C0DFE10)
#define MIHOYO_SDK_PS_LOGINMANAGER_SHOWWELCOMEDIALOG_OFFSET UNITYSDK_OFFSET(0x1C0E24A0)
#define MIHOYO_SDK_PS_LOGINMANAGER_SWITCHROLE_OFFSET UNITYSDK_OFFSET(0x1C0DFB00)
#define MIHOYO_SDK_PS_LOGINMANAGER__ASYNSONYLOGIN_B__26_0_OFFSET UNITYSDK_OFFSET(0x1C0E4470)
#define MIHOYO_SDK_PS_LOGINMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C0E4420)
#define MIHOYO_SDK_PS_LOGINMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0E4410)

namespace MiHoYo::SDK::PS
{
	inline static constexpr unsigned int LoginManager_TypeDefinitionIndex = 20652;

	class LoginManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::PS::LoginManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::PS::LoginManager**)Il2CppClass::FromTypeDefinitionIndex(LoginManager_TypeDefinitionIndex)->GetStaticField(0xA540);
		}
		// static const ::System::String* ACCOUNT_USER_AGREEMENT_URL_CN; // 0x0
		// static const ::System::String* ACCOUNT_USER_AGREEMENT_URL_OS; // 0x0
		// static const ::System::String* ACCOUNT_PRIVACY_POLICY_URL_CN; // 0x0
		// static const ::System::String* ACCOUNT_PRIVACY_POLICY_URL_OS; // 0x0
		::MiHoYo::SDK::AccountModel* userData; // 0x10
		::System::Action_3<::System::Int32, ::System::String*, ::MiHoYo::SDK::AccountModel*>* loginCallback; // 0x18
		::System::String* accessToken; // 0x20
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

		::System::Void Login(::System::Action_3<::System::Int32, ::System::String*, ::MiHoYo::SDK::AccountModel*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_3<::System::Int32, ::System::String*, ::MiHoYo::SDK::AccountModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_LOGINMANAGER_LOGIN_OFFSET))(this, callback);
		}

		::System::Void Logout()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_LOGINMANAGER_LOGOUT_OFFSET))(this);
		}

		::System::Void SwitchRole(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_LOGINMANAGER_SWITCHROLE_OFFSET))(this, callback);
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

		::System::Void OpenProtocolWebView(::System::String* jsonString)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_LOGINMANAGER_OPENPROTOCOLWEBVIEW_OFFSET))(this, jsonString);
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

		::System::Void ShowUserAgreementDialog(::System::Action* agreedCallback, ::MiHoYo::SDK::PS::PSUserAgreementDialog_DisplayMode mode)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::MiHoYo::SDK::PS::PSUserAgreementDialog_DisplayMode))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_LOGINMANAGER_SHOWUSERAGREEMENTDIALOG_OFFSET))(this, agreedCallback, mode);
		}

		::System::Void ShowWelcomeDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_LOGINMANAGER_SHOWWELCOMEDIALOG_OFFSET))(this);
		}

		::System::Void LoginBySony(::System::String* client_id, ::System::String* auth_code, ::System::Boolean no_regist, ::System::Int32 issuerId, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean, ::System::Int32, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_LOGINMANAGER_LOGINBYSONY_OFFSET))(this, client_id, auth_code, no_regist, issuerId, callback);
		}

		::System::Void OnAsynGetAuthCode(::System::String* authCode, ::System::Int32 issuerId)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_LOGINMANAGER_ONASYNGETAUTHCODE_OFFSET))(this, authCode, issuerId);
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

		::System::String* GetAccountParameters(::MiHoYo::SDK::AccountModel* userData)
		{
			return ((::System::String*(*)(::PVOID, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_LOGINMANAGER_GETACCOUNTPARAMETERS_OFFSET))(this, userData);
		}

		::System::Void ShowRealNameWeb(::MiHoYo::SDK::AccountModel* userModel)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_LOGINMANAGER_SHOWREALNAMEWEB_OFFSET))(this, userModel);
		}

		::System::Void OnPS4LoginCallback(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_LOGINMANAGER_ONPS4LOGINCALLBACK_OFFSET))(this, response);
		}

		::System::Void OnLoginCallback(::System::Int32 ret, ::System::String* msg, ::MiHoYo::SDK::AccountModel* userDataModel)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_LOGINMANAGER_ONLOGINCALLBACK_OFFSET))(this, ret, msg, userDataModel);
		}

		::MiHoYo::SDK::RealNameOperation GetRealNameOperationType(::MiHoYo::SDK::JSONNode* model)
		{
			return ((::MiHoYo::SDK::RealNameOperation(*)(::PVOID, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_LOGINMANAGER_GETREALNAMEOPERATIONTYPE_OFFSET))(this, model);
		}

		::System::Void _AsynSonyLogin_b__26_0(::System::Int32 retcode, ::System::String* authCode, ::System::Int32 issuerId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_LOGINMANAGER__ASYNSONYLOGIN_B__26_0_OFFSET))(this, retcode, authCode, issuerId);
		}
	};
}
