#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Coroutine; }

#define MIHOYO_SDK_CONSOLE_OS_PS4BINDMANAGER_BINDBYINPUT_OFFSET UNITYSDK_OFFSET(0x1A988810)
#define MIHOYO_SDK_CONSOLE_OS_PS4BINDMANAGER_GETBINDINGWEBURL_OFFSET UNITYSDK_OFFSET(0x1A988E70)
#define MIHOYO_SDK_CONSOLE_OS_PS4BINDMANAGER_GETCAPTCHCODE_OFFSET UNITYSDK_OFFSET(0x1A989D00)
#define MIHOYO_SDK_CONSOLE_OS_PS4BINDMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1A987D30)
#define MIHOYO_SDK_CONSOLE_OS_PS4BINDMANAGER_GET_RSAKEY_OFFSET UNITYSDK_OFFSET(0x1A987DB0)
#define MIHOYO_SDK_CONSOLE_OS_PS4BINDMANAGER_LOGREPORT_OFFSET UNITYSDK_OFFSET(0x1A988050)
#define MIHOYO_SDK_CONSOLE_OS_PS4BINDMANAGER_PERFORMBINDEMAILFLOW_OFFSET UNITYSDK_OFFSET(0x1A988240)
#define MIHOYO_SDK_CONSOLE_OS_PS4BINDMANAGER_QUERYWEBBINDINGRESULT_OFFSET UNITYSDK_OFFSET(0x1A9899F0)
#define MIHOYO_SDK_CONSOLE_OS_PS4BINDMANAGER_REQUESTBINDEMAIL_OFFSET UNITYSDK_OFFSET(0x1A98A1B0)
#define MIHOYO_SDK_CONSOLE_OS_PS4BINDMANAGER_REQUESTCREATEACTIONTICKETBYSTOKEN_OFFSET UNITYSDK_OFFSET(0x1A989480)
#define MIHOYO_SDK_CONSOLE_OS_PS4BINDMANAGER_REQUESTGETACTIONTICKETINFO_OFFSET UNITYSDK_OFFSET(0x1A989A50)
#define MIHOYO_SDK_CONSOLE_OS_PS4BINDMANAGER_REQUESTMAILCAPTCHA_OFFSET UNITYSDK_OFFSET(0x1A989D90)
#define MIHOYO_SDK_CONSOLE_OS_PS4BINDMANAGER_REQUESTVERIFYACTIONTICKET_OFFSET UNITYSDK_OFFSET(0x1A988950)
#define MIHOYO_SDK_CONSOLE_OS_PS4BINDMANAGER_SHOWBINDSUCCESSDIALOG_OFFSET UNITYSDK_OFFSET(0x1A987E60)
#define MIHOYO_SDK_CONSOLE_OS_PS4BINDMANAGER_STARTWEBBINDINGRESULTQUERYLOOP_OFFSET UNITYSDK_OFFSET(0x1A9897C0)
#define MIHOYO_SDK_CONSOLE_OS_PS4BINDMANAGER_STOPWEBBINDINGRESULTQUERYLOOP_OFFSET UNITYSDK_OFFSET(0x1A989940)
#define MIHOYO_SDK_CONSOLE_OS_PS4BINDMANAGER_UPDATEACTIONTICKETANDQRCODE_OFFSET UNITYSDK_OFFSET(0x1A9893F0)
#define MIHOYO_SDK_CONSOLE_OS_PS4BINDMANAGER_UPDATEQRCODE_OFFSET UNITYSDK_OFFSET(0x1A988690)
#define MIHOYO_SDK_CONSOLE_OS_PS4BINDMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A987B90)
#define MIHOYO_SDK_CONSOLE_OS_PS4BINDMANAGER__GETCAPTCHCODE_G__CALLBACK_31_0_OFFSET UNITYSDK_OFFSET(0x1A98B000)
#define MIHOYO_SDK_CONSOLE_OS_PS4BINDMANAGER__PERFORMBINDEMAILFLOW_B__23_0_OFFSET UNITYSDK_OFFSET(0x1A98A5E0)
#define MIHOYO_SDK_CONSOLE_OS_PS4BINDMANAGER__PERFORMBINDEMAILFLOW_B__23_1_OFFSET UNITYSDK_OFFSET(0x1A98A680)
#define MIHOYO_SDK_CONSOLE_OS_PS4BINDMANAGER__PERFORMBINDEMAILFLOW_B__23_2_OFFSET UNITYSDK_OFFSET(0x1A98A730)
#define MIHOYO_SDK_CONSOLE_OS_PS4BINDMANAGER__PERFORMBINDEMAILFLOW_B__23_3_OFFSET UNITYSDK_OFFSET(0x1A98A8A0)
#define MIHOYO_SDK_CONSOLE_OS_PS4BINDMANAGER__QUERYWEBBINDINGRESULT_G__ONQUERYRESULT_30_0_OFFSET UNITYSDK_OFFSET(0x1A98AB80)
#define MIHOYO_SDK_CONSOLE_OS_PS4BINDMANAGER__SHOWBINDSUCCESSDIALOG_B__22_0_OFFSET UNITYSDK_OFFSET(0x1A98A530)
#define MIHOYO_SDK_CONSOLE_OS_PS4BINDMANAGER__UPDATEACTIONTICKETANDQRCODE_G__ONGETACTIONTICKET_26_0_OFFSET UNITYSDK_OFFSET(0x1A98A9B0)

namespace MiHoYo::SDK::Console::OS
{
	inline static constexpr unsigned int PS4BindManager_TypeDefinitionIndex = 20849;

	class PS4BindManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Console::OS::PS4BindManager** StaticGet__instance()
		{
			return (::MiHoYo::SDK::Console::OS::PS4BindManager**)Il2CppClass::FromTypeDefinitionIndex(PS4BindManager_TypeDefinitionIndex)->GetStaticField(0x98D0);
		}
		// static const ::System::String* ACTION_TYPE_BIND_EMAIL; // 0x0
		// static const ::System::String* USER_CANCEL_BIND_HINT; // 0x0
		// static const ::System::Int32 ACTION_TICKET_EXPIRED = 0xFFFFF445; // 0x0
		// static const ::System::Int32 STOKEN_INVALID = 0xFFFFFF9C; // 0x0
		// static const ::System::Int32 VERIFY_METHOD = 0x2; // 0x0
		::System::String* KibanaReportModule; // 0x10
		::System::String* ActionTicket; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* Headers; // 0x20
		::System::String* mid; // 0x28
		::System::Action* loginSuccessCallback; // 0x30
		::UnityEngine::Coroutine* WebBindResultQueryRoutine; // 0x38
		::System::Action_2<::System::Int32, ::System::String*>* loginFailedCallback; // 0x40
		::System::String* SToken; // 0x48
		::System::String* userAccountName; // 0x50
		::System::Boolean BindResultShown; // 0x58
		::System::Single WEB_BINDING_RESULT_QUERY_INTERVAL_SEC; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PS4BINDMANAGER__CTOR_OFFSET))(this);
		}

		static ::MiHoYo::SDK::Console::OS::PS4BindManager* get_Instance()
		{
			return ((::MiHoYo::SDK::Console::OS::PS4BindManager*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PS4BINDMANAGER_GET_INSTANCE_OFFSET))();
		}

		static ::System::String* get_RSAKey()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PS4BINDMANAGER_GET_RSAKEY_OFFSET))();
		}

		::System::Void ShowBindSuccessDialog(::System::String* userEmail)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PS4BINDMANAGER_SHOWBINDSUCCESSDIALOG_OFFSET))(this, userEmail);
		}

		::System::Void PerformBindEmailFlow(::System::String* loginActionTicket, ::System::String* accountName, ::System::String* accountSToken, ::System::String* accountMid, ::System::Action* successCallback, ::System::Action_2<::System::Int32, ::System::String*>* failedCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Action*, ::System::Action_2<::System::Int32, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PS4BINDMANAGER_PERFORMBINDEMAILFLOW_OFFSET))(this, loginActionTicket, accountName, accountSToken, accountMid, successCallback, failedCallback);
		}

		::System::Void BindByInput(::System::String* email, ::System::String* captcha)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PS4BINDMANAGER_BINDBYINPUT_OFFSET))(this, email, captcha);
		}

		::System::String* GetBindingWebURL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PS4BINDMANAGER_GETBINDINGWEBURL_OFFSET))(this);
		}

		::System::Void UpdateActionTicketAndQRCode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PS4BINDMANAGER_UPDATEACTIONTICKETANDQRCODE_OFFSET))(this);
		}

		::System::Void UpdateQRCode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PS4BINDMANAGER_UPDATEQRCODE_OFFSET))(this);
		}

		::System::Void StartWebBindingResultQueryLoop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PS4BINDMANAGER_STARTWEBBINDINGRESULTQUERYLOOP_OFFSET))(this);
		}

		::System::Void StopWebBindingResultQueryLoop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PS4BINDMANAGER_STOPWEBBINDINGRESULTQUERYLOOP_OFFSET))(this);
		}

		::System::Void QueryWebBindingResult()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PS4BINDMANAGER_QUERYWEBBINDINGRESULT_OFFSET))(this);
		}

		::System::Void GetCaptchCode(::System::String* email)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PS4BINDMANAGER_GETCAPTCHCODE_OFFSET))(this, email);
		}

		::System::Void RequestGetActionTicketInfo(::System::String* actionTicket, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PS4BINDMANAGER_REQUESTGETACTIONTICKETINFO_OFFSET))(this, actionTicket, callback);
		}

		::System::Void RequestVerifyActionTicket(::System::String* captcha, ::System::String* actionTicket, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PS4BINDMANAGER_REQUESTVERIFYACTIONTICKET_OFFSET))(this, captcha, actionTicket, callback);
		}

		::System::Void RequestMailCaptcha(::System::String* actionTicket, ::System::String* email, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PS4BINDMANAGER_REQUESTMAILCAPTCHA_OFFSET))(this, actionTicket, email, callback);
		}

		::System::Void RequestBindEmail(::System::String* actionTicket, ::System::String* email, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PS4BINDMANAGER_REQUESTBINDEMAIL_OFFSET))(this, actionTicket, email, callback);
		}

		::System::Void RequestCreateActionTicketBySToken(::System::String* SToken, ::System::String* mid, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PS4BINDMANAGER_REQUESTCREATEACTIONTICKETBYSTOKEN_OFFSET))(this, SToken, mid, callback);
		}

		::System::Void LogReport(::System::String* msg, ::System::Int32 code)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PS4BINDMANAGER_LOGREPORT_OFFSET))(this, msg, code);
		}

		::System::Void _ShowBindSuccessDialog_b__22_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PS4BINDMANAGER__SHOWBINDSUCCESSDIALOG_B__22_0_OFFSET))(this);
		}

		::System::Void _PerformBindEmailFlow_b__23_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PS4BINDMANAGER__PERFORMBINDEMAILFLOW_B__23_0_OFFSET))(this);
		}

		::System::Void _PerformBindEmailFlow_b__23_1(::System::String* input)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PS4BINDMANAGER__PERFORMBINDEMAILFLOW_B__23_1_OFFSET))(this, input);
		}

		::System::Void _PerformBindEmailFlow_b__23_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PS4BINDMANAGER__PERFORMBINDEMAILFLOW_B__23_2_OFFSET))(this);
		}

		::System::Void _PerformBindEmailFlow_b__23_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PS4BINDMANAGER__PERFORMBINDEMAILFLOW_B__23_3_OFFSET))(this);
		}

		::System::Void _UpdateActionTicketAndQRCode_g__OnGetActionTicket_26_0(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PS4BINDMANAGER__UPDATEACTIONTICKETANDQRCODE_G__ONGETACTIONTICKET_26_0_OFFSET))(this, response);
		}

		::System::Void _QueryWebBindingResult_g__OnQueryResult_30_0(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PS4BINDMANAGER__QUERYWEBBINDINGRESULT_G__ONQUERYRESULT_30_0_OFFSET))(this, response);
		}

		::System::Void _GetCaptchCode_g__callback_31_0(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PS4BINDMANAGER__GETCAPTCHCODE_G__CALLBACK_31_0_OFFSET))(this, response);
		}
	};
}
