#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AKRESULT.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define AKCALLBACKMANAGER_BANKCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1EEB9D20)
#define AKCALLBACKMANAGER_BANKCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1EEB9DC0)
#define AKCALLBACKMANAGER_BANKCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1EEB44E0)
#define AKCALLBACKMANAGER_BANKCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEB9CB0)

inline static constexpr unsigned int AkCallbackManager_BankCallback_TypeDefinitionIndex = 43633;

class AkCallbackManager_BankCallback : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKCALLBACKMANAGER_BANKCALLBACK__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::System::UInt32 a1, ::System::IntPtr a2, ::AKRESULT a3, ::System::Object* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::IntPtr, ::AKRESULT, ::System::Object*))((::PBYTE)hIl2Cpp + AKCALLBACKMANAGER_BANKCALLBACK_INVOKE_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::IAsyncResult* BeginInvoke(::System::UInt32 a1, ::System::IntPtr a2, ::AKRESULT a3, ::System::Object* a4, ::System::AsyncCallback* a5, ::System::Object* a6)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt32, ::System::IntPtr, ::AKRESULT, ::System::Object*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + AKCALLBACKMANAGER_BANKCALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + AKCALLBACKMANAGER_BANKCALLBACK_ENDINVOKE_OFFSET))(this, a1);
	}
};
