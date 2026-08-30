#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::ReporterUtil { class ReporterTimer_MonoTimer; }
namespace MiHoYo::SDK::ReporterUtil { class ReporterTimer_TimeoutHandler; }
namespace System::Timers { class ElapsedEventArgs; }
namespace UnityEngine { class GameObject; }

#define MIHOYO_SDK_REPORTERUTIL_REPORTERTIMER_ADD_TIMEOUT_OFFSET UNITYSDK_OFFSET(0x1C6BAA80)
#define MIHOYO_SDK_REPORTERUTIL_REPORTERTIMER_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1C6BB3D0)
#define MIHOYO_SDK_REPORTERUTIL_REPORTERTIMER_MONOTIMER_TIMEOUT_OFFSET UNITYSDK_OFFSET(0x1C6BB1A0)
#define MIHOYO_SDK_REPORTERUTIL_REPORTERTIMER_REMOVE_TIMEOUT_OFFSET UNITYSDK_OFFSET(0x1C6BB140)
#define MIHOYO_SDK_REPORTERUTIL_REPORTERTIMER_START_OFFSET UNITYSDK_OFFSET(0x1C6BAAE0)
#define MIHOYO_SDK_REPORTERUTIL_REPORTERTIMER_STOP_OFFSET UNITYSDK_OFFSET(0x1C6BAB00)
#define MIHOYO_SDK_REPORTERUTIL_REPORTERTIMER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6BA950)

namespace MiHoYo::SDK::ReporterUtil
{
	inline static constexpr unsigned int ReporterTimer_TypeDefinitionIndex = 47114;

	class ReporterTimer : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* monoTimerGameObj; // 0x10
		::MiHoYo::SDK::ReporterUtil::ReporterTimer_MonoTimer* monoTimer; // 0x18
		::MiHoYo::SDK::ReporterUtil::ReporterTimer_TimeoutHandler* onTimeout; // 0x20

		::System::Void _ctor(::System::Int64 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTERTIMER__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void add_Timeout(::MiHoYo::SDK::ReporterUtil::ReporterTimer_TimeoutHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::ReporterUtil::ReporterTimer_TimeoutHandler*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTERTIMER_ADD_TIMEOUT_OFFSET))(this, a1);
		}

		::System::Void remove_Timeout(::MiHoYo::SDK::ReporterUtil::ReporterTimer_TimeoutHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::ReporterUtil::ReporterTimer_TimeoutHandler*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTERTIMER_REMOVE_TIMEOUT_OFFSET))(this, a1);
		}

		::System::Void MonoTimer_Timeout(::System::Object* a1, ::System::Timers::ElapsedEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Timers::ElapsedEventArgs*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTERTIMER_MONOTIMER_TIMEOUT_OFFSET))(this, a1, a2);
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
