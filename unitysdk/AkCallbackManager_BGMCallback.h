#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AKRESULT.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define AKCALLBACKMANAGER_BGMCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1D58B850)
#define AKCALLBACKMANAGER_BGMCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1D58B8B0)
#define AKCALLBACKMANAGER_BGMCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D58AB70)
#define AKCALLBACKMANAGER_BGMCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1D58B7E0)

inline static constexpr unsigned int AkCallbackManager_BGMCallback_TypeDefinitionIndex = 43636;

class AkCallbackManager_BGMCallback : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKCALLBACKMANAGER_BGMCALLBACK__CTOR_OFFSET))(this, a1, a2);
	}

	::AKRESULT Invoke(::System::Boolean a1, ::System::Object* a2)
	{
		return ((::AKRESULT(*)(::PVOID, ::System::Boolean, ::System::Object*))((::PBYTE)hIl2Cpp + AKCALLBACKMANAGER_BGMCALLBACK_INVOKE_OFFSET))(this, a1, a2);
	}

	::System::IAsyncResult* BeginInvoke(::System::Boolean a1, ::System::Object* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::Boolean, ::System::Object*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + AKCALLBACKMANAGER_BGMCALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
	}

	::AKRESULT EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::AKRESULT(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + AKCALLBACKMANAGER_BGMCALLBACK_ENDINVOKE_OFFSET))(this, a1);
	}
};
