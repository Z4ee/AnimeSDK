#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define FLOWCANVAS_NODES_EVENTUNIVERSALDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1EBB4690)
#define FLOWCANVAS_NODES_EVENTUNIVERSALDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1EBB46C0)
#define FLOWCANVAS_NODES_EVENTUNIVERSALDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1EBB4400)
#define FLOWCANVAS_NODES_EVENTUNIVERSALDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EBB43E0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int EventUniversalDelegate_TypeDefinitionIndex = 31472;

	class EventUniversalDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_EVENTUNIVERSALDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_EVENTUNIVERSALDELEGATE_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_EVENTUNIVERSALDELEGATE_BEGININVOKE_OFFSET))(this, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_EVENTUNIVERSALDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
