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

#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_BINDEMAIL_OFFSET UNITYSDK_OFFSET(0x1CFED0A0)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_BINDEXISTINGACCOUNT_OFFSET UNITYSDK_OFFSET(0x1CFEB610)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_CREATEANDBINDNEWACCOUNT_OFFSET UNITYSDK_OFFSET(0x1CFEB5B0)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_GENERATEACCESSTOKEN_OFFSET UNITYSDK_OFFSET(0x1CFEB490)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_GETBINDINGWEBURL_OFFSET UNITYSDK_OFFSET(0x1CFEBF20)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_GETCAPTCHACODE_OFFSET UNITYSDK_OFFSET(0x1CFEC670)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_GETCHANNELNICKNAME_OFFSET UNITYSDK_OFFSET(0x1CFEDD40)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_GETREPORTTYPE_OFFSET UNITYSDK_OFFSET(0x1CFEEB10)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1CFC46D0)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_GET_RSAKEY_OFFSET UNITYSDK_OFFSET(0x1CFEACF0)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_ISBINDINGACCOUNTSWITCHON_OFFSET UNITYSDK_OFFSET(0x1CFEB480)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_LOGINAFTERSUCCESSFULBINDING_OFFSET UNITYSDK_OFFSET(0x1CFEBC80)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_LOGINBYEMAILCAPTCHA_OFFSET UNITYSDK_OFFSET(0x1CFECA10)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_LOGREPORT_OFFSET UNITYSDK_OFFSET(0x1CFEAF40)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_ONCLOSEDIALOG_OFFSET UNITYSDK_OFFSET(0x1CFEDC90)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_PERFORMBINDINGFLOW_OFFSET UNITYSDK_OFFSET(0x1CFEC990)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_QUERYWEBBINDINGRESULT_OFFSET UNITYSDK_OFFSET(0x1CFEC040)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_REACTIVATEACCOUNT_OFFSET UNITYSDK_OFFSET(0x1CFED260)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_REMOVESPACES_OFFSET UNITYSDK_OFFSET(0x1CFEC930)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_REQUESTBINDTHIRDPARTY_OFFSET UNITYSDK_OFFSET(0x1CFEE680)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_REQUESTCREATEACTIONTICKET_OFFSET UNITYSDK_OFFSET(0x1CFEBF60)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_REQUESTGETACTIONTICKETINFO_OFFSET UNITYSDK_OFFSET(0x1CFEC0B0)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_REQUESTLOGINBYACTIONTICKET_OFFSET UNITYSDK_OFFSET(0x1CFEDE80)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_REQUESTREACTIVATEACCOUNT_OFFSET UNITYSDK_OFFSET(0x1CFEE240)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_REQUESTVERIFYCAPTCHA_OFFSET UNITYSDK_OFFSET(0x1CFECB90)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_RISKCHECK_OFFSET UNITYSDK_OFFSET(0x1CFED6B0)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_SAVEPREBINDINGPROTOCOLAGREERECORD_OFFSET UNITYSDK_OFFSET(0x1CFEDE70)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_SHOWBINDSUCCESSDIALOG_OFFSET UNITYSDK_OFFSET(0x1CFEBD50)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_SHOWPREBINDINGPROTOCOLDIALOG_OFFSET UNITYSDK_OFFSET(0x1CFEDDC0)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_SHOWWELCOMEDIALOG_OFFSET UNITYSDK_OFFSET(0x1CFEB170)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_STARTACCOUNTBINDING_OFFSET UNITYSDK_OFFSET(0x1CFC4A20)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_STARTWEBBINDINGRESULTQUERYLOOP_OFFSET UNITYSDK_OFFSET(0x1CFEC520)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_STOPWEBBINDINGRESULTQUERYLOOP_OFFSET UNITYSDK_OFFSET(0x1CFEC620)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_UPDATEQRCODE_OFFSET UNITYSDK_OFFSET(0x1CFEBAF0)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER__BINDEXISTINGACCOUNT_B__34_0_OFFSET UNITYSDK_OFFSET(0x1CFEEDD0)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER__BINDEXISTINGACCOUNT_B__34_1_OFFSET UNITYSDK_OFFSET(0x1CFEEE60)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER__BINDEXISTINGACCOUNT_B__34_2_OFFSET UNITYSDK_OFFSET(0x1CFEEFA0)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER__BINDEXISTINGACCOUNT_B__34_3_OFFSET UNITYSDK_OFFSET(0x1CFEF050)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER__BINDEXISTINGACCOUNT_B__34_4_OFFSET UNITYSDK_OFFSET(0x1CFEF0F0)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFEADA0)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER__PERFORMBINDINGFLOW_B__44_0_OFFSET UNITYSDK_OFFSET(0x1CFEF7C0)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER__QUERYWEBBINDINGRESULT_B__40_0_OFFSET UNITYSDK_OFFSET(0x1CFEF320)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER__SHOWBINDSUCCESSDIALOG_B__37_0_OFFSET UNITYSDK_OFFSET(0x1CFEF200)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER__SHOWBINDSUCCESSDIALOG_B__37_1_OFFSET UNITYSDK_OFFSET(0x1CFEF290)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER__SHOWWELCOMEDIALOG_B__33_0_OFFSET UNITYSDK_OFFSET(0x1CFEEB20)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER__SHOWWELCOMEDIALOG_B__33_1_OFFSET UNITYSDK_OFFSET(0x1CFEEBB0)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER__SHOWWELCOMEDIALOG_B__33_2_OFFSET UNITYSDK_OFFSET(0x1CFEED40)

namespace MiHoYo::SDK::Windows::OS::Channel
{
	inline static constexpr unsigned int BindManager_TypeDefinitionIndex = 20468;

	class BindManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Windows::OS::Channel::BindManager** StaticGet__instance()
		{
			return (::MiHoYo::SDK::Windows::OS::Channel::BindManager**)Il2CppClass::FromTypeDefinitionIndex(BindManager_TypeDefinitionIndex)->GetStaticField(0xB340);
		}
		// static const ::System::String* ACTION_TYPE_LOGIN_BY_EMAIL; // 0x0
		// static const ::System::String* ACTION_TYPE_BIND_THIRDPARTY; // 0x0
		// static const ::System::String* PASSPORT_HEADER_KEY_APP_ID_HEADER; // 0x0
		// static const ::System::String* PASSPORT_HEADER_KEY_AIGIS_USE_V4_HEADER; // 0x0
		// static const ::System::String* PASSPORT_HEADER_KEY_AIGIS_HEADER; // 0x0
		// static const ::System::String* PASSPORT_HEADER_KEY_REACTIVATE_HEADER; // 0x0
		// static const ::System::Int32 WEB_BINDING_RESULT_QUERY_INTERVAL_SEC = 0x2; // 0x0
		::MiHoYo::SDK::JSONObject* _captchaVerifyCombination; // 0x10
		::System::Action* _processCancelledCallback; // 0x18
		::System::String* _userId; // 0x20
		::System::String* _userInputAccount; // 0x28
		::System::String* PLATFORM; // 0x30
		::UnityEngine::Coroutine* _webBindingResultQueryCoroutine; // 0x38
		::System::String* _accessToken; // 0x40
		::System::String* H5LOG_REPORT_MODULE; // 0x48
		::System::String* _userEmail; // 0x50
		::System::String* _sToken; // 0x58
		::MiHoYo::SDK::UI::OS::IWinBindingSuccessDialog* _bindingSuccessDialog; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* _commonHeaders; // 0x68
		::System::Action_1<::System::Boolean>* _processCompletedCallback; // 0x70
		::System::String* _webTicket; // 0x78
		::MiHoYo::SDK::UI::OS::IWinBindingWelcomeDialog* _bindingWelcomeDialog; // 0x80
		::MiHoYo::SDK::UI::OS::IWinAccountBindingDialog* _accountBindingDialog; // 0x88
		::System::String* _loginTicket; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER__CTOR_OFFSET))(this);
		}

		static ::MiHoYo::SDK::Windows::OS::Channel::BindManager* get_Instance()
		{
			return ((::MiHoYo::SDK::Windows::OS::Channel::BindManager*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_GET_INSTANCE_OFFSET))();
		}

		static ::System::String* get_RSAKey()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_GET_RSAKEY_OFFSET))();
		}

		::System::Void StartAccountBinding(::System::Action* cancelCallback, ::System::Action_1<::System::Boolean>* completeCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_STARTACCOUNTBINDING_OFFSET))(this, cancelCallback, completeCallback);
		}

		::System::Boolean IsBindingAccountSwitchOn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_ISBINDINGACCOUNTSWITCHON_OFFSET))(this);
		}

		::System::Void GenerateAccessToken(::System::Action_1<::System::String*>* callback, ::System::Boolean refreshToken)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_GENERATEACCESSTOKEN_OFFSET))(this, callback, refreshToken);
		}

		::System::Void ShowWelcomeDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_SHOWWELCOMEDIALOG_OFFSET))(this);
		}

		::System::Void BindExistingAccount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_BINDEXISTINGACCOUNT_OFFSET))(this);
		}

		::System::Void CreateAndBindNewAccount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_CREATEANDBINDNEWACCOUNT_OFFSET))(this);
		}

		::System::Void LoginAfterSuccessfulBinding()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_LOGINAFTERSUCCESSFULBINDING_OFFSET))(this);
		}

		::System::Void ShowBindSuccessDialog(::System::String* channelNickname, ::System::String* hoyoName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_SHOWBINDSUCCESSDIALOG_OFFSET))(this, channelNickname, hoyoName);
		}

		::System::String* GetBindingWebURL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_GETBINDINGWEBURL_OFFSET))(this);
		}

		::System::Void UpdateQRCode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_UPDATEQRCODE_OFFSET))(this);
		}

		::System::Void QueryWebBindingResult()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_QUERYWEBBINDINGRESULT_OFFSET))(this);
		}

		::System::Void StartWebBindingResultQueryLoop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_STARTWEBBINDINGRESULTQUERYLOOP_OFFSET))(this);
		}

		::System::Void StopWebBindingResultQueryLoop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_STOPWEBBINDINGRESULTQUERYLOOP_OFFSET))(this);
		}

		::System::Void GetCaptchaCode(::System::String* account)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_GETCAPTCHACODE_OFFSET))(this, account);
		}

		::System::Void PerformBindingFlow(::System::String* captcha)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_PERFORMBINDINGFLOW_OFFSET))(this, captcha);
		}

		::System::Void LoginByEmailCaptcha(::System::String* captcha, ::System::Action* completeCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_LOGINBYEMAILCAPTCHA_OFFSET))(this, captcha, completeCallback);
		}

		::System::Void BindEmail()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_BINDEMAIL_OFFSET))(this);
		}

		::System::Void ReactivateAccount(::System::String* reactivateTicket, ::System::Action* completeCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_REACTIVATEACCOUNT_OFFSET))(this, reactivateTicket, completeCallback);
		}

		::System::Void RiskCheck(::System::String* aigisParams, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_RISKCHECK_OFFSET))(this, aigisParams, callback);
		}

		::System::Void OnCloseDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_ONCLOSEDIALOG_OFFSET))(this);
		}

		::System::String* GetChannelNickname()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_GETCHANNELNICKNAME_OFFSET))(this);
		}

		::System::Void ShowPreBindingProtocolDialog(::System::Action* onProtocolAccepted, ::System::Action* onProtocolRefused)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_SHOWPREBINDINGPROTOCOLDIALOG_OFFSET))(this, onProtocolAccepted, onProtocolRefused);
		}

		::System::Void SavePreBindingProtocolAgreeRecord()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_SAVEPREBINDINGPROTOCOLAGREERECORD_OFFSET))(this);
		}

		::System::Void RequestCreateActionTicket(::System::String* actionType, ::System::String* account, ::System::Boolean refreshToken, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>* callback, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* extHeaders)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_REQUESTCREATEACTIONTICKET_OFFSET))(this, actionType, account, refreshToken, callback, extHeaders);
		}

		::System::Void RequestVerifyCaptcha(::System::String* captcha, ::System::String* actionTicket, ::MiHoYo::SDK::JSONObject* captchaVerifyCombination, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>* callback, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* extHeaders)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::MiHoYo::SDK::JSONObject*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_REQUESTVERIFYCAPTCHA_OFFSET))(this, captcha, actionTicket, captchaVerifyCombination, callback, extHeaders);
		}

		::System::Void RequestLoginByActionTicket(::System::String* actionTicket, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>* callback, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* extHeaders)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_REQUESTLOGINBYACTIONTICKET_OFFSET))(this, actionTicket, callback, extHeaders);
		}

		::System::Void RequestReactivateAccount(::System::String* actionTicket, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>* callback, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* extHeaders)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_REQUESTREACTIVATEACCOUNT_OFFSET))(this, actionTicket, callback, extHeaders);
		}

		::System::Void RequestBindThirdparty(::System::String* actionTicket, ::System::String* stoken, ::System::String* uid, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>* callback, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* extHeaders)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_REQUESTBINDTHIRDPARTY_OFFSET))(this, actionTicket, stoken, uid, callback, extHeaders);
		}

		::System::Void RequestGetActionTicketInfo(::System::String* actionTicket, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>* callback, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* extHeaders)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_REQUESTGETACTIONTICKETINFO_OFFSET))(this, actionTicket, callback, extHeaders);
		}

		::System::String* RemoveSpaces(::System::String* input)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_REMOVESPACES_OFFSET))(this, input);
		}

		::System::Void LogReport(::System::String* msg, ::System::Int32 code)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_LOGREPORT_OFFSET))(this, msg, code);
		}

		::MiHoYo::SDK::ReportType GetReportType()
		{
			return ((::MiHoYo::SDK::ReportType(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER_GETREPORTTYPE_OFFSET))(this);
		}

		::System::Void _ShowWelcomeDialog_b__33_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER__SHOWWELCOMEDIALOG_B__33_0_OFFSET))(this);
		}

		::System::Void _ShowWelcomeDialog_b__33_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER__SHOWWELCOMEDIALOG_B__33_1_OFFSET))(this);
		}

		::System::Void _ShowWelcomeDialog_b__33_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER__SHOWWELCOMEDIALOG_B__33_2_OFFSET))(this);
		}

		::System::Void _BindExistingAccount_b__34_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER__BINDEXISTINGACCOUNT_B__34_0_OFFSET))(this);
		}

		::System::Void _BindExistingAccount_b__34_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER__BINDEXISTINGACCOUNT_B__34_1_OFFSET))(this);
		}

		::System::Void _BindExistingAccount_b__34_2(::System::String* account)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER__BINDEXISTINGACCOUNT_B__34_2_OFFSET))(this, account);
		}

		::System::Void _BindExistingAccount_b__34_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER__BINDEXISTINGACCOUNT_B__34_3_OFFSET))(this);
		}

		::System::Void _BindExistingAccount_b__34_4(::System::String* captcha)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER__BINDEXISTINGACCOUNT_B__34_4_OFFSET))(this, captcha);
		}

		::System::Void _ShowBindSuccessDialog_b__37_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER__SHOWBINDSUCCESSDIALOG_B__37_0_OFFSET))(this);
		}

		::System::Void _ShowBindSuccessDialog_b__37_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER__SHOWBINDSUCCESSDIALOG_B__37_1_OFFSET))(this);
		}

		::System::Void _QueryWebBindingResult_b__40_0(::MiHoYo::SDK::NetworkResponseModelEx* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModelEx*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER__QUERYWEBBINDINGRESULT_B__40_0_OFFSET))(this, response);
		}

		::System::Void _PerformBindingFlow_b__44_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER__PERFORMBINDINGFLOW_B__44_0_OFFSET))(this);
		}
	};
}
