#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class IAsyncResult; }
namespace System { class Object; }

#define SYSTEM_ASYNCCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1859BC30)
#define SYSTEM_ASYNCCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1859BC60)
#define SYSTEM_ASYNCCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1859BC20)
#define SYSTEM_ASYNCCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1859BB30)

namespace System
{
	inline static constexpr unsigned int AsyncCallback_TypeDefinitionIndex = 199;

	class AsyncCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_ASYNCCALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_ASYNCCALLBACK_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::System::IAsyncResult* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::IAsyncResult*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_ASYNCCALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_ASYNCCALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
