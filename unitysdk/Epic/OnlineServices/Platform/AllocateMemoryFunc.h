#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_PLATFORM_ALLOCATEMEMORYFUNC_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xA314B40)
#define EPIC_ONLINESERVICES_PLATFORM_ALLOCATEMEMORYFUNC_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xA314BB0)
#define EPIC_ONLINESERVICES_PLATFORM_ALLOCATEMEMORYFUNC_INVOKE_OFFSET UNITYSDK_OFFSET(0xA314B30)
#define EPIC_ONLINESERVICES_PLATFORM_ALLOCATEMEMORYFUNC__CTOR_OFFSET UNITYSDK_OFFSET(0xA314AC0)

namespace Epic::OnlineServices::Platform
{
	inline static constexpr unsigned int AllocateMemoryFunc_TypeDefinitionIndex = 43365;

	class AllocateMemoryFunc : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_ALLOCATEMEMORYFUNC__CTOR_OFFSET))(this, a1, a2);
		}

		::System::IntPtr Invoke(::System::UIntPtr a1, ::System::UIntPtr a2)
		{
			return ((::System::IntPtr(*)(::PVOID, ::System::UIntPtr, ::System::UIntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_ALLOCATEMEMORYFUNC_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::System::UIntPtr a1, ::System::UIntPtr a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UIntPtr, ::System::UIntPtr, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_ALLOCATEMEMORYFUNC_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::IntPtr EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::IntPtr(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_ALLOCATEMEMORYFUNC_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
