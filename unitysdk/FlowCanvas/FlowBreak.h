#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define FLOWCANVAS_FLOWBREAK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1EBB3BC0)
#define FLOWCANVAS_FLOWBREAK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1EBB3BF0)
#define FLOWCANVAS_FLOWBREAK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1EBB3930)
#define FLOWCANVAS_FLOWBREAK__CTOR_OFFSET UNITYSDK_OFFSET(0x1EBB3910)

namespace FlowCanvas
{
	inline static constexpr unsigned int FlowBreak_TypeDefinitionIndex = 30885;

	class FlowBreak : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWBREAK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWBREAK_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWBREAK_BEGININVOKE_OFFSET))(this, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWBREAK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
