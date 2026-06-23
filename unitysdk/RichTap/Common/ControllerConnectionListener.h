#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define RICHTAP_COMMON_CONTROLLERCONNECTIONLISTENER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1DE12BD0)
#define RICHTAP_COMMON_CONTROLLERCONNECTIONLISTENER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1DE12C60)
#define RICHTAP_COMMON_CONTROLLERCONNECTIONLISTENER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1DE12890)
#define RICHTAP_COMMON_CONTROLLERCONNECTIONLISTENER__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE12870)

namespace RichTap::Common
{
	inline static constexpr unsigned int ControllerConnectionListener_TypeDefinitionIndex = 38107;

	class ControllerConnectionListener : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + RICHTAP_COMMON_CONTROLLERCONNECTIONLISTENER__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::IntPtr device_name, ::System::Int32 connection_type)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + RICHTAP_COMMON_CONTROLLERCONNECTIONLISTENER_INVOKE_OFFSET))(this, device_name, connection_type);
		}

		::System::IAsyncResult* BeginInvoke(::System::IntPtr device_name, ::System::Int32 connection_type, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::IntPtr, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + RICHTAP_COMMON_CONTROLLERCONNECTIONLISTENER_BEGININVOKE_OFFSET))(this, device_name, connection_type, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + RICHTAP_COMMON_CONTROLLERCONNECTIONLISTENER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
