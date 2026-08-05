#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_BACKGROUNDWORKER_BACKGROUNDTASK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1DCB6C30)
#define MIHOYO_SDK_BACKGROUNDWORKER_BACKGROUNDTASK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1DCB6C60)
#define MIHOYO_SDK_BACKGROUNDWORKER_BACKGROUNDTASK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1DCB6710)
#define MIHOYO_SDK_BACKGROUNDWORKER_BACKGROUNDTASK__CTOR_OFFSET UNITYSDK_OFFSET(0x1DCB66F0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int BackgroundWorker_BackgroundTask_TypeDefinitionIndex = 37328;

	class BackgroundWorker_BackgroundTask : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BACKGROUNDWORKER_BACKGROUNDTASK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Object* parameter)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BACKGROUNDWORKER_BACKGROUNDTASK_INVOKE_OFFSET))(this, parameter);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* parameter, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BACKGROUNDWORKER_BACKGROUNDTASK_BEGININVOKE_OFFSET))(this, parameter, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BACKGROUNDWORKER_BACKGROUNDTASK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
