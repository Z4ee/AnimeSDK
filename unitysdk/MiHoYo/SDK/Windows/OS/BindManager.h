#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/ReportType.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONObject; }
namespace MiHoYo::SDK { class NetworkResponseModelEx; }
namespace MiHoYo::SDK::UI::OS { class IWinAccountBindingDialog; }
namespace MiHoYo::SDK::UI::OS { class IWinBindingSuccessDialog; }
namespace MiHoYo::SDK::UI::OS { class IWinBindingWelcomeDialog; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Coroutine; }

#define MIHOYO_SDK_WINDOWS_OS_BINDMANAGER_BINDEMAIL_OFFSET UNITYSDK_OFFSET(0x174E4300)
#define MIHOYO_SDK_WINDOWS_OS_BINDMANAGER_BINDEXISTINGACCOUNT_OFFSET UNITYSDK_OFFSET(0x174E2A60)
#define MIHOYO_SDK_WINDOWS_OS_BINDMANAGER_CREATEANDBINDNEWACCOUNT_OFFSET UNITYSDK_OFFSET(0x174E3050)
#define MIHOYO_SDK_WINDOWS_OS_BINDMANAGER_GENERATEACCESSTOKEN_OFFSET UNITYSDK_OFFSET(0x174E2930)
#define MIHOYO_SDK_WINDOWS_OS_BINDMANAGER_GETACCOUNTPRIVACYPROTOCOLURL_OFFSET UNITYSDK_OFFSET(0x174E54C0)
#define MIHOYO_SDK_WINDOWS_OS_BINDMANAGER_GETACCOUNTUSERAGREEMENTURL_OFFSET UNITYSDK_OFFSET(0x174E5250)
#define MIHOYO_SDK_WINDOWS_OS_BINDMANAGER_GETBINDINGWEBURL_OFFSET UNITYSDK_OFFSET(0x174E32F0)
#define MIHOYO_SDK_WINDOWS_OS_BINDMANAGER_GETCAPTCHACODE_OFFSET UNITYSDK_OFFSET(0x174E3A10)
#define MIHOYO_SDK_WINDOWS_OS_BINDMANAGER_GETCHANNELNICKNAME_OFFSET UNITYSDK_OFFSET(0x174E5020)
#define MIHOYO_SDK_WINDOWS_OS_BINDMANAGER_GETREPORTTYPE_OFFSET UNITYSDK_OFFSET(0x174E6080)
#define MIHOYO_SDK_WINDOWS_OS_BINDMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x174E1D70)
#define MIHOYO_SDK_WINDOWS_OS_BINDMANAGER_GET_RSAKEY_OFFSET UNITYSDK_OFFSET(0x174E2120)
#define MIHOYO_SDK_WINDOWS_OS_BINDMANAGER_LOGINAFTERSUCCESSFULBINDING_OFFSET UNITYSDK_OFFSET(0x174E3070)
#define MIHOYO_SDK_WINDOWS_OS_BINDMANAGER_LOGINBYEMAILCAPTCHA_OFFSET UNITYSDK_OFFSET(0x174E3D80)
#define MIHOYO_SDK_WINDOWS_OS_BINDMANAGER_LOGREPORT_OFFSET UNITYSDK_OFFSET(0x174E24B0)
#define MIHOYO_SDK_WINDOWS_OS_BINDMANAGER_ONCLOSEDIALOG_OFFSET UNITYSDK_OFFSET(0x174E4F90)
#define MIHOYO_SDK_WINDOWS_OS_BINDMANAGER_PERFORMBINDINGFLOW_OFFSET UNITYSDK_OFFSET(0x174E3D00)
#define MIHOYO_SDK_WINDOWS_OS_BINDMANAGER_QUERYWEBBINDINGRESULT_OFFSET UNITYSDK_OFFSET(0x174E33F0)
#define MIHOYO_SDK_WINDOWS_OS_BINDMANAGER_REACTIVATEACCOUNT_OFFSET UNITYSDK_OFFSET(0x174E44D0)
#define MIHOYO_SDK_WINDOWS_OS_BINDMANAGER_REMOVESPACES_OFFSET UNITYSDK_OFFSET(0x174E3CC0)
#define MIHOYO_SDK_WINDOWS_OS_BINDMANAGER_REQUESTBINDTHIRDPARTY_OFFSET UNITYSDK_OFFSET(0x174E5CA0)
#define MIHOYO_SDK_WINDOWS_OS_BINDMANAGER_REQUESTCREATEACTIONTICKET_OFFSET UNITYSDK_OFFSET(0x174E3310)
#define MIHOYO_SDK_WINDOWS_OS_BINDMANAGER_REQUESTGETACTIONTICKETINFO_OFFSET UNITYSDK_OFFSET(0x174E3460)
#define MIHOYO_SDK_WINDOWS_OS_BINDMANAGER_REQUESTLOGINBYACTIONTICKET_OFFSET UNITYSDK_OFFSET(0x174E5560)
#define MIHOYO_SDK_WINDOWS_OS_BINDMANAGER_REQUESTREACTIVATEACCOUNT_OFFSET UNITYSDK_OFFSET(0x174E58C0)
#define MIHOYO_SDK_WINDOWS_OS_BINDMANAGER_REQUESTVERIFYCAPTCHA_OFFSET UNITYSDK_OFFSET(0x174E3EF0)
#define MIHOYO_SDK_WINDOWS_OS_BINDMANAGER_RISKCHECK_OFFSET UNITYSDK_OFFSET(0x174E4930)
#define MIHOYO_SDK_WINDOWS_OS_BINDMANAGER_SHOWACCOUNTPRIVACYPROTOCOL_OFFSET UNITYSDK_OFFSET(0x174E52E0)
#define MIHOYO_SDK_WINDOWS_OS_BINDMANAGER_SHOWACCOUNTUSERAGREEMENT_OFFSET UNITYSDK_OFFSET(0x174E5070)
#define MIHOYO_SDK_WINDOWS_OS_BINDMANAGER_SHOWBINDSUCCESSDIALOG_OFFSET UNITYSDK_OFFSET(0x174E3100)
#define MIHOYO_SDK_WINDOWS_OS_BINDMANAGER_SHOWWELCOMEDIALOG_OFFSET UNITYSDK_OFFSET(0x174E2740)
#define MIHOYO_SDK_WINDOWS_OS_BINDMANAGER_STARTACCOUNTBINDING_OFFSET UNITYSDK_OFFSET(0x174E2410)
#define MIHOYO_SDK_WINDOWS_OS_BINDMANAGER_STARTWEBBINDINGRESULTQUERYLOOP_OFFSET UNITYSDK_OFFSET(0x174E3810)
#define MIHOYO_SDK_WINDOWS_OS_BINDMANAGER_STOPWEBBINDINGRESULTQUERYLOOP_OFFSET UNITYSDK_OFFSET(0x174E3990)
#define MIHOYO_SDK_WINDOWS_OS_BINDMANAGER_UPDATEQRCODE_OFFSET UNITYSDK_OFFSET(0x174E2ED0)
#define MIHOYO_SDK_WINDOWS_OS_BINDMANAGER__BINDEXISTINGACCOUNT_B__34_0_OFFSET UNITYSDK_OFFSET(0x174E6350)
#define MIHOYO_SDK_WINDOWS_OS_BINDMANAGER__BINDEXISTINGACCOUNT_B__34_1_OFFSET UNITYSDK_OFFSET(0x174E6470)
#define MIHOYO_SDK_WINDOWS_OS_BINDMANAGER__BINDEXISTINGACCOUNT_B__34_2_OFFSET UNITYSDK_OFFSET(0x174E6560)
#define MIHOYO_SDK_WINDOWS_OS_BINDMANAGER__BINDEXISTINGACCOUNT_B__34_3_OFFSET UNITYSDK_OFFSET(0x174E65E0)
#define MIHOYO_SDK_WINDOWS_OS_BINDMANAGER__BINDEXISTINGACCOUNT_B__34_4_OFFSET UNITYSDK_OFFSET(0x174E6660)
#define MIHOYO_SDK_WINDOWS_OS_BINDMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x174E21D0)
#define MIHOYO_SDK_WINDOWS_OS_BINDMANAGER__PERFORMBINDINGFLOW_B__44_0_OFFSET UNITYSDK_OFFSET(0x174E7090)
#define MIHOYO_SDK_WINDOWS_OS_BINDMANAGER__QUERYWEBBINDINGRESULT_B__40_0_OFFSET UNITYSDK_OFFSET(0x174E6980)
#define MIHOYO_SDK_WINDOWS_OS_BINDMANAGER__SHOWBINDSUCCESSDIALOG_B__37_0_OFFSET UNITYSDK_OFFSET(0x174E6740)
#define MIHOYO_SDK_WINDOWS_OS_BINDMANAGER__SHOWBINDSUCCESSDIALOG_B__37_1_OFFSET UNITYSDK_OFFSET(0x174E6860)
#define MIHOYO_SDK_WINDOWS_OS_BINDMANAGER__SHOWWELCOMEDIALOG_B__33_0_OFFSET UNITYSDK_OFFSET(0x174E6090)
#define MIHOYO_SDK_WINDOWS_OS_BINDMANAGER__SHOWWELCOMEDIALOG_B__33_1_OFFSET UNITYSDK_OFFSET(0x174E61B0)
#define MIHOYO_SDK_WINDOWS_OS_BINDMANAGER__SHOWWELCOMEDIALOG_B__33_2_OFFSET UNITYSDK_OFFSET(0x174E62C0)

namespace MiHoYo::SDK::Windows::OS
{
	inline static constexpr unsigned int BindManager_TypeDefinitionIndex = 7388;

	class BindManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Windows::OS::BindManager** StaticGet__instance()
		{
			return (::MiHoYo::SDK::Windows::OS::BindManager**)Il2CppClass::FromTypeDefinitionIndex(BindManager_TypeDefinitionIndex)->GetStaticField(0x8B0);
		}
		// static const ::System::String* ACTION_TYPE_LOGIN_BY_EMAIL; // 0x0
		// static const ::System::String* ACTION_TYPE_BIND_THIRDPARTY; // 0x0
		// static const ::System::String* PASSPORT_HEADER_KEY_APP_ID_HEADER; // 0x0
		// static const ::System::String* PASSPORT_HEADER_KEY_AIGIS_USE_V4_HEADER; // 0x0
		// static const ::System::String* PASSPORT_HEADER_KEY_AIGIS_HEADER; // 0x0
		// static const ::System::String* PASSPORT_HEADER_KEY_REACTIVATE_HEADER; // 0x0
		// static const ::System::String* ACCOUNT_USER_AGREEMENT_URL_OS; // 0x0
		// static const ::System::String* ACCOUNT_PRIVACY_POLICY_URL_OS; // 0x0
		// static const ::System::Int32 WEB_BINDING_RESULT_QUERY_INTERVAL_SEC = 0x2; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* _commonHeaders; // 0x10
		::System::String* _userId; // 0x18
		::System::String* _sToken; // 0x20
		::System::String* _loginTicket; // 0x28
		::System::Action_1<::System::Boolean>* _processCompletedCallback; // 0x30
		::MiHoYo::SDK::UI::OS::IWinAccountBindingDialog* _accountBindingDialog; // 0x38
		::MiHoYo::SDK::UI::OS::IWinBindingSuccessDialog* _bindingSuccessDialog; // 0x40
		::System::String* PLATFORM; // 0x48
		::System::String* H5LOG_REPORT_MODULE; // 0x50
		::MiHoYo::SDK::UI::OS::IWinBindingWelcomeDialog* _bindingWelcomeDialog; // 0x58
		::System::String* _webTicket; // 0x60
		::System::Action* _processCancelledCallback; // 0x68
		::System::String* _userEmail; // 0x70
		::UnityEngine::Coroutine* _webBindingResultQueryCoroutine; // 0x78
		::System::String* _accessToken; // 0x80
		::MiHoYo::SDK::JSONObject* _captchaVerifyCombination; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_BINDMANAGER__CTOR_OFFSET))(this);
		}

		static ::MiHoYo::SDK::Windows::OS::BindManager* get_Instance()
		{
			return ((::MiHoYo::SDK::Windows::OS::BindManager*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_BINDMANAGER_GET_INSTANCE_OFFSET))();
		}

		static ::System::String* get_RSAKey()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_BINDMANAGER_GET_RSAKEY_OFFSET))();
		}

		::System::Void StartAccountBinding(::System::Action* cancelCallback, ::System::Action_1<::System::Boolean>* completeCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_BINDMANAGER_STARTACCOUNTBINDING_OFFSET))(this, cancelCallback, completeCallback);
		}

		::System::Void GenerateAccessToken(::System::Action_1<::System::String*>* callback, ::System::Boolean refreshToken)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_BINDMANAGER_GENERATEACCESSTOKEN_OFFSET))(this, callback, refreshToken);
		}

		::System::Void ShowWelcomeDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_BINDMANAGER_SHOWWELCOMEDIALOG_OFFSET))(this);
		}

		::System::Void BindExistingAccount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_BINDMANAGER_BINDEXISTINGACCOUNT_OFFSET))(this);
		}

		::System::Void CreateAndBindNewAccount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_BINDMANAGER_CREATEANDBINDNEWACCOUNT_OFFSET))(this);
		}

		::System::Void LoginAfterSuccessfulBinding()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_BINDMANAGER_LOGINAFTERSUCCESSFULBINDING_OFFSET))(this);
		}

		::System::Void ShowBindSuccessDialog(::System::String* channelNickname, ::System::String* hoyoName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_BINDMANAGER_SHOWBINDSUCCESSDIALOG_OFFSET))(this, channelNickname, hoyoName);
		}

		::System::String* GetBindingWebURL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_BINDMANAGER_GETBINDINGWEBURL_OFFSET))(this);
		}

		::System::Void UpdateQRCode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_BINDMANAGER_UPDATEQRCODE_OFFSET))(this);
		}

		::System::Void QueryWebBindingResult()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_BINDMANAGER_QUERYWEBBINDINGRESULT_OFFSET))(this);
		}

		::System::Void StartWebBindingResultQueryLoop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_BINDMANAGER_STARTWEBBINDINGRESULTQUERYLOOP_OFFSET))(this);
		}

		::System::Void StopWebBindingResultQueryLoop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_BINDMANAGER_STOPWEBBINDINGRESULTQUERYLOOP_OFFSET))(this);
		}

		::System::Void GetCaptchaCode(::System::String* account)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_BINDMANAGER_GETCAPTCHACODE_OFFSET))(this, account);
		}

		::System::Void PerformBindingFlow(::System::String* captcha)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_BINDMANAGER_PERFORMBINDINGFLOW_OFFSET))(this, captcha);
		}

		::System::Void LoginByEmailCaptcha(::System::String* captcha, ::System::Action* completeCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_BINDMANAGER_LOGINBYEMAILCAPTCHA_OFFSET))(this, captcha, completeCallback);
		}

		::System::Void BindEmail()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_BINDMANAGER_BINDEMAIL_OFFSET))(this);
		}

		::System::Void ReactivateAccount(::System::String* reactivateTicket, ::System::Action* completeCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_BINDMANAGER_REACTIVATEACCOUNT_OFFSET))(this, reactivateTicket, completeCallback);
		}

		::System::Void RiskCheck(::System::String* aigisParams, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_BINDMANAGER_RISKCHECK_OFFSET))(this, aigisParams, callback);
		}

		::System::Void OnCloseDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_BINDMANAGER_ONCLOSEDIALOG_OFFSET))(this);
		}

		::System::String* GetChannelNickname()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_BINDMANAGER_GETCHANNELNICKNAME_OFFSET))(this);
		}

		::System::Void ShowAccountUserAgreement()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_BINDMANAGER_SHOWACCOUNTUSERAGREEMENT_OFFSET))(this);
		}

		::System::Void ShowAccountPrivacyProtocol()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_BINDMANAGER_SHOWACCOUNTPRIVACYPROTOCOL_OFFSET))(this);
		}

		::System::String* GetAccountUserAgreementURL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_BINDMANAGER_GETACCOUNTUSERAGREEMENTURL_OFFSET))(this);
		}

		::System::String* GetAccountPrivacyProtocolURL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_BINDMANAGER_GETACCOUNTPRIVACYPROTOCOLURL_OFFSET))(this);
		}

		::System::Void RequestCreateActionTicket(::System::String* actionType, ::System::String* account, ::System::Boolean refreshToken, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>* callback, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* extHeaders)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_BINDMANAGER_REQUESTCREATEACTIONTICKET_OFFSET))(this, actionType, account, refreshToken, callback, extHeaders);
		}

		::System::Void RequestVerifyCaptcha(::System::String* captcha, ::System::String* actionTicket, ::MiHoYo::SDK::JSONObject* captchaVerifyCombination, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>* callback, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* extHeaders)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::MiHoYo::SDK::JSONObject*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_BINDMANAGER_REQUESTVERIFYCAPTCHA_OFFSET))(this, captcha, actionTicket, captchaVerifyCombination, callback, extHeaders);
		}

		::System::Void RequestLoginByActionTicket(::System::String* actionTicket, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>* callback, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* extHeaders)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_BINDMANAGER_REQUESTLOGINBYACTIONTICKET_OFFSET))(this, actionTicket, callback, extHeaders);
		}

		::System::Void RequestReactivateAccount(::System::String* actionTicket, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>* callback, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* extHeaders)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_BINDMANAGER_REQUESTREACTIVATEACCOUNT_OFFSET))(this, actionTicket, callback, extHeaders);
		}

		::System::Void RequestBindThirdparty(::System::String* actionTicket, ::System::String* stoken, ::System::String* uid, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>* callback, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* extHeaders)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_BINDMANAGER_REQUESTBINDTHIRDPARTY_OFFSET))(this, actionTicket, stoken, uid, callback, extHeaders);
		}

		::System::Void RequestGetActionTicketInfo(::System::String* actionTicket, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>* callback, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* extHeaders)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_BINDMANAGER_REQUESTGETACTIONTICKETINFO_OFFSET))(this, actionTicket, callback, extHeaders);
		}

		::System::String* RemoveSpaces(::System::String* input)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_BINDMANAGER_REMOVESPACES_OFFSET))(this, input);
		}

		::System::Void LogReport(::System::String* msg, ::System::Int32 code)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_BINDMANAGER_LOGREPORT_OFFSET))(this, msg, code);
		}

		::MiHoYo::SDK::ReportType GetReportType()
		{
			return ((::MiHoYo::SDK::ReportType(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_BINDMANAGER_GETREPORTTYPE_OFFSET))(this);
		}

		::System::Void _ShowWelcomeDialog_b__33_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_BINDMANAGER__SHOWWELCOMEDIALOG_B__33_0_OFFSET))(this);
		}

		::System::Void _ShowWelcomeDialog_b__33_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_BINDMANAGER__SHOWWELCOMEDIALOG_B__33_1_OFFSET))(this);
		}

		::System::Void _ShowWelcomeDialog_b__33_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_BINDMANAGER__SHOWWELCOMEDIALOG_B__33_2_OFFSET))(this);
		}

		::System::Void _BindExistingAccount_b__34_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_BINDMANAGER__BINDEXISTINGACCOUNT_B__34_0_OFFSET))(this);
		}

		::System::Void _BindExistingAccount_b__34_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_BINDMANAGER__BINDEXISTINGACCOUNT_B__34_1_OFFSET))(this);
		}

		::System::Void _BindExistingAccount_b__34_2(::System::String* account)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_BINDMANAGER__BINDEXISTINGACCOUNT_B__34_2_OFFSET))(this, account);
		}

		::System::Void _BindExistingAccount_b__34_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_BINDMANAGER__BINDEXISTINGACCOUNT_B__34_3_OFFSET))(this);
		}

		::System::Void _BindExistingAccount_b__34_4(::System::String* captcha)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_BINDMANAGER__BINDEXISTINGACCOUNT_B__34_4_OFFSET))(this, captcha);
		}

		::System::Void _ShowBindSuccessDialog_b__37_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_BINDMANAGER__SHOWBINDSUCCESSDIALOG_B__37_0_OFFSET))(this);
		}

		::System::Void _ShowBindSuccessDialog_b__37_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_BINDMANAGER__SHOWBINDSUCCESSDIALOG_B__37_1_OFFSET))(this);
		}

		::System::Void _QueryWebBindingResult_b__40_0(::MiHoYo::SDK::NetworkResponseModelEx* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModelEx*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_BINDMANAGER__QUERYWEBBINDINGRESULT_B__40_0_OFFSET))(this, response);
		}

		::System::Void _PerformBindingFlow_b__44_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_BINDMANAGER__PERFORMBINDINGFLOW_B__44_0_OFFSET))(this);
		}
	};
}
