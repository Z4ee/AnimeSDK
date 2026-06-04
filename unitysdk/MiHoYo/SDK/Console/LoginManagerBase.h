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

#define MIHOYO_SDK_CONSOLE_LOGINMANAGERBASE_ASYNCONSOLELOGIN_OFFSET UNITYSDK_OFFSET(0x18240A30)
#define MIHOYO_SDK_CONSOLE_LOGINMANAGERBASE_BINDEXISTINGACCOUNT_OFFSET UNITYSDK_OFFSET(0x18242960)
#define MIHOYO_SDK_CONSOLE_LOGINMANAGERBASE_CANCELDBINDING_OFFSET UNITYSDK_OFFSET(0x18242710)
#define MIHOYO_SDK_CONSOLE_LOGINMANAGERBASE_CANOPENUSERCENTER_OFFSET UNITYSDK_OFFSET(0x18241920)
#define MIHOYO_SDK_CONSOLE_LOGINMANAGERBASE_CREATEANDBINDNEWACCOUNT_OFFSET UNITYSDK_OFFSET(0x18242860)
#define MIHOYO_SDK_CONSOLE_LOGINMANAGERBASE_ENVCHANGED_OFFSET UNITYSDK_OFFSET(0x18240840)
#define MIHOYO_SDK_CONSOLE_LOGINMANAGERBASE_GETACCOUNTPARAMETERS_OFFSET UNITYSDK_OFFSET(0x18242CB0)
#define MIHOYO_SDK_CONSOLE_LOGINMANAGERBASE_GETREALNAMEOPERATIONTYPE_OFFSET UNITYSDK_OFFSET(0x18242D20)
#define MIHOYO_SDK_CONSOLE_LOGINMANAGERBASE_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x18224860)
#define MIHOYO_SDK_CONSOLE_LOGINMANAGERBASE_LOGIN_OFFSET UNITYSDK_OFFSET(0x18224BD0)
#define MIHOYO_SDK_CONSOLE_LOGINMANAGERBASE_LOGOUT_OFFSET UNITYSDK_OFFSET(0x182250D0)
#define MIHOYO_SDK_CONSOLE_LOGINMANAGERBASE_ONBINDEXISTINGACCOUNTCANCELED_OFFSET UNITYSDK_OFFSET(0x18242950)
#define MIHOYO_SDK_CONSOLE_LOGINMANAGERBASE_ONLOGINCALLBACK_OFFSET UNITYSDK_OFFSET(0x1821CE80)
#define MIHOYO_SDK_CONSOLE_LOGINMANAGERBASE_OPENPROTOCOLWEBVIEW_OFFSET UNITYSDK_OFFSET(0x18241670)
#define MIHOYO_SDK_CONSOLE_LOGINMANAGERBASE_REPORTACCEPTAGREEMENTS_OFFSET UNITYSDK_OFFSET(0x18243030)
#define MIHOYO_SDK_CONSOLE_LOGINMANAGERBASE_REPORTREFUSEAGREEMENTS_OFFSET UNITYSDK_OFFSET(0x182433B0)
#define MIHOYO_SDK_CONSOLE_LOGINMANAGERBASE_REPORTSHOWAGREEMENTDIALOG_OFFSET UNITYSDK_OFFSET(0x18241C50)
#define MIHOYO_SDK_CONSOLE_LOGINMANAGERBASE_REQUESTLOGINBYCONSOLE_OFFSET UNITYSDK_OFFSET(0x182421E0)
#define MIHOYO_SDK_CONSOLE_LOGINMANAGERBASE_SHOWACCOUNTPRIVACYPOLICY_OFFSET UNITYSDK_OFFSET(0x182419C0)
#define MIHOYO_SDK_CONSOLE_LOGINMANAGERBASE_SHOWACCOUNTUSERAGREEMENT_OFFSET UNITYSDK_OFFSET(0x18241980)
#define MIHOYO_SDK_CONSOLE_LOGINMANAGERBASE_SHOWCHILDRENPRIVACY_OFFSET UNITYSDK_OFFSET(0x18241420)
#define MIHOYO_SDK_CONSOLE_LOGINMANAGERBASE_SHOWPRIVACYPROTOCOL_OFFSET UNITYSDK_OFFSET(0x182411D0)
#define MIHOYO_SDK_CONSOLE_LOGINMANAGERBASE_SHOWREACTIVATEDIALOG_OFFSET UNITYSDK_OFFSET(0x18240C80)
#define MIHOYO_SDK_CONSOLE_LOGINMANAGERBASE_SHOWREALNAMEDIALOG_OFFSET UNITYSDK_OFFSET(0x18240E00)
#define MIHOYO_SDK_CONSOLE_LOGINMANAGERBASE_SHOWREALNAMEWEB_OFFSET UNITYSDK_OFFSET(0x18242B60)
#define MIHOYO_SDK_CONSOLE_LOGINMANAGERBASE_SHOWUSERAGREEMENTDIALOG_OFFSET UNITYSDK_OFFSET(0x18241A00)
#define MIHOYO_SDK_CONSOLE_LOGINMANAGERBASE_SHOWUSERAGREEMENT_OFFSET UNITYSDK_OFFSET(0x18240F80)
#define MIHOYO_SDK_CONSOLE_LOGINMANAGERBASE_SHOWWELCOMEDIALOG_OFFSET UNITYSDK_OFFSET(0x18242010)
#define MIHOYO_SDK_CONSOLE_LOGINMANAGERBASE_SWITCHROLE_OFFSET UNITYSDK_OFFSET(0x182251C0)
#define MIHOYO_SDK_CONSOLE_LOGINMANAGERBASE_SYNCFRIENDLIST_OFFSET UNITYSDK_OFFSET(0x18241910)
#define MIHOYO_SDK_CONSOLE_LOGINMANAGERBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x18243420)
#define MIHOYO_SDK_CONSOLE_LOGINMANAGERBASE__SHOWREACTIVATEDIALOG_B__16_0_OFFSET UNITYSDK_OFFSET(0x18243440)
#define MIHOYO_SDK_CONSOLE_LOGINMANAGERBASE__SHOWREACTIVATEDIALOG_B__16_1_OFFSET UNITYSDK_OFFSET(0x182434C0)
#define MIHOYO_SDK_CONSOLE_LOGINMANAGERBASE__SHOWREALNAMEDIALOG_B__17_0_OFFSET UNITYSDK_OFFSET(0x18243660)
#define MIHOYO_SDK_CONSOLE_LOGINMANAGERBASE__SHOWREALNAMEDIALOG_B__17_1_OFFSET UNITYSDK_OFFSET(0x182436F0)

namespace MiHoYo::SDK::Console
{
	inline static constexpr unsigned int LoginManagerBase_TypeDefinitionIndex = 8638;

	class LoginManagerBase : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Console::LoginManagerBase** StaticGet__instance()
		{
			return (::MiHoYo::SDK::Console::LoginManagerBase**)Il2CppClass::FromTypeDefinitionIndex(LoginManagerBase_TypeDefinitionIndex)->GetStaticField(0xFD00);
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
		::System::Boolean forceTokenRefresh; // 0x28
		::System::Boolean isAgreementAccepted; // 0x29
		::System::Boolean isNoRegister; // 0x2A
		::MiHoYo::SDK::ReportType _loginReportType; // 0x2C
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

		::System::Void Login(::System::Action_3<::System::Int32, ::System::String*, ::MiHoYo::SDK::AccountModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_3<::System::Int32, ::System::String*, ::MiHoYo::SDK::AccountModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_LOGINMANAGERBASE_LOGIN_OFFSET))(this, a1);
		}

		::System::Void Logout()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_LOGINMANAGERBASE_LOGOUT_OFFSET))(this);
		}

		::System::Void SwitchRole(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_LOGINMANAGERBASE_SWITCHROLE_OFFSET))(this, a1);
		}

		::System::Void ShowReactivateDialog(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_LOGINMANAGERBASE_SHOWREACTIVATEDIALOG_OFFSET))(this, a1);
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

		::System::Void OpenProtocolWebView(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_LOGINMANAGERBASE_OPENPROTOCOLWEBVIEW_OFFSET))(this, a1);
		}

		::System::Void SyncFriendList(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_LOGINMANAGERBASE_SYNCFRIENDLIST_OFFSET))(this, a1);
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

		::System::Void ShowUserAgreementDialog(::System::Action* a1, ::MiHoYo::SDK::Console::ConsoleUserAgreementDialog_DisplayMode a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::MiHoYo::SDK::Console::ConsoleUserAgreementDialog_DisplayMode))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_LOGINMANAGERBASE_SHOWUSERAGREEMENTDIALOG_OFFSET))(this, a1, a2);
		}

		::System::Void ShowWelcomeDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_LOGINMANAGERBASE_SHOWWELCOMEDIALOG_OFFSET))(this);
		}

		::System::Void RequestLoginByConsole(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_LOGINMANAGERBASE_REQUESTLOGINBYCONSOLE_OFFSET))(this, a1);
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

		::System::Void ShowRealNameWeb(::MiHoYo::SDK::AccountModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_LOGINMANAGERBASE_SHOWREALNAMEWEB_OFFSET))(this, a1);
		}

		::System::Void OnLoginCallback(::System::Int32 a1, ::System::String* a2, ::MiHoYo::SDK::AccountModel* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_LOGINMANAGERBASE_ONLOGINCALLBACK_OFFSET))(this, a1, a2, a3);
		}

		::MiHoYo::SDK::RealNameOperation GetRealNameOperationType(::MiHoYo::SDK::JSONNode* a1)
		{
			return ((::MiHoYo::SDK::RealNameOperation(*)(::PVOID, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_LOGINMANAGERBASE_GETREALNAMEOPERATIONTYPE_OFFSET))(this, a1);
		}

		::System::String* GetAccountParameters(::MiHoYo::SDK::AccountModel* a1)
		{
			return ((::System::String*(*)(::PVOID, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_LOGINMANAGERBASE_GETACCOUNTPARAMETERS_OFFSET))(this, a1);
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

		::System::Void _ShowRealNameDialog_b__17_0(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_LOGINMANAGERBASE__SHOWREALNAMEDIALOG_B__17_0_OFFSET))(this, a1, a2);
		}

		::System::Void _ShowRealNameDialog_b__17_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_LOGINMANAGERBASE__SHOWREALNAMEDIALOG_B__17_1_OFFSET))(this);
		}
	};
}
