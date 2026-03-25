#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/ReportType.h"
#include "unitysdk/MiHoYo/SDK/Win/AuthProcess.h"
#include "unitysdk/MiHoYo/SDK/Win/OAuthType.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Win { class ThirdpartyOAuthClient_OnAuthCompleteDelegate; }
namespace System { class IAsyncResult; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Net { class HttpListener; }
namespace UnityEngine { class Coroutine; }

#define MIHOYO_SDK_WIN_THIRDPARTYOAUTHCLIENT_ADD_ONAUTHCOMPLETE_OFFSET UNITYSDK_OFFSET(0x15E98A90)
#define MIHOYO_SDK_WIN_THIRDPARTYOAUTHCLIENT_ENTERWAITINGSTAGE_OFFSET UNITYSDK_OFFSET(0x15E99820)
#define MIHOYO_SDK_WIN_THIRDPARTYOAUTHCLIENT_GETRANDOMUNUSEDPORT_OFFSET UNITYSDK_OFFSET(0x15E99EA0)
#define MIHOYO_SDK_WIN_THIRDPARTYOAUTHCLIENT_HIDETHIRDPARTYOAUTH_OFFSET UNITYSDK_OFFSET(0x15E998F0)
#define MIHOYO_SDK_WIN_THIRDPARTYOAUTHCLIENT_ONAUTHFAILED_OFFSET UNITYSDK_OFFSET(0x15E9B240)
#define MIHOYO_SDK_WIN_THIRDPARTYOAUTHCLIENT_ONAUTHSUCCEED_OFFSET UNITYSDK_OFFSET(0x15E9B900)
#define MIHOYO_SDK_WIN_THIRDPARTYOAUTHCLIENT_ONCONTEXTCALLBACK_OFFSET UNITYSDK_OFFSET(0x15E9C160)
#define MIHOYO_SDK_WIN_THIRDPARTYOAUTHCLIENT_ONWAITINGTIMEOUT_OFFSET UNITYSDK_OFFSET(0x15E9AB90)
#define MIHOYO_SDK_WIN_THIRDPARTYOAUTHCLIENT_REMOVE_ONAUTHCOMPLETE_OFFSET UNITYSDK_OFFSET(0x15E98B10)
#define MIHOYO_SDK_WIN_THIRDPARTYOAUTHCLIENT_SHOWLOGINPAGE_OFFSET UNITYSDK_OFFSET(0x15E98D10)
#define MIHOYO_SDK_WIN_THIRDPARTYOAUTHCLIENT_SHOWTHIRDPARTYOAUTHPLUGINUI_OFFSET UNITYSDK_OFFSET(0x15E992A0)
#define MIHOYO_SDK_WIN_THIRDPARTYOAUTHCLIENT_STARTAPPLEOAUTH_OFFSET UNITYSDK_OFFSET(0x15E98BE0)
#define MIHOYO_SDK_WIN_THIRDPARTYOAUTHCLIENT_STARTCALLBACKLISTENER_OFFSET UNITYSDK_OFFSET(0x15E99B00)
#define MIHOYO_SDK_WIN_THIRDPARTYOAUTHCLIENT_STARTFACEBOOKOAUTH_OFFSET UNITYSDK_OFFSET(0x15E99010)
#define MIHOYO_SDK_WIN_THIRDPARTYOAUTHCLIENT_STARTGOOGLEOAUTH_OFFSET UNITYSDK_OFFSET(0x15E98EE0)
#define MIHOYO_SDK_WIN_THIRDPARTYOAUTHCLIENT_STARTTIMEOUTMONITOR_OFFSET UNITYSDK_OFFSET(0x15E99F80)
#define MIHOYO_SDK_WIN_THIRDPARTYOAUTHCLIENT_STARTTWITTEROAUTH_OFFSET UNITYSDK_OFFSET(0x15E99020)
#define MIHOYO_SDK_WIN_THIRDPARTYOAUTHCLIENT_STOPCALLBACKLISTENER_OFFSET UNITYSDK_OFFSET(0x15E99220)
#define MIHOYO_SDK_WIN_THIRDPARTYOAUTHCLIENT_STOPTIMEOUTMONITOR_OFFSET UNITYSDK_OFFSET(0x15E99160)
#define MIHOYO_SDK_WIN_THIRDPARTYOAUTHCLIENT_STOP_OFFSET UNITYSDK_OFFSET(0x15E99030)
#define MIHOYO_SDK_WIN_THIRDPARTYOAUTHCLIENT_UPDATEPLUGINUI_OFFSET UNITYSDK_OFFSET(0x15E9A690)
#define MIHOYO_SDK_WIN_THIRDPARTYOAUTHCLIENT__CTOR_OFFSET UNITYSDK_OFFSET(0x15E98B90)
#define MIHOYO_SDK_WIN_THIRDPARTYOAUTHCLIENT__SHOWLOGINPAGE_B__22_0_OFFSET UNITYSDK_OFFSET(0x15E9C8E0)
#define MIHOYO_SDK_WIN_THIRDPARTYOAUTHCLIENT__SHOWLOGINPAGE_B__22_1_OFFSET UNITYSDK_OFFSET(0x15E9CB40)
#define MIHOYO_SDK_WIN_THIRDPARTYOAUTHCLIENT__SHOWTHIRDPARTYOAUTHPLUGINUI_B__23_0_OFFSET UNITYSDK_OFFSET(0x15E9CB50)
#define MIHOYO_SDK_WIN_THIRDPARTYOAUTHCLIENT__SHOWTHIRDPARTYOAUTHPLUGINUI_B__23_1_OFFSET UNITYSDK_OFFSET(0x15E9CB60)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int ThirdpartyOAuthClient_TypeDefinitionIndex = 7870;

	class ThirdpartyOAuthClient : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Win::OAuthType* StaticGet_AuthType()
		{
			return (::MiHoYo::SDK::Win::OAuthType*)Il2CppClass::FromTypeDefinitionIndex(ThirdpartyOAuthClient_TypeDefinitionIndex)->GetStaticField(0x6B80);
		}
		// static const ::System::Int32 TIMEOUT_SEC = 0x258; // 0x0
		// static const ::System::String* GOOGLE_AUTH_SCOPE; // 0x0
		// static const ::System::String* GOOGLE_RESP_TYPE; // 0x0
		// static const ::System::String* APPLE_RESP_TYPE; // 0x0
		// static const ::System::String* APPLE_RESP_MODE; // 0x0
		::System::Net::HttpListener* httpListener; // 0x10
		::System::String* callbackUri; // 0x18
		::MiHoYo::SDK::Win::ThirdpartyOAuthClient_OnAuthCompleteDelegate* OnAuthComplete; // 0x20
		::System::String* authParameters; // 0x28
		::UnityEngine::Coroutine* timeoutMonitor; // 0x30
		::System::String* authPageUrl; // 0x38
		::MiHoYo::SDK::ReportType reportType; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_THIRDPARTYOAUTHCLIENT__CTOR_OFFSET))(this);
		}

		::System::Void add_OnAuthComplete(::MiHoYo::SDK::Win::ThirdpartyOAuthClient_OnAuthCompleteDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Win::ThirdpartyOAuthClient_OnAuthCompleteDelegate*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_THIRDPARTYOAUTHCLIENT_ADD_ONAUTHCOMPLETE_OFFSET))(this, value);
		}

		::System::Void remove_OnAuthComplete(::MiHoYo::SDK::Win::ThirdpartyOAuthClient_OnAuthCompleteDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Win::ThirdpartyOAuthClient_OnAuthCompleteDelegate*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_THIRDPARTYOAUTHCLIENT_REMOVE_ONAUTHCOMPLETE_OFFSET))(this, value);
		}

		::System::Void StartAppleOAuth()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_THIRDPARTYOAUTHCLIENT_STARTAPPLEOAUTH_OFFSET))(this);
		}

		::System::Void StartGoogleOAuth()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_THIRDPARTYOAUTHCLIENT_STARTGOOGLEOAUTH_OFFSET))(this);
		}

		::System::Void StartFacebookOAuth()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_THIRDPARTYOAUTHCLIENT_STARTFACEBOOKOAUTH_OFFSET))(this);
		}

		::System::Void StartTwitterOAuth()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_THIRDPARTYOAUTHCLIENT_STARTTWITTEROAUTH_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_THIRDPARTYOAUTHCLIENT_STOP_OFFSET))(this);
		}

		::System::Void ShowLoginPage(::MiHoYo::SDK::Win::OAuthType type)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Win::OAuthType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_THIRDPARTYOAUTHCLIENT_SHOWLOGINPAGE_OFFSET))(this, type);
		}

		::System::Boolean ShowThirdPartyOAuthPluginUI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_THIRDPARTYOAUTHCLIENT_SHOWTHIRDPARTYOAUTHPLUGINUI_OFFSET))(this);
		}

		::System::Void HideThirdPartyOAuth()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_THIRDPARTYOAUTHCLIENT_HIDETHIRDPARTYOAUTH_OFFSET))(this);
		}

		::System::Void StartCallbackListener()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_THIRDPARTYOAUTHCLIENT_STARTCALLBACKLISTENER_OFFSET))(this);
		}

		::System::Void StopCallbackListener()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_THIRDPARTYOAUTHCLIENT_STOPCALLBACKLISTENER_OFFSET))(this);
		}

		::System::Void StartTimeoutMonitor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_THIRDPARTYOAUTHCLIENT_STARTTIMEOUTMONITOR_OFFSET))(this);
		}

		::System::Void StopTimeoutMonitor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_THIRDPARTYOAUTHCLIENT_STOPTIMEOUTMONITOR_OFFSET))(this);
		}

		::System::Void EnterWaitingStage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_THIRDPARTYOAUTHCLIENT_ENTERWAITINGSTAGE_OFFSET))(this);
		}

		::System::Void OnWaitingTimeout()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_THIRDPARTYOAUTHCLIENT_ONWAITINGTIMEOUT_OFFSET))(this);
		}

		::System::Void UpdatePluginUI(::MiHoYo::SDK::Win::AuthProcess process)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Win::AuthProcess))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_THIRDPARTYOAUTHCLIENT_UPDATEPLUGINUI_OFFSET))(this, process);
		}

		::System::Void OnAuthFailed(::System::String* error)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_THIRDPARTYOAUTHCLIENT_ONAUTHFAILED_OFFSET))(this, error);
		}

		::System::Void OnAuthSucceed(::System::String* accessToken, ::System::String* idToken)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_THIRDPARTYOAUTHCLIENT_ONAUTHSUCCEED_OFFSET))(this, accessToken, idToken);
		}

		::System::Void OnContextCallback(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_THIRDPARTYOAUTHCLIENT_ONCONTEXTCALLBACK_OFFSET))(this, result);
		}

		::System::Int32 GetRandomUnusedPort()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_THIRDPARTYOAUTHCLIENT_GETRANDOMUNUSEDPORT_OFFSET))(this);
		}

		::System::Void _ShowLoginPage_b__22_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_THIRDPARTYOAUTHCLIENT__SHOWLOGINPAGE_B__22_0_OFFSET))(this);
		}

		::System::Void _ShowLoginPage_b__22_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_THIRDPARTYOAUTHCLIENT__SHOWLOGINPAGE_B__22_1_OFFSET))(this);
		}

		::System::Void _ShowThirdPartyOAuthPluginUI_b__23_0(::System::String* str, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_THIRDPARTYOAUTHCLIENT__SHOWTHIRDPARTYOAUTHPLUGINUI_B__23_0_OFFSET))(this, str, callback);
		}

		::System::Void _ShowThirdPartyOAuthPluginUI_b__23_1(::System::String* str, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_THIRDPARTYOAUTHCLIENT__SHOWTHIRDPARTYOAUTHPLUGINUI_B__23_1_OFFSET))(this, str, callback);
		}
	};
}
