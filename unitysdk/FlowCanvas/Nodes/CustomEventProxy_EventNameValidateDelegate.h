#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define FLOWCANVAS_NODES_CUSTOMEVENTPROXY_EVENTNAMEVALIDATEDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1D7B8910)
#define FLOWCANVAS_NODES_CUSTOMEVENTPROXY_EVENTNAMEVALIDATEDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1D7B8950)
#define FLOWCANVAS_NODES_CUSTOMEVENTPROXY_EVENTNAMEVALIDATEDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D7B8380)
#define FLOWCANVAS_NODES_CUSTOMEVENTPROXY_EVENTNAMEVALIDATEDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7B8360)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int CustomEventProxy_EventNameValidateDelegate_TypeDefinitionIndex = 29190;

	class CustomEventProxy_EventNameValidateDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CUSTOMEVENTPROXY_EVENTNAMEVALIDATEDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Boolean Invoke(::System::String* eventName, ::System::String*& eventComment)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*&))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CUSTOMEVENTPROXY_EVENTNAMEVALIDATEDELEGATE_INVOKE_OFFSET))(this, eventName, eventComment);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* eventName, ::System::String*& eventComment, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::String*&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CUSTOMEVENTPROXY_EVENTNAMEVALIDATEDELEGATE_BEGININVOKE_OFFSET))(this, eventName, eventComment, callback, object);
		}

		::System::Boolean EndInvoke(::System::String*& eventComment, ::System::IAsyncResult* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CUSTOMEVENTPROXY_EVENTNAMEVALIDATEDELEGATE_ENDINVOKE_OFFSET))(this, eventComment, result);
		}
	};
}
