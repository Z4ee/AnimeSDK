#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Win/GoogleOAuthServer_AuthStatus.h"
#include "unitysdk/System/Object.h"

namespace System { class IAsyncResult; }
namespace System { class String; }
namespace System::Net { class HttpListener; }
namespace System::Net { class HttpListenerResponse; }

#define MIHOYO_SDK_WIN_GOOGLEOAUTHSERVER_GETAUTHSTATUS_OFFSET UNITYSDK_OFFSET(0x15688010)
#define MIHOYO_SDK_WIN_GOOGLEOAUTHSERVER_GETRANDOMUNUSEDPORT_OFFSET UNITYSDK_OFFSET(0x15688020)
#define MIHOYO_SDK_WIN_GOOGLEOAUTHSERVER_GET_OAUTHCODE_OFFSET UNITYSDK_OFFSET(0x15687F90)
#define MIHOYO_SDK_WIN_GOOGLEOAUTHSERVER_GET_OAUTHSCOPE_OFFSET UNITYSDK_OFFSET(0x15687FD0)
#define MIHOYO_SDK_WIN_GOOGLEOAUTHSERVER_GET_OAUTHSTATE_OFFSET UNITYSDK_OFFSET(0x15687FB0)
#define MIHOYO_SDK_WIN_GOOGLEOAUTHSERVER_GET_REDIRECTURI_OFFSET UNITYSDK_OFFSET(0x15687FF0)
#define MIHOYO_SDK_WIN_GOOGLEOAUTHSERVER_ONOAUTHCONTEXTCALLBACK_OFFSET UNITYSDK_OFFSET(0x15688C00)
#define MIHOYO_SDK_WIN_GOOGLEOAUTHSERVER_OPENAUTHURL_OFFSET UNITYSDK_OFFSET(0x15688480)
#define MIHOYO_SDK_WIN_GOOGLEOAUTHSERVER_REDIRECTRESULTURL_OFFSET UNITYSDK_OFFSET(0x15688890)
#define MIHOYO_SDK_WIN_GOOGLEOAUTHSERVER_SET_OAUTHCODE_OFFSET UNITYSDK_OFFSET(0x15687FA0)
#define MIHOYO_SDK_WIN_GOOGLEOAUTHSERVER_SET_OAUTHSCOPE_OFFSET UNITYSDK_OFFSET(0x15687FE0)
#define MIHOYO_SDK_WIN_GOOGLEOAUTHSERVER_SET_OAUTHSTATE_OFFSET UNITYSDK_OFFSET(0x15687FC0)
#define MIHOYO_SDK_WIN_GOOGLEOAUTHSERVER_SET_REDIRECTURI_OFFSET UNITYSDK_OFFSET(0x15688000)
#define MIHOYO_SDK_WIN_GOOGLEOAUTHSERVER_START_OFFSET UNITYSDK_OFFSET(0x15688100)
#define MIHOYO_SDK_WIN_GOOGLEOAUTHSERVER_STOP_OFFSET UNITYSDK_OFFSET(0x15688FA0)
#define MIHOYO_SDK_WIN_GOOGLEOAUTHSERVER__CTOR_OFFSET UNITYSDK_OFFSET(0x156890E0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int GoogleOAuthServer_TypeDefinitionIndex = 8982;

	class GoogleOAuthServer : public ::System::Object
	{
	public:
		::System::String* _OAuthState_k__BackingField; // 0x10
		::System::Net::HttpListener* httpListener; // 0x18
		::System::String* _OAuthCode_k__BackingField; // 0x20
		::System::String* _OAuthScope_k__BackingField; // 0x28
		::System::String* requestScope; // 0x30
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

		::System::Void set_OAuthCode(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEOAUTHSERVER_SET_OAUTHCODE_OFFSET))(this, a1);
		}

		::System::String* get_OAuthState()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEOAUTHSERVER_GET_OAUTHSTATE_OFFSET))(this);
		}

		::System::Void set_OAuthState(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEOAUTHSERVER_SET_OAUTHSTATE_OFFSET))(this, a1);
		}

		::System::String* get_OAuthScope()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEOAUTHSERVER_GET_OAUTHSCOPE_OFFSET))(this);
		}

		::System::Void set_OAuthScope(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEOAUTHSERVER_SET_OAUTHSCOPE_OFFSET))(this, a1);
		}

		::System::String* get_RedirectURI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEOAUTHSERVER_GET_REDIRECTURI_OFFSET))(this);
		}

		::System::Void set_RedirectURI(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEOAUTHSERVER_SET_REDIRECTURI_OFFSET))(this, a1);
		}

		::MiHoYo::SDK::Win::GoogleOAuthServer_AuthStatus GetAuthStatus()
		{
			return ((::MiHoYo::SDK::Win::GoogleOAuthServer_AuthStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEOAUTHSERVER_GETAUTHSTATUS_OFFSET))(this);
		}

		static ::System::Int32 GetRandomUnusedPort()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEOAUTHSERVER_GETRANDOMUNUSEDPORT_OFFSET))();
		}

		::System::Void Start(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEOAUTHSERVER_START_OFFSET))(this, a1);
		}

		::System::Void OpenAuthUrl(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEOAUTHSERVER_OPENAUTHURL_OFFSET))(this, a1);
		}

		::System::Void RedirectResultUrl(::System::Net::HttpListenerResponse* a1, ::MiHoYo::SDK::Win::GoogleOAuthServer_AuthStatus a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::HttpListenerResponse*, ::MiHoYo::SDK::Win::GoogleOAuthServer_AuthStatus))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEOAUTHSERVER_REDIRECTRESULTURL_OFFSET))(this, a1, a2);
		}

		::System::Void OnOAuthContextCallback(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEOAUTHSERVER_ONOAUTHCONTEXTCALLBACK_OFFSET))(this, a1);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEOAUTHSERVER_STOP_OFFSET))(this);
		}
	};
}
