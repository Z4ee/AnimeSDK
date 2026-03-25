#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::ReporterUtil { class ReporterTimer_MonoTimer; }
namespace MiHoYo::SDK::ReporterUtil { class ReporterTimer_TimeoutHandler; }
namespace System::Timers { class ElapsedEventArgs; }
namespace UnityEngine { class GameObject; }

#define MIHOYO_SDK_REPORTERUTIL_REPORTERTIMER_ADD_TIMEOUT_OFFSET UNITYSDK_OFFSET(0x8578050)
#define MIHOYO_SDK_REPORTERUTIL_REPORTERTIMER_FINALIZE_OFFSET UNITYSDK_OFFSET(0x8578DA0)
#define MIHOYO_SDK_REPORTERUTIL_REPORTERTIMER_MONOTIMER_TIMEOUT_OFFSET UNITYSDK_OFFSET(0x8578670)
#define MIHOYO_SDK_REPORTERUTIL_REPORTERTIMER_REMOVE_TIMEOUT_OFFSET UNITYSDK_OFFSET(0x8578610)
#define MIHOYO_SDK_REPORTERUTIL_REPORTERTIMER_START_OFFSET UNITYSDK_OFFSET(0x85780B0)
#define MIHOYO_SDK_REPORTERUTIL_REPORTERTIMER_STOP_OFFSET UNITYSDK_OFFSET(0x85780D0)
#define MIHOYO_SDK_REPORTERUTIL_REPORTERTIMER__CTOR_OFFSET UNITYSDK_OFFSET(0x8577F10)

namespace MiHoYo::SDK::ReporterUtil
{
	inline static constexpr unsigned int ReporterTimer_TypeDefinitionIndex = 37336;

	class ReporterTimer : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* monoTimerGameObj; // 0x10
		::MiHoYo::SDK::ReporterUtil::ReporterTimer_MonoTimer* monoTimer; // 0x18
		::MiHoYo::SDK::ReporterUtil::ReporterTimer_TimeoutHandler* onTimeout; // 0x20

		::System::Void _ctor(::System::Int64 milliSeconds, ::System::Boolean isContinuous)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTERTIMER__CTOR_OFFSET))(this, milliSeconds, isContinuous);
		}

		::System::Void add_Timeout(::MiHoYo::SDK::ReporterUtil::ReporterTimer_TimeoutHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::ReporterUtil::ReporterTimer_TimeoutHandler*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTERTIMER_ADD_TIMEOUT_OFFSET))(this, value);
		}

		::System::Void remove_Timeout(::MiHoYo::SDK::ReporterUtil::ReporterTimer_TimeoutHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::ReporterUtil::ReporterTimer_TimeoutHandler*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTERTIMER_REMOVE_TIMEOUT_OFFSET))(this, value);
		}

		::System::Void MonoTimer_Timeout(::System::Object* sender, ::System::Timers::ElapsedEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Timers::ElapsedEventArgs*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTERTIMER_MONOTIMER_TIMEOUT_OFFSET))(this, sender, e);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTERTIMER_START_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTERTIMER_STOP_OFFSET))(this);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTERTIMER_FINALIZE_OFFSET))(this);
		}
	};
}
