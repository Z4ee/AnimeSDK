#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_THREADPOOLTASK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x8DCF530)
#define MIHOYO_SDK_THREADPOOLTASK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x8DCF560)
#define MIHOYO_SDK_THREADPOOLTASK_INVOKE_OFFSET UNITYSDK_OFFSET(0x8DCE770)
#define MIHOYO_SDK_THREADPOOLTASK__CTOR_OFFSET UNITYSDK_OFFSET(0x8DCAB80)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ThreadPoolTask_TypeDefinitionIndex = 43097;

	class ThreadPoolTask : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_THREADPOOLTASK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Object* state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_THREADPOOLTASK_INVOKE_OFFSET))(this, state);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* state, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_THREADPOOLTASK_BEGININVOKE_OFFSET))(this, state, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_THREADPOOLTASK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
