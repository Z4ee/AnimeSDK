#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class BackgroundWorker_BackgroundTask; }

#define MIHOYO_SDK_BACKGROUNDWORKER_STARTBACKGROUNDTASK_OFFSET UNITYSDK_OFFSET(0x16A84350)
#define MIHOYO_SDK_BACKGROUNDWORKER__CTOR_OFFSET UNITYSDK_OFFSET(0x16A844A0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int BackgroundWorker_TypeDefinitionIndex = 46737;

	class BackgroundWorker : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BACKGROUNDWORKER__CTOR_OFFSET))(this);
		}

		static ::System::Boolean StartBackgroundTask(::MiHoYo::SDK::BackgroundWorker_BackgroundTask* a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::MiHoYo::SDK::BackgroundWorker_BackgroundTask*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BACKGROUNDWORKER_STARTBACKGROUNDTASK_OFFSET))(a1, a2);
		}
	};
}
