#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define RICHTAP_COMMON_CONTROLLERSTATECHANGECALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1DE12FD0)
#define RICHTAP_COMMON_CONTROLLERSTATECHANGECALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1DE13060)
#define RICHTAP_COMMON_CONTROLLERSTATECHANGECALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1DE12C90)
#define RICHTAP_COMMON_CONTROLLERSTATECHANGECALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE12C70)

namespace RichTap::Common
{
	inline static constexpr unsigned int ControllerStateChangeCallback_TypeDefinitionIndex = 38108;

	class ControllerStateChangeCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + RICHTAP_COMMON_CONTROLLERSTATECHANGECALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Int32 state, ::System::IntPtr device_name)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::IntPtr))((::PBYTE)hIl2Cpp + RICHTAP_COMMON_CONTROLLERSTATECHANGECALLBACK_INVOKE_OFFSET))(this, state, device_name);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 state, ::System::IntPtr device_name, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::IntPtr, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + RICHTAP_COMMON_CONTROLLERSTATECHANGECALLBACK_BEGININVOKE_OFFSET))(this, state, device_name, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + RICHTAP_COMMON_CONTROLLERSTATECHANGECALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
