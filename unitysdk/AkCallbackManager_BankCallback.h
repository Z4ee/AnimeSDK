#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AKRESULT.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define AKCALLBACKMANAGER_BANKCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A5D86E0)
#define AKCALLBACKMANAGER_BANKCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A5D8780)
#define AKCALLBACKMANAGER_BANKCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A5D1FE0)
#define AKCALLBACKMANAGER_BANKCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5D24E0)

inline static constexpr unsigned int AkCallbackManager_BankCallback_TypeDefinitionIndex = 40380;

class AkCallbackManager_BankCallback : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKCALLBACKMANAGER_BANKCALLBACK__CTOR_OFFSET))(this, object, method);
	}

	::System::Void Invoke(::System::UInt32 in_bankID, ::System::IntPtr in_InMemoryBankPtr, ::AKRESULT in_eLoadResult, ::System::Object* in_Cookie)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::IntPtr, ::AKRESULT, ::System::Object*))((::PBYTE)hIl2Cpp + AKCALLBACKMANAGER_BANKCALLBACK_INVOKE_OFFSET))(this, in_bankID, in_InMemoryBankPtr, in_eLoadResult, in_Cookie);
	}

	::System::IAsyncResult* BeginInvoke(::System::UInt32 in_bankID, ::System::IntPtr in_InMemoryBankPtr, ::AKRESULT in_eLoadResult, ::System::Object* in_Cookie, ::System::AsyncCallback* callback, ::System::Object* object)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt32, ::System::IntPtr, ::AKRESULT, ::System::Object*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + AKCALLBACKMANAGER_BANKCALLBACK_BEGININVOKE_OFFSET))(this, in_bankID, in_InMemoryBankPtr, in_eLoadResult, in_Cookie, callback, object);
	}

	::System::Void EndInvoke(::System::IAsyncResult* result)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + AKCALLBACKMANAGER_BANKCALLBACK_ENDINVOKE_OFFSET))(this, result);
	}
};
