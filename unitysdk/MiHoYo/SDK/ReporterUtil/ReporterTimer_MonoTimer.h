#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace MiHoYo::SDK::ReporterUtil { class ReporterTimer_MonoTimer_TimeoutHandler; }
namespace UnityEngine { class Coroutine; }

#define MIHOYO_SDK_REPORTERUTIL_REPORTERTIMER_MONOTIMER_ADD_TIMEOUT_OFFSET UNITYSDK_OFFSET(0x8DAD9E0)
#define MIHOYO_SDK_REPORTERUTIL_REPORTERTIMER_MONOTIMER_GET_ISCONTINUOUS_OFFSET UNITYSDK_OFFSET(0x8DAE320)
#define MIHOYO_SDK_REPORTERUTIL_REPORTERTIMER_MONOTIMER_GET_MILLISECONDS_OFFSET UNITYSDK_OFFSET(0x8DAE340)
#define MIHOYO_SDK_REPORTERUTIL_REPORTERTIMER_MONOTIMER_ONTIMEOUT_OFFSET UNITYSDK_OFFSET(0x8DAE3D0)
#define MIHOYO_SDK_REPORTERUTIL_REPORTERTIMER_MONOTIMER_REMOVE_TIMEOUT_OFFSET UNITYSDK_OFFSET(0x8DAE370)
#define MIHOYO_SDK_REPORTERUTIL_REPORTERTIMER_MONOTIMER_SET_ISCONTINUOUS_OFFSET UNITYSDK_OFFSET(0x8DAE330)
#define MIHOYO_SDK_REPORTERUTIL_REPORTERTIMER_MONOTIMER_SET_MILLISECONDS_OFFSET UNITYSDK_OFFSET(0x8DAE350)
#define MIHOYO_SDK_REPORTERUTIL_REPORTERTIMER_MONOTIMER_START_OFFSET UNITYSDK_OFFSET(0x8DAE030)
#define MIHOYO_SDK_REPORTERUTIL_REPORTERTIMER_MONOTIMER_STOP_OFFSET UNITYSDK_OFFSET(0x8DAE190)
#define MIHOYO_SDK_REPORTERUTIL_REPORTERTIMER_MONOTIMER__CTOR_OFFSET UNITYSDK_OFFSET(0x8DAE360)

namespace MiHoYo::SDK::ReporterUtil
{
	inline static constexpr unsigned int ReporterTimer_MonoTimer_TypeDefinitionIndex = 43215;

	class ReporterTimer_MonoTimer : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Coroutine* timeoutCoroutine; // 0x18
		::System::Boolean _IsContinuous_k__BackingField; // 0x20
		::MiHoYo::SDK::ReporterUtil::ReporterTimer_MonoTimer_TimeoutHandler* onTimeout; // 0x28
		::System::Int64 _MilliSeconds_k__BackingField; // 0x30

		::System::Void _ctor(::System::Int64 milliSeconds, ::System::Boolean isContinuous)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTERTIMER_MONOTIMER__CTOR_OFFSET))(this, milliSeconds, isContinuous);
		}

		::System::Boolean get_IsContinuous()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTERTIMER_MONOTIMER_GET_ISCONTINUOUS_OFFSET))(this);
		}

		::System::Void set_IsContinuous(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTERTIMER_MONOTIMER_SET_ISCONTINUOUS_OFFSET))(this, value);
		}

		::System::Int64 get_MilliSeconds()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTERTIMER_MONOTIMER_GET_MILLISECONDS_OFFSET))(this);
		}

		::System::Void set_MilliSeconds(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTERTIMER_MONOTIMER_SET_MILLISECONDS_OFFSET))(this, value);
		}

		::System::Void add_Timeout(::MiHoYo::SDK::ReporterUtil::ReporterTimer_MonoTimer_TimeoutHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::ReporterUtil::ReporterTimer_MonoTimer_TimeoutHandler*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTERTIMER_MONOTIMER_ADD_TIMEOUT_OFFSET))(this, value);
		}

		::System::Void remove_Timeout(::MiHoYo::SDK::ReporterUtil::ReporterTimer_MonoTimer_TimeoutHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::ReporterUtil::ReporterTimer_MonoTimer_TimeoutHandler*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTERTIMER_MONOTIMER_REMOVE_TIMEOUT_OFFSET))(this, value);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTERTIMER_MONOTIMER_START_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTERTIMER_MONOTIMER_STOP_OFFSET))(this);
		}

		::System::Void OnTimeOut()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTERTIMER_MONOTIMER_ONTIMEOUT_OFFSET))(this);
		}
	};
}
