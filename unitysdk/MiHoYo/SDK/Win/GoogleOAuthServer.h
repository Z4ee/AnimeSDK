#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Win/GoogleOAuthServer_AuthStatus.h"
#include "unitysdk/System/Object.h"

namespace System { class IAsyncResult; }
namespace System { class String; }
namespace System::Net { class HttpListener; }
namespace System::Net { class HttpListenerResponse; }

#define MIHOYO_SDK_WIN_GOOGLEOAUTHSERVER_GETAUTHSTATUS_OFFSET UNITYSDK_OFFSET(0x1C7E3B50)
#define MIHOYO_SDK_WIN_GOOGLEOAUTHSERVER_GETRANDOMUNUSEDPORT_OFFSET UNITYSDK_OFFSET(0x1C7E3B60)
#define MIHOYO_SDK_WIN_GOOGLEOAUTHSERVER_GET_OAUTHCODE_OFFSET UNITYSDK_OFFSET(0x1C7E3AD0)
#define MIHOYO_SDK_WIN_GOOGLEOAUTHSERVER_GET_OAUTHSCOPE_OFFSET UNITYSDK_OFFSET(0x1C7E3B10)
#define MIHOYO_SDK_WIN_GOOGLEOAUTHSERVER_GET_OAUTHSTATE_OFFSET UNITYSDK_OFFSET(0x1C7E3AF0)
#define MIHOYO_SDK_WIN_GOOGLEOAUTHSERVER_GET_REDIRECTURI_OFFSET UNITYSDK_OFFSET(0x1C7E3B30)
#define MIHOYO_SDK_WIN_GOOGLEOAUTHSERVER_ONOAUTHCONTEXTCALLBACK_OFFSET UNITYSDK_OFFSET(0x1C7E4800)
#define MIHOYO_SDK_WIN_GOOGLEOAUTHSERVER_OPENAUTHURL_OFFSET UNITYSDK_OFFSET(0x1C7E3F90)
#define MIHOYO_SDK_WIN_GOOGLEOAUTHSERVER_REDIRECTRESULTURL_OFFSET UNITYSDK_OFFSET(0x1C7E4520)
#define MIHOYO_SDK_WIN_GOOGLEOAUTHSERVER_SET_OAUTHCODE_OFFSET UNITYSDK_OFFSET(0x1C7E3AE0)
#define MIHOYO_SDK_WIN_GOOGLEOAUTHSERVER_SET_OAUTHSCOPE_OFFSET UNITYSDK_OFFSET(0x1C7E3B20)
#define MIHOYO_SDK_WIN_GOOGLEOAUTHSERVER_SET_OAUTHSTATE_OFFSET UNITYSDK_OFFSET(0x1C7E3B00)
#define MIHOYO_SDK_WIN_GOOGLEOAUTHSERVER_SET_REDIRECTURI_OFFSET UNITYSDK_OFFSET(0x1C7E3B40)
#define MIHOYO_SDK_WIN_GOOGLEOAUTHSERVER_START_OFFSET UNITYSDK_OFFSET(0x1C7E3C70)
#define MIHOYO_SDK_WIN_GOOGLEOAUTHSERVER_STOP_OFFSET UNITYSDK_OFFSET(0x1C7E49F0)
#define MIHOYO_SDK_WIN_GOOGLEOAUTHSERVER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C7E4B70)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int GoogleOAuthServer_TypeDefinitionIndex = 21405;

	class GoogleOAuthServer : public ::System::Object
	{
	public:
		::System::String* _OAuthState_k__BackingField; // 0x10
		::System::String* _OAuthCode_k__BackingField; // 0x18
		::System::String* requestScope; // 0x20
		::System::Net::HttpListener* httpListener; // 0x28
		::System::String* _OAuthScope_k__BackingField; // 0x30
		::System::String* _RedirectURI_k__BackingField; // 0x38
		::MiHoYo::SDK::Win::GoogleOAuthServer_AuthStatus authStatus; // 0x40
		::System::Boolean IsRunning; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEOAUTHSERVER__CTOR_OFFSET))(this);
		}

		::System::String* get_OAuthCode()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEOAUTHSERVER_GET_OAUTHCODE_OFFSET))(this);
		}

		::System::Void set_OAuthCode(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEOAUTHSERVER_SET_OAUTHCODE_OFFSET))(this, value);
		}

		::System::String* get_OAuthState()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEOAUTHSERVER_GET_OAUTHSTATE_OFFSET))(this);
		}

		::System::Void set_OAuthState(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEOAUTHSERVER_SET_OAUTHSTATE_OFFSET))(this, value);
		}

		::System::String* get_OAuthScope()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEOAUTHSERVER_GET_OAUTHSCOPE_OFFSET))(this);
		}

		::System::Void set_OAuthScope(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEOAUTHSERVER_SET_OAUTHSCOPE_OFFSET))(this, value);
		}

		::System::String* get_RedirectURI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEOAUTHSERVER_GET_REDIRECTURI_OFFSET))(this);
		}

		::System::Void set_RedirectURI(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEOAUTHSERVER_SET_REDIRECTURI_OFFSET))(this, value);
		}

		::MiHoYo::SDK::Win::GoogleOAuthServer_AuthStatus GetAuthStatus()
		{
			return ((::MiHoYo::SDK::Win::GoogleOAuthServer_AuthStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEOAUTHSERVER_GETAUTHSTATUS_OFFSET))(this);
		}

		static ::System::Int32 GetRandomUnusedPort()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEOAUTHSERVER_GETRANDOMUNUSEDPORT_OFFSET))();
		}

		::System::Void Start(::System::String* url)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEOAUTHSERVER_START_OFFSET))(this, url);
		}

		::System::Void OpenAuthUrl(::System::String* url)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEOAUTHSERVER_OPENAUTHURL_OFFSET))(this, url);
		}

		::System::Void RedirectResultUrl(::System::Net::HttpListenerResponse* response, ::MiHoYo::SDK::Win::GoogleOAuthServer_AuthStatus status)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::HttpListenerResponse*, ::MiHoYo::SDK::Win::GoogleOAuthServer_AuthStatus))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEOAUTHSERVER_REDIRECTRESULTURL_OFFSET))(this, response, status);
		}

		::System::Void OnOAuthContextCallback(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEOAUTHSERVER_ONOAUTHCONTEXTCALLBACK_OFFSET))(this, result);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEOAUTHSERVER_STOP_OFFSET))(this);
		}
	};
}
