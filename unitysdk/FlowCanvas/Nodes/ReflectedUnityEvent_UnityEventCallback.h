#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define FLOWCANVAS_NODES_REFLECTEDUNITYEVENT_UNITYEVENTCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B4594D0)
#define FLOWCANVAS_NODES_REFLECTEDUNITYEVENT_UNITYEVENTCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B459500)
#define FLOWCANVAS_NODES_REFLECTEDUNITYEVENT_UNITYEVENTCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B458FD0)
#define FLOWCANVAS_NODES_REFLECTEDUNITYEVENT_UNITYEVENTCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1B458FC0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int ReflectedUnityEvent_UnityEventCallback_TypeDefinitionIndex = 27689;

	class ReflectedUnityEvent_UnityEventCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_REFLECTEDUNITYEVENT_UNITYEVENTCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_REFLECTEDUNITYEVENT_UNITYEVENTCALLBACK_INVOKE_OFFSET))(this, args);
		}

		::System::IAsyncResult* BeginInvoke(::Il2CppArray<::System::Object*>* args, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Object*>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_REFLECTEDUNITYEVENT_UNITYEVENTCALLBACK_BEGININVOKE_OFFSET))(this, args, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_REFLECTEDUNITYEVENT_UNITYEVENTCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
