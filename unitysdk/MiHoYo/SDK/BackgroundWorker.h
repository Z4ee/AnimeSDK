#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class BackgroundWorker_BackgroundTask; }

#define MIHOYO_SDK_BACKGROUNDWORKER_STARTBACKGROUNDTASK_OFFSET UNITYSDK_OFFSET(0x8CE7700)
#define MIHOYO_SDK_BACKGROUNDWORKER__CTOR_OFFSET UNITYSDK_OFFSET(0x8CE7820)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int BackgroundWorker_TypeDefinitionIndex = 42886;

	class BackgroundWorker : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BACKGROUNDWORKER__CTOR_OFFSET))(this);
		}

		static ::System::Boolean StartBackgroundTask(::MiHoYo::SDK::BackgroundWorker_BackgroundTask* task, ::System::Object* parameter)
		{
			return ((::System::Boolean(*)(::MiHoYo::SDK::BackgroundWorker_BackgroundTask*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BACKGROUNDWORKER_STARTBACKGROUNDTASK_OFFSET))(task, parameter);
		}
	};
}
