#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_WIN_THIRDPARTYOAUTHCLIENT_ONAUTHCOMPLETEDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A08E7B0)
#define MIHOYO_SDK_WIN_THIRDPARTYOAUTHCLIENT_ONAUTHCOMPLETEDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A08E7F0)
#define MIHOYO_SDK_WIN_THIRDPARTYOAUTHCLIENT_ONAUTHCOMPLETEDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A08E230)
#define MIHOYO_SDK_WIN_THIRDPARTYOAUTHCLIENT_ONAUTHCOMPLETEDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A08E220)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int ThirdpartyOAuthClient_OnAuthCompleteDelegate_TypeDefinitionIndex = 19844;

	class ThirdpartyOAuthClient_OnAuthCompleteDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_THIRDPARTYOAUTHCLIENT_ONAUTHCOMPLETEDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::String* accessToken, ::System::String* idToken)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_THIRDPARTYOAUTHCLIENT_ONAUTHCOMPLETEDELEGATE_INVOKE_OFFSET))(this, accessToken, idToken);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* accessToken, ::System::String* idToken, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_THIRDPARTYOAUTHCLIENT_ONAUTHCOMPLETEDELEGATE_BEGININVOKE_OFFSET))(this, accessToken, idToken, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_THIRDPARTYOAUTHCLIENT_ONAUTHCOMPLETEDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
