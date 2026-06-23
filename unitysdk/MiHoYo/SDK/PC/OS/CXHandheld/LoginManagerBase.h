#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/EnvType.h"
#include "unitysdk/MiHoYo/SDK/PC/OS/CXHandheld/HandheldUserAgreementDialog_DisplayMode.h"
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

#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE_ASYNHANDHELDLOGIN_OFFSET UNITYSDK_OFFSET(0x1C9647A0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE_BINDEXISTINGACCOUNT_OFFSET UNITYSDK_OFFSET(0x1C966E50)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE_CANCELDBINDING_OFFSET UNITYSDK_OFFSET(0x1C966B50)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE_CANOPENUSERCENTER_OFFSET UNITYSDK_OFFSET(0x1C965B50)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE_CREATEANDBINDNEWACCOUNT_OFFSET UNITYSDK_OFFSET(0x1C966D00)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE_ENVCHANGED_OFFSET UNITYSDK_OFFSET(0x1C964670)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE_GETACCOUNTPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1C9672D0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE_GETREALNAMEOPERATIONTYPE_OFFSET UNITYSDK_OFFSET(0x1C967010)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1C964470)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE_LOGIN_OFFSET UNITYSDK_OFFSET(0x1C964700)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE_LOGOUT_OFFSET UNITYSDK_OFFSET(0x1C964860)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE_ONBINDEXISTINGACCOUNTCANCELED_OFFSET UNITYSDK_OFFSET(0x1C966E40)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE_ONLOGINCALLBACK_OFFSET UNITYSDK_OFFSET(0x1C966AC0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE_OPENPROTOCOLWEBVIEW_OFFSET UNITYSDK_OFFSET(0x1C965800)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE_REPORTACCEPTAGREEMENTS_OFFSET UNITYSDK_OFFSET(0x1C967340)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE_REPORTREFUSEAGREEMENTS_OFFSET UNITYSDK_OFFSET(0x1C967710)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE_REPORTSHOWAGREEMENTDIALOG_OFFSET UNITYSDK_OFFSET(0x1C965F20)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE_REQUESTLOGINBYHANDHELD_OFFSET UNITYSDK_OFFSET(0x1C966660)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE_SHOWACCOUNTPRIVACYPOLICY_OFFSET UNITYSDK_OFFSET(0x1C965C90)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE_SHOWACCOUNTUSERAGREEMENT_OFFSET UNITYSDK_OFFSET(0x1C965BE0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE_SHOWCHILDRENPRIVACY_OFFSET UNITYSDK_OFFSET(0x1C965490)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE_SHOWPRIVACYPROTOCOL_OFFSET UNITYSDK_OFFSET(0x1C965120)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE_SHOWREACTIVATEDIALOG_OFFSET UNITYSDK_OFFSET(0x1C964C50)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE_SHOWUSERAGREEMENTDIALOG_OFFSET UNITYSDK_OFFSET(0x1C965D40)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE_SHOWUSERAGREEMENT_OFFSET UNITYSDK_OFFSET(0x1C964DB0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE_SHOWWELCOMEDIALOG_OFFSET UNITYSDK_OFFSET(0x1C966410)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE_SWITCHROLE_OFFSET UNITYSDK_OFFSET(0x1C964940)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE_SYNCFRIENDLIST_OFFSET UNITYSDK_OFFSET(0x1C965B40)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C9677B0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE__SHOWREACTIVATEDIALOG_B__16_0_OFFSET UNITYSDK_OFFSET(0x1C9677D0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE__SHOWREACTIVATEDIALOG_B__16_1_OFFSET UNITYSDK_OFFSET(0x1C967870)

namespace MiHoYo::SDK::PC::OS::CXHandheld
{
	inline static constexpr unsigned int LoginManagerBase_TypeDefinitionIndex = 20491;

	class LoginManagerBase : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::PC::OS::CXHandheld::LoginManagerBase** StaticGet__instance()
		{
			return (::MiHoYo::SDK::PC::OS::CXHandheld::LoginManagerBase**)Il2CppClass::FromTypeDefinitionIndex(LoginManagerBase_TypeDefinitionIndex)->GetStaticField(0xB1A0);
		}
		// static const ::System::String* PRIVACY_PROTOCOL; // 0x0
		// static const ::System::String* USER_AGREEMENT; // 0x0
		// static const ::System::String* CHILDREN_PROTOCOL; // 0x0
		// static const ::System::Int32 NEW_CONSOLE_USER = 0xFFFFFF1B; // 0x0
		// static const ::System::Int32 ACCOUNT_PLAT_NEW_CONSOLE_USER = 0xFFFFF318; // 0x0
		// static const ::System::Int32 TOKEN_INVALID = 0xFFFFFEE0; // 0x0
		::System::String* Platform; // 0x10
		::System::Action_3<::System::Int32, ::System::String*, ::MiHoYo::SDK::AccountModel*>* loginCallback; // 0x18
		::System::String* accessToken; // 0x20
		::MiHoYo::SDK::ReportType _loginReportType; // 0x28
		::System::Boolean isAgreementAccepted; // 0x2C
		::System::Boolean isNoRegister; // 0x2D
		::System::Boolean forceTokenRefresh; // 0x2E
		::MiHoYo::SDK::EnvType _envType; // 0x30
		::MiHoYo::SDK::ReportType _registerReportType; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE__CTOR_OFFSET))(this);
		}

		static ::MiHoYo::SDK::PC::OS::CXHandheld::LoginManagerBase* get_Instance()
		{
			return ((::MiHoYo::SDK::PC::OS::CXHandheld::LoginManagerBase*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE_GET_INSTANCE_OFFSET))();
		}

		::System::Void Login(::System::Action_3<::System::Int32, ::System::String*, ::MiHoYo::SDK::AccountModel*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_3<::System::Int32, ::System::String*, ::MiHoYo::SDK::AccountModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE_LOGIN_OFFSET))(this, callback);
		}

		::System::Void Logout()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE_LOGOUT_OFFSET))(this);
		}

		::System::Void SwitchRole(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE_SWITCHROLE_OFFSET))(this, callback);
		}

		::System::Void ShowReactivateDialog(::System::Boolean accountPlat)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE_SHOWREACTIVATEDIALOG_OFFSET))(this, accountPlat);
		}

		::System::Void ShowUserAgreement(::System::Action* closeCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE_SHOWUSERAGREEMENT_OFFSET))(this, closeCallback);
		}

		::System::Void ShowPrivacyProtocol(::System::Action* closeCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE_SHOWPRIVACYPROTOCOL_OFFSET))(this, closeCallback);
		}

		::System::Void ShowChildrenPrivacy(::System::Action* closeCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE_SHOWCHILDRENPRIVACY_OFFSET))(this, closeCallback);
		}

		::System::Void OpenProtocolWebView(::System::String* jsonString)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE_OPENPROTOCOLWEBVIEW_OFFSET))(this, jsonString);
		}

		::System::Void SyncFriendList(::System::String* jsonString)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE_SYNCFRIENDLIST_OFFSET))(this, jsonString);
		}

		::System::Boolean CanOpenUserCenter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE_CANOPENUSERCENTER_OFFSET))(this);
		}

		::System::Void ShowAccountUserAgreement(::System::Action* closeCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE_SHOWACCOUNTUSERAGREEMENT_OFFSET))(this, closeCallback);
		}

		::System::Void ShowAccountPrivacyPolicy(::System::Action* closeCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE_SHOWACCOUNTPRIVACYPOLICY_OFFSET))(this, closeCallback);
		}

		::System::Void ShowUserAgreementDialog(::System::Action* agreedCallback, ::MiHoYo::SDK::PC::OS::CXHandheld::HandheldUserAgreementDialog_DisplayMode mode)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::MiHoYo::SDK::PC::OS::CXHandheld::HandheldUserAgreementDialog_DisplayMode))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE_SHOWUSERAGREEMENTDIALOG_OFFSET))(this, agreedCallback, mode);
		}

		::System::Void ShowWelcomeDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE_SHOWWELCOMEDIALOG_OFFSET))(this);
		}

		::System::Void RequestLoginByHandheld(::System::String* token)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE_REQUESTLOGINBYHANDHELD_OFFSET))(this, token);
		}

		::System::Void AsynHandheldLogin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE_ASYNHANDHELDLOGIN_OFFSET))(this);
		}

		::System::Void CanceldBinding()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE_CANCELDBINDING_OFFSET))(this);
		}

		::System::Void CreateAndBindNewAccount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE_CREATEANDBINDNEWACCOUNT_OFFSET))(this);
		}

		::System::Void OnBindExistingAccountCanceled()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE_ONBINDEXISTINGACCOUNTCANCELED_OFFSET))(this);
		}

		::System::Void BindExistingAccount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE_BINDEXISTINGACCOUNT_OFFSET))(this);
		}

		::System::Void OnLoginCallback(::System::Int32 ret, ::System::String* msg, ::MiHoYo::SDK::AccountModel* userDataModel)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE_ONLOGINCALLBACK_OFFSET))(this, ret, msg, userDataModel);
		}

		::MiHoYo::SDK::RealNameOperation GetRealNameOperationType(::MiHoYo::SDK::JSONNode* model)
		{
			return ((::MiHoYo::SDK::RealNameOperation(*)(::PVOID, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE_GETREALNAMEOPERATIONTYPE_OFFSET))(this, model);
		}

		::System::String* GetAccountParameters(::MiHoYo::SDK::AccountModel* userData)
		{
			return ((::System::String*(*)(::PVOID, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE_GETACCOUNTPARAMETERS_OFFSET))(this, userData);
		}

		::System::Boolean EnvChanged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE_ENVCHANGED_OFFSET))(this);
		}

		::System::Void ReportShowAgreementDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE_REPORTSHOWAGREEMENTDIALOG_OFFSET))(this);
		}

		::System::Void ReportAcceptAgreements()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE_REPORTACCEPTAGREEMENTS_OFFSET))(this);
		}

		::System::Void ReportRefuseAgreements()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE_REPORTREFUSEAGREEMENTS_OFFSET))(this);
		}

		::System::Void _ShowReactivateDialog_b__16_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE__SHOWREACTIVATEDIALOG_B__16_0_OFFSET))(this);
		}

		::System::Void _ShowReactivateDialog_b__16_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE__SHOWREACTIVATEDIALOG_B__16_1_OFFSET))(this);
		}
	};
}
