#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AKRESULT.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define AKCALLBACKMANAGER_BGMCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1FA94DB0)
#define AKCALLBACKMANAGER_BGMCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1FA94E30)
#define AKCALLBACKMANAGER_BGMCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FA94A30)
#define AKCALLBACKMANAGER_BGMCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1FA94A10)

inline static constexpr unsigned int AkCallbackManager_BGMCallback_TypeDefinitionIndex = 33689;

class AkCallbackManager_BGMCallback : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKCALLBACKMANAGER_BGMCALLBACK__CTOR_OFFSET))(this, object, method);
	}

	::AKRESULT Invoke(::System::Boolean in_bOtherAudioPlaying, ::System::Object* in_Cookie)
	{
		return ((::AKRESULT(*)(::PVOID, ::System::Boolean, ::System::Object*))((::PBYTE)hIl2Cpp + AKCALLBACKMANAGER_BGMCALLBACK_INVOKE_OFFSET))(this, in_bOtherAudioPlaying, in_Cookie);
	}

	::System::IAsyncResult* BeginInvoke(::System::Boolean in_bOtherAudioPlaying, ::System::Object* in_Cookie, ::System::AsyncCallback* callback, ::System::Object* object)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::Boolean, ::System::Object*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + AKCALLBACKMANAGER_BGMCALLBACK_BEGININVOKE_OFFSET))(this, in_bOtherAudioPlaying, in_Cookie, callback, object);
	}

	::AKRESULT EndInvoke(::System::IAsyncResult* result)
	{
		return ((::AKRESULT(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + AKCALLBACKMANAGER_BGMCALLBACK_ENDINVOKE_OFFSET))(this, result);
	}
};
