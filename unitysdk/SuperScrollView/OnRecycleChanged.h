#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define SUPERSCROLLVIEW_ONRECYCLECHANGED_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xE9849E0)
#define SUPERSCROLLVIEW_ONRECYCLECHANGED_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xE984A30)
#define SUPERSCROLLVIEW_ONRECYCLECHANGED_INVOKE_OFFSET UNITYSDK_OFFSET(0xE95FBF0)
#define SUPERSCROLLVIEW_ONRECYCLECHANGED__CTOR_OFFSET UNITYSDK_OFFSET(0xE984970)

namespace SuperScrollView
{
	inline static constexpr unsigned int OnRecycleChanged_TypeDefinitionIndex = 48130;

	class OnRecycleChanged : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_ONRECYCLECHANGED__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_ONRECYCLECHANGED_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::System::Boolean a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_ONRECYCLECHANGED_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_ONRECYCLECHANGED_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
