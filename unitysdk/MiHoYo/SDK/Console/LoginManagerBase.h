#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Console/ConsoleUserAgreementDialog_DisplayMode.h"
#include "unitysdk/MiHoYo/SDK/EnvType.h"
#include "unitysdk/MiHoYo/SDK/RealNameOperation.h"
#include "unitysdk/MiHoYo/SDK/ReportType.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_CONSOLE_LOGINMANAGERBASE_ASYNCONSOLELOGIN_OFFSET UNITYSDK_OFFSET(0x1A97C7B0)
#define MIHOYO_SDK_CONSOLE_LOGINMANAGERBASE_BINDEXISTINGACCOUNT_OFFSET UNITYSDK_OFFSET(0x1A97ECF0)
#define MIHOYO_SDK_CONSOLE_LOGINMANAGERBASE_CANCELDBINDING_OFFSET UNITYSDK_OFFSET(0x1A97E9F0)
#define MIHOYO_SDK_CONSOLE_LOGINMANAGERBASE_CANOPENUSERCENTER_OFFSET UNITYSDK_OFFSET(0x1A97DB60)
#define MIHOYO_SDK_CONSOLE_LOGINMANAGERBASE_CREATEANDBINDNEWACCOUNT_OFFSET UNITYSDK_OFFSET(0x1A97EBA0)
#define MIHOYO_SDK_CONSOLE_LOGINMANAGERBASE_ENVCHANGED_OFFSET UNITYSDK_OFFSET(0x1A97C680)
#define MIHOYO_SDK_CONSOLE_LOGINMANAGERBASE_GETACCOUNTPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1A97F000)
#define MIHOYO_SDK_CONSOLE_LOGINMANAGERBASE_GETREALNAMEOPERATIONTYPE_OFFSET UNITYSDK_OFFSET(0x1A97F070)
#define MIHOYO_SDK_CONSOLE_LOGINMANAGERBASE_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1A97C300)
#define MIHOYO_SDK_CONSOLE_LOGINMANAGERBASE_LOGIN_OFFSET UNITYSDK_OFFSET(0x1A97C710)
#define MIHOYO_SDK_CONSOLE_LOGINMANAGERBASE_LOGOUT_OFFSET UNITYSDK_OFFSET(0x1A97C880)
#define MIHOYO_SDK_CONSOLE_LOGINMANAGERBASE_ONBINDEXISTINGACCOUNTCANCELED_OFFSET UNITYSDK_OFFSET(0x1A97ECE0)
#define MIHOYO_SDK_CONSOLE_LOGINMANAGERBASE_ONLOGINCALLBACK_OFFSET UNITYSDK_OFFSET(0x1A97E960)
#define MIHOYO_SDK_CONSOLE_LOGINMANAGERBASE_OPENPROTOCOLWEBVIEW_OFFSET UNITYSDK_OFFSET(0x1A97D810)
#define MIHOYO_SDK_CONSOLE_LOGINMANAGERBASE_REPORTACCEPTAGREEMENTS_OFFSET UNITYSDK_OFFSET(0x1A97F330)
#define MIHOYO_SDK_CONSOLE_LOGINMANAGERBASE_REPORTREFUSEAGREEMENTS_OFFSET UNITYSDK_OFFSET(0x1A97F700)
#define MIHOYO_SDK_CONSOLE_LOGINMANAGERBASE_REPORTSHOWAGREEMENTDIALOG_OFFSET UNITYSDK_OFFSET(0x1A97DE50)
#define MIHOYO_SDK_CONSOLE_LOGINMANAGERBASE_REQUESTLOGINBYCONSOLE_OFFSET UNITYSDK_OFFSET(0x1A97E4E0)
#define MIHOYO_SDK_CONSOLE_LOGINMANAGERBASE_SHOWACCOUNTPRIVACYPOLICY_OFFSET UNITYSDK_OFFSET(0x1A97DC30)
#define MIHOYO_SDK_CONSOLE_LOGINMANAGERBASE_SHOWACCOUNTUSERAGREEMENT_OFFSET UNITYSDK_OFFSET(0x1A97DBF0)
#define MIHOYO_SDK_CONSOLE_LOGINMANAGERBASE_SHOWCHILDRENPRIVACY_OFFSET UNITYSDK_OFFSET(0x1A97D510)
#define MIHOYO_SDK_CONSOLE_LOGINMANAGERBASE_SHOWPRIVACYPROTOCOL_OFFSET UNITYSDK_OFFSET(0x1A97D210)
#define MIHOYO_SDK_CONSOLE_LOGINMANAGERBASE_SHOWREACTIVATEDIALOG_OFFSET UNITYSDK_OFFSET(0x1A97CC70)
#define MIHOYO_SDK_CONSOLE_LOGINMANAGERBASE_SHOWREALNAMEDIALOG_OFFSET UNITYSDK_OFFSET(0x1A97CDD0)
#define MIHOYO_SDK_CONSOLE_LOGINMANAGERBASE_SHOWREALNAMEWEB_OFFSET UNITYSDK_OFFSET(0x1A97EEB0)
#define MIHOYO_SDK_CONSOLE_LOGINMANAGERBASE_SHOWUSERAGREEMENTDIALOG_OFFSET UNITYSDK_OFFSET(0x1A97DC70)
#define MIHOYO_SDK_CONSOLE_LOGINMANAGERBASE_SHOWUSERAGREEMENT_OFFSET UNITYSDK_OFFSET(0x1A97CF10)
#define MIHOYO_SDK_CONSOLE_LOGINMANAGERBASE_SHOWWELCOMEDIALOG_OFFSET UNITYSDK_OFFSET(0x1A97E340)
#define MIHOYO_SDK_CONSOLE_LOGINMANAGERBASE_SWITCHROLE_OFFSET UNITYSDK_OFFSET(0x1A97C960)
#define MIHOYO_SDK_CONSOLE_LOGINMANAGERBASE_SYNCFRIENDLIST_OFFSET UNITYSDK_OFFSET(0x1A97DB50)
#define MIHOYO_SDK_CONSOLE_LOGINMANAGERBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A97F7A0)
#define MIHOYO_SDK_CONSOLE_LOGINMANAGERBASE__SHOWREACTIVATEDIALOG_B__16_0_OFFSET UNITYSDK_OFFSET(0x1A97F7C0)
#define MIHOYO_SDK_CONSOLE_LOGINMANAGERBASE__SHOWREACTIVATEDIALOG_B__16_1_OFFSET UNITYSDK_OFFSET(0x1A97F870)
#define MIHOYO_SDK_CONSOLE_LOGINMANAGERBASE__SHOWREALNAMEDIALOG_B__17_0_OFFSET UNITYSDK_OFFSET(0x1A97FA40)
#define MIHOYO_SDK_CONSOLE_LOGINMANAGERBASE__SHOWREALNAMEDIALOG_B__17_1_OFFSET UNITYSDK_OFFSET(0x1A97FB00)

namespace MiHoYo::SDK::Console
{
	inline static constexpr unsigned int LoginManagerBase_TypeDefinitionIndex = 20723;

	class LoginManagerBase : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Console::LoginManagerBase** StaticGet__instance()
		{
			return (::MiHoYo::SDK::Console::LoginManagerBase**)Il2CppClass::FromTypeDefinitionIndex(LoginManagerBase_TypeDefinitionIndex)->GetStaticField(0x9820);
		}
		// static const ::System::String* PRIVACY_PROTOCOL; // 0x0
		// static const ::System::String* USER_AGREEMENT; // 0x0
		// static const ::System::String* CHILDREN_PROTOCOL; // 0x0
		// static const ::System::Int32 NEW_CONSOLE_USER = 0xFFFFFF1B; // 0x0
		// static const ::System::Int32 ACCOUNT_PLAT_NEW_CONSOLE_USER = 0xFFFFF318; // 0x0
		// static const ::System::Int32 TOKEN_INVALID = 0xFFFFFEE0; // 0x0
		::System::String* Platform; // 0x10
		::System::String* accessToken; // 0x18
		::System::Action_3<::System::Int32, ::System::String*, ::MiHoYo::SDK::AccountModel*>* loginCallback; // 0x20
		::MiHoYo::SDK::ReportType _loginReportType; // 0x28
		::System::Boolean isNoRegister; // 0x2C
		::System::Boolean isAgreementAccepted; // 0x2D
		::System::Boolean forceTokenRefresh; // 0x2E
		::MiHoYo::SDK::ReportType _registerReportType; // 0x30
		::MiHoYo::SDK::EnvType _envType; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_LOGINMANAGERBASE__CTOR_OFFSET))(this);
		}

		static ::MiHoYo::SDK::Console::LoginManagerBase* get_Instance()
		{
			return ((::MiHoYo::SDK::Console::LoginManagerBase*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_LOGINMANAGERBASE_GET_INSTANCE_OFFSET))();
		}

		::System::Void Login(::System::Action_3<::System::Int32, ::System::String*, ::MiHoYo::SDK::AccountModel*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_3<::System::Int32, ::System::String*, ::MiHoYo::SDK::AccountModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_LOGINMANAGERBASE_LOGIN_OFFSET))(this, callback);
		}

		::System::Void Logout()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_LOGINMANAGERBASE_LOGOUT_OFFSET))(this);
		}

		::System::Void SwitchRole(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_LOGINMANAGERBASE_SWITCHROLE_OFFSET))(this, callback);
		}

		::System::Void ShowReactivateDialog(::System::Boolean accountPlat)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_LOGINMANAGERBASE_SHOWREACTIVATEDIALOG_OFFSET))(this, accountPlat);
		}

		::System::Void ShowRealNameDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_LOGINMANAGERBASE_SHOWREALNAMEDIALOG_OFFSET))(this);
		}

		::System::Void ShowUserAgreement()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_LOGINMANAGERBASE_SHOWUSERAGREEMENT_OFFSET))(this);
		}

		::System::Void ShowPrivacyProtocol()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_LOGINMANAGERBASE_SHOWPRIVACYPROTOCOL_OFFSET))(this);
		}

		::System::Void ShowChildrenPrivacy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_LOGINMANAGERBASE_SHOWCHILDRENPRIVACY_OFFSET))(this);
		}

		::System::Void OpenProtocolWebView(::System::String* jsonString)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_LOGINMANAGERBASE_OPENPROTOCOLWEBVIEW_OFFSET))(this, jsonString);
		}

		::System::Void SyncFriendList(::System::String* jsonString)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_LOGINMANAGERBASE_SYNCFRIENDLIST_OFFSET))(this, jsonString);
		}

		::System::Boolean CanOpenUserCenter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_LOGINMANAGERBASE_CANOPENUSERCENTER_OFFSET))(this);
		}

		::System::Void ShowAccountUserAgreement()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_LOGINMANAGERBASE_SHOWACCOUNTUSERAGREEMENT_OFFSET))(this);
		}

		::System::Void ShowAccountPrivacyPolicy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_LOGINMANAGERBASE_SHOWACCOUNTPRIVACYPOLICY_OFFSET))(this);
		}

		::System::Void ShowUserAgreementDialog(::System::Action* agreedCallback, ::MiHoYo::SDK::Console::ConsoleUserAgreementDialog_DisplayMode mode)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::MiHoYo::SDK::Console::ConsoleUserAgreementDialog_DisplayMode))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_LOGINMANAGERBASE_SHOWUSERAGREEMENTDIALOG_OFFSET))(this, agreedCallback, mode);
		}

		::System::Void ShowWelcomeDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_LOGINMANAGERBASE_SHOWWELCOMEDIALOG_OFFSET))(this);
		}

		::System::Void RequestLoginByConsole(::System::String* token)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_LOGINMANAGERBASE_REQUESTLOGINBYCONSOLE_OFFSET))(this, token);
		}

		::System::Void AsynConsoleLogin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_LOGINMANAGERBASE_ASYNCONSOLELOGIN_OFFSET))(this);
		}

		::System::Void CanceldBinding()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_LOGINMANAGERBASE_CANCELDBINDING_OFFSET))(this);
		}

		::System::Void CreateAndBindNewAccount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_LOGINMANAGERBASE_CREATEANDBINDNEWACCOUNT_OFFSET))(this);
		}

		::System::Void OnBindExistingAccountCanceled()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_LOGINMANAGERBASE_ONBINDEXISTINGACCOUNTCANCELED_OFFSET))(this);
		}

		::System::Void BindExistingAccount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_LOGINMANAGERBASE_BINDEXISTINGACCOUNT_OFFSET))(this);
		}

		::System::Void ShowRealNameWeb(::MiHoYo::SDK::AccountModel* userModel)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_LOGINMANAGERBASE_SHOWREALNAMEWEB_OFFSET))(this, userModel);
		}

		::System::Void OnLoginCallback(::System::Int32 ret, ::System::String* msg, ::MiHoYo::SDK::AccountModel* userDataModel)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_LOGINMANAGERBASE_ONLOGINCALLBACK_OFFSET))(this, ret, msg, userDataModel);
		}

		::MiHoYo::SDK::RealNameOperation GetRealNameOperationType(::MiHoYo::SDK::JSONNode* model)
		{
			return ((::MiHoYo::SDK::RealNameOperation(*)(::PVOID, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_LOGINMANAGERBASE_GETREALNAMEOPERATIONTYPE_OFFSET))(this, model);
		}

		::System::String* GetAccountParameters(::MiHoYo::SDK::AccountModel* userData)
		{
			return ((::System::String*(*)(::PVOID, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_LOGINMANAGERBASE_GETACCOUNTPARAMETERS_OFFSET))(this, userData);
		}

		::System::Boolean EnvChanged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_LOGINMANAGERBASE_ENVCHANGED_OFFSET))(this);
		}

		::System::Void ReportShowAgreementDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_LOGINMANAGERBASE_REPORTSHOWAGREEMENTDIALOG_OFFSET))(this);
		}

		::System::Void ReportAcceptAgreements()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_LOGINMANAGERBASE_REPORTACCEPTAGREEMENTS_OFFSET))(this);
		}

		::System::Void ReportRefuseAgreements()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_LOGINMANAGERBASE_REPORTREFUSEAGREEMENTS_OFFSET))(this);
		}

		::System::Void _ShowReactivateDialog_b__16_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_LOGINMANAGERBASE__SHOWREACTIVATEDIALOG_B__16_0_OFFSET))(this);
		}

		::System::Void _ShowReactivateDialog_b__16_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_LOGINMANAGERBASE__SHOWREACTIVATEDIALOG_B__16_1_OFFSET))(this);
		}

		::System::Void _ShowRealNameDialog_b__17_0(::System::String* identity_card, ::System::String* realname)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_LOGINMANAGERBASE__SHOWREALNAMEDIALOG_B__17_0_OFFSET))(this, identity_card, realname);
		}

		::System::Void _ShowRealNameDialog_b__17_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_LOGINMANAGERBASE__SHOWREALNAMEDIALOG_B__17_1_OFFSET))(this);
		}
	};
}
