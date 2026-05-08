#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define FLOWCANVAS_FLOWHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x19845BC0)
#define FLOWCANVAS_FLOWHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x19845C30)
#define FLOWCANVAS_FLOWHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x19845700)
#define FLOWCANVAS_FLOWHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19844310)

namespace FlowCanvas
{
	inline static constexpr unsigned int FlowHandler_TypeDefinitionIndex = 27937;

	class FlowHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWHANDLER__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWHANDLER_INVOKE_OFFSET))(this, f);
		}

		::System::IAsyncResult* BeginInvoke(::FlowCanvas::Flow f, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::FlowCanvas::Flow, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWHANDLER_BEGININVOKE_OFFSET))(this, f, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWHANDLER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
