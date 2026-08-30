#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkCallbackType.h"
#include "unitysdk/System/MulticastDelegate.h"

class AkCallbackInfo;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define AKCALLBACKMANAGER_EVENTCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1EEB9F60)
#define AKCALLBACKMANAGER_EVENTCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1EEB9FD0)
#define AKCALLBACKMANAGER_EVENTCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1EEB9150)
#define AKCALLBACKMANAGER_EVENTCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEB9E70)

inline static constexpr unsigned int AkCallbackManager_EventCallback_TypeDefinitionIndex = 43631;

class AkCallbackManager_EventCallback : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKCALLBACKMANAGER_EVENTCALLBACK__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::System::Object* a1, ::AkCallbackType a2, ::AkCallbackInfo* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::AkCallbackType, ::AkCallbackInfo*))((::PBYTE)hIl2Cpp + AKCALLBACKMANAGER_EVENTCALLBACK_INVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::IAsyncResult* BeginInvoke(::System::Object* a1, ::AkCallbackType a2, ::AkCallbackInfo* a3, ::System::AsyncCallback* a4, ::System::Object* a5)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::AkCallbackType, ::AkCallbackInfo*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + AKCALLBACKMANAGER_EVENTCALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + AKCALLBACKMANAGER_EVENTCALLBACK_ENDINVOKE_OFFSET))(this, a1);
	}
};
