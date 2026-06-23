#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define FLOWCANVAS_NODES_REFLECTEDDELEGATEEVENT_DELEGATEEVENTCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1D1DBC40)
#define FLOWCANVAS_NODES_REFLECTEDDELEGATEEVENT_DELEGATEEVENTCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1D1DBC70)
#define FLOWCANVAS_NODES_REFLECTEDDELEGATEEVENT_DELEGATEEVENTCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D1DB6A0)
#define FLOWCANVAS_NODES_REFLECTEDDELEGATEEVENT_DELEGATEEVENTCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1D8F40)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int ReflectedDelegateEvent_DelegateEventCallback_TypeDefinitionIndex = 29911;

	class ReflectedDelegateEvent_DelegateEventCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_REFLECTEDDELEGATEEVENT_DELEGATEEVENTCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_REFLECTEDDELEGATEEVENT_DELEGATEEVENTCALLBACK_INVOKE_OFFSET))(this, args);
		}

		::System::IAsyncResult* BeginInvoke(::Il2CppArray<::System::Object*>* args, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Object*>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_REFLECTEDDELEGATEEVENT_DELEGATEEVENTCALLBACK_BEGININVOKE_OFFSET))(this, args, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_REFLECTEDDELEGATEEVENT_DELEGATEEVENTCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
