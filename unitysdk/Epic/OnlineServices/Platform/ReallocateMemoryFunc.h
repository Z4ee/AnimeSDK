#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_PLATFORM_REALLOCATEMEMORYFUNC_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x86B9580)
#define EPIC_ONLINESERVICES_PLATFORM_REALLOCATEMEMORYFUNC_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x86B9610)
#define EPIC_ONLINESERVICES_PLATFORM_REALLOCATEMEMORYFUNC_INVOKE_OFFSET UNITYSDK_OFFSET(0x86B91E0)
#define EPIC_ONLINESERVICES_PLATFORM_REALLOCATEMEMORYFUNC__CTOR_OFFSET UNITYSDK_OFFSET(0x86B91C0)

namespace Epic::OnlineServices::Platform
{
	inline static constexpr unsigned int ReallocateMemoryFunc_TypeDefinitionIndex = 36748;

	class ReallocateMemoryFunc : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_REALLOCATEMEMORYFUNC__CTOR_OFFSET))(this, object, method);
		}

		::System::IntPtr Invoke(::System::IntPtr pointer, ::System::UIntPtr sizeInBytes, ::System::UIntPtr alignment)
		{
			return ((::System::IntPtr(*)(::PVOID, ::System::IntPtr, ::System::UIntPtr, ::System::UIntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_REALLOCATEMEMORYFUNC_INVOKE_OFFSET))(this, pointer, sizeInBytes, alignment);
		}

		::System::IAsyncResult* BeginInvoke(::System::IntPtr pointer, ::System::UIntPtr sizeInBytes, ::System::UIntPtr alignment, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::IntPtr, ::System::UIntPtr, ::System::UIntPtr, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_REALLOCATEMEMORYFUNC_BEGININVOKE_OFFSET))(this, pointer, sizeInBytes, alignment, callback, object);
		}

		::System::IntPtr EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::IntPtr(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_REALLOCATEMEMORYFUNC_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
