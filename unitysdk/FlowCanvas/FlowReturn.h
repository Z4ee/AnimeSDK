#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define FLOWCANVAS_FLOWRETURN_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1E227340)
#define FLOWCANVAS_FLOWRETURN_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1E227370)
#define FLOWCANVAS_FLOWRETURN_INVOKE_OFFSET UNITYSDK_OFFSET(0x1E226E20)
#define FLOWCANVAS_FLOWRETURN__CTOR_OFFSET UNITYSDK_OFFSET(0x1E226E00)

namespace FlowCanvas
{
	inline static constexpr unsigned int FlowReturn_TypeDefinitionIndex = 30432;

	class FlowReturn : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWRETURN__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWRETURN_INVOKE_OFFSET))(this, value);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* value, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWRETURN_BEGININVOKE_OFFSET))(this, value, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWRETURN_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
