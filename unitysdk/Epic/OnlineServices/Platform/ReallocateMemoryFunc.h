#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_PLATFORM_REALLOCATEMEMORYFUNC_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xA31BD70)
#define EPIC_ONLINESERVICES_PLATFORM_REALLOCATEMEMORYFUNC_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xA31BE00)
#define EPIC_ONLINESERVICES_PLATFORM_REALLOCATEMEMORYFUNC_INVOKE_OFFSET UNITYSDK_OFFSET(0xA31BD50)
#define EPIC_ONLINESERVICES_PLATFORM_REALLOCATEMEMORYFUNC__CTOR_OFFSET UNITYSDK_OFFSET(0xA31BCE0)

namespace Epic::OnlineServices::Platform
{
	inline static constexpr unsigned int ReallocateMemoryFunc_TypeDefinitionIndex = 43377;

	class ReallocateMemoryFunc : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_REALLOCATEMEMORYFUNC__CTOR_OFFSET))(this, a1, a2);
		}

		::System::IntPtr Invoke(::System::IntPtr a1, ::System::UIntPtr a2, ::System::UIntPtr a3)
		{
			return ((::System::IntPtr(*)(::PVOID, ::System::IntPtr, ::System::UIntPtr, ::System::UIntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_REALLOCATEMEMORYFUNC_INVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::IAsyncResult* BeginInvoke(::System::IntPtr a1, ::System::UIntPtr a2, ::System::UIntPtr a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::IntPtr, ::System::UIntPtr, ::System::UIntPtr, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_REALLOCATEMEMORYFUNC_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::IntPtr EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::IntPtr(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_REALLOCATEMEMORYFUNC_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
