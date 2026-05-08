#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_PLATFORM_RELEASEMEMORYFUNC_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x198AE570)
#define EPIC_ONLINESERVICES_PLATFORM_RELEASEMEMORYFUNC_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x198AE5C0)
#define EPIC_ONLINESERVICES_PLATFORM_RELEASEMEMORYFUNC_INVOKE_OFFSET UNITYSDK_OFFSET(0x198AE270)
#define EPIC_ONLINESERVICES_PLATFORM_RELEASEMEMORYFUNC__CTOR_OFFSET UNITYSDK_OFFSET(0x198AE260)

namespace Epic::OnlineServices::Platform
{
	inline static constexpr unsigned int ReleaseMemoryFunc_TypeDefinitionIndex = 34794;

	class ReleaseMemoryFunc : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_RELEASEMEMORYFUNC__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::IntPtr pointer)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_RELEASEMEMORYFUNC_INVOKE_OFFSET))(this, pointer);
		}

		::System::IAsyncResult* BeginInvoke(::System::IntPtr pointer, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::IntPtr, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_RELEASEMEMORYFUNC_BEGININVOKE_OFFSET))(this, pointer, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_RELEASEMEMORYFUNC_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
