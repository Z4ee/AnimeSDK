#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkCallbackType.h"
#include "unitysdk/System/MulticastDelegate.h"

class AkCallbackInfo;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define AKCALLBACKMANAGER_EVENTCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18B9D240)
#define AKCALLBACKMANAGER_EVENTCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18B9D2B0)
#define AKCALLBACKMANAGER_EVENTCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x18B9C060)
#define AKCALLBACKMANAGER_EVENTCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x18B8C200)

inline static constexpr unsigned int AkCallbackManager_EventCallback_TypeDefinitionIndex = 34559;

class AkCallbackManager_EventCallback : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKCALLBACKMANAGER_EVENTCALLBACK__CTOR_OFFSET))(this, object, method);
	}

	::System::Void Invoke(::System::Object* in_cookie, ::AkCallbackType in_type, ::AkCallbackInfo* in_info)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::AkCallbackType, ::AkCallbackInfo*))((::PBYTE)hIl2Cpp + AKCALLBACKMANAGER_EVENTCALLBACK_INVOKE_OFFSET))(this, in_cookie, in_type, in_info);
	}

	::System::IAsyncResult* BeginInvoke(::System::Object* in_cookie, ::AkCallbackType in_type, ::AkCallbackInfo* in_info, ::System::AsyncCallback* callback, ::System::Object* object)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::AkCallbackType, ::AkCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + AKCALLBACKMANAGER_EVENTCALLBACK_BEGININVOKE_OFFSET))(this, in_cookie, in_type, in_info, callback, object);
	}

	::System::Void EndInvoke(::System::IAsyncResult* result)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + AKCALLBACKMANAGER_EVENTCALLBACK_ENDINVOKE_OFFSET))(this, result);
	}
};
