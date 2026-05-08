#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class IAsyncResult; }
namespace System { class Object; }

#define SYSTEM_ASYNCCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x195D9F60)
#define SYSTEM_ASYNCCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x195D9F90)
#define SYSTEM_ASYNCCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x195D9A60)
#define SYSTEM_ASYNCCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x195D9A50)

namespace System
{
	inline static constexpr unsigned int AsyncCallback_TypeDefinitionIndex = 188;

	class AsyncCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_ASYNCCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::IAsyncResult* ar)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_ASYNCCALLBACK_INVOKE_OFFSET))(this, ar);
		}

		::System::IAsyncResult* BeginInvoke(::System::IAsyncResult* ar, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::IAsyncResult*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_ASYNCCALLBACK_BEGININVOKE_OFFSET))(this, ar, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_ASYNCCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
