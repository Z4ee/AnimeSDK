#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_PLATFORM_ALLOCATEMEMORYFUNC_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1ADE65A0)
#define EPIC_ONLINESERVICES_PLATFORM_ALLOCATEMEMORYFUNC_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1ADE6610)
#define EPIC_ONLINESERVICES_PLATFORM_ALLOCATEMEMORYFUNC_INVOKE_OFFSET UNITYSDK_OFFSET(0x1ADE6250)
#define EPIC_ONLINESERVICES_PLATFORM_ALLOCATEMEMORYFUNC__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADE6230)

namespace Epic::OnlineServices::Platform
{
	inline static constexpr unsigned int AllocateMemoryFunc_TypeDefinitionIndex = 36344;

	class AllocateMemoryFunc : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_ALLOCATEMEMORYFUNC__CTOR_OFFSET))(this, object, method);
		}

		::System::IntPtr Invoke(::System::UIntPtr sizeInBytes, ::System::UIntPtr alignment)
		{
			return ((::System::IntPtr(*)(::PVOID, ::System::UIntPtr, ::System::UIntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_ALLOCATEMEMORYFUNC_INVOKE_OFFSET))(this, sizeInBytes, alignment);
		}

		::System::IAsyncResult* BeginInvoke(::System::UIntPtr sizeInBytes, ::System::UIntPtr alignment, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UIntPtr, ::System::UIntPtr, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_ALLOCATEMEMORYFUNC_BEGININVOKE_OFFSET))(this, sizeInBytes, alignment, callback, object);
		}

		::System::IntPtr EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::IntPtr(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_ALLOCATEMEMORYFUNC_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
