#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define FLOWCANVAS_VALUEHANDLEROBJECT_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1D534E40)
#define FLOWCANVAS_VALUEHANDLEROBJECT_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1D534E70)
#define FLOWCANVAS_VALUEHANDLEROBJECT_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D534BA0)
#define FLOWCANVAS_VALUEHANDLEROBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D530EF0)

namespace FlowCanvas
{
	inline static constexpr unsigned int ValueHandlerObject_TypeDefinitionIndex = 30832;

	class ValueHandlerObject : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + FLOWCANVAS_VALUEHANDLEROBJECT__CTOR_OFFSET))(this, object, method);
		}

		::System::Object* Invoke()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_VALUEHANDLEROBJECT_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + FLOWCANVAS_VALUEHANDLEROBJECT_BEGININVOKE_OFFSET))(this, callback, object);
		}

		::System::Object* EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Object*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + FLOWCANVAS_VALUEHANDLEROBJECT_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
