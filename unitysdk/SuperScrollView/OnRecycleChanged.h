#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define SUPERSCROLLVIEW_ONRECYCLECHANGED_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xB9939A0)
#define SUPERSCROLLVIEW_ONRECYCLECHANGED_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xB9939F0)
#define SUPERSCROLLVIEW_ONRECYCLECHANGED_INVOKE_OFFSET UNITYSDK_OFFSET(0xB993630)
#define SUPERSCROLLVIEW_ONRECYCLECHANGED__CTOR_OFFSET UNITYSDK_OFFSET(0xB993610)

namespace SuperScrollView
{
	inline static constexpr unsigned int OnRecycleChanged_TypeDefinitionIndex = 44412;

	class OnRecycleChanged : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_ONRECYCLECHANGED__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Boolean isRecycle)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_ONRECYCLECHANGED_INVOKE_OFFSET))(this, isRecycle);
		}

		::System::IAsyncResult* BeginInvoke(::System::Boolean isRecycle, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_ONRECYCLECHANGED_BEGININVOKE_OFFSET))(this, isRecycle, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_ONRECYCLECHANGED_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
