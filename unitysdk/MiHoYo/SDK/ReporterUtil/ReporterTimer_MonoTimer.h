#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace MiHoYo::SDK::ReporterUtil { class ReporterTimer_MonoTimer_TimeoutHandler; }
namespace UnityEngine { class Coroutine; }

#define MIHOYO_SDK_REPORTERUTIL_REPORTERTIMER_MONOTIMER_ADD_TIMEOUT_OFFSET UNITYSDK_OFFSET(0xB031460)
#define MIHOYO_SDK_REPORTERUTIL_REPORTERTIMER_MONOTIMER_GET_ISCONTINUOUS_OFFSET UNITYSDK_OFFSET(0xB031850)
#define MIHOYO_SDK_REPORTERUTIL_REPORTERTIMER_MONOTIMER_GET_MILLISECONDS_OFFSET UNITYSDK_OFFSET(0xB031870)
#define MIHOYO_SDK_REPORTERUTIL_REPORTERTIMER_MONOTIMER_ONTIMEOUT_OFFSET UNITYSDK_OFFSET(0xB031900)
#define MIHOYO_SDK_REPORTERUTIL_REPORTERTIMER_MONOTIMER_REMOVE_TIMEOUT_OFFSET UNITYSDK_OFFSET(0xB0318A0)
#define MIHOYO_SDK_REPORTERUTIL_REPORTERTIMER_MONOTIMER_SET_ISCONTINUOUS_OFFSET UNITYSDK_OFFSET(0xB031860)
#define MIHOYO_SDK_REPORTERUTIL_REPORTERTIMER_MONOTIMER_SET_MILLISECONDS_OFFSET UNITYSDK_OFFSET(0xB031880)
#define MIHOYO_SDK_REPORTERUTIL_REPORTERTIMER_MONOTIMER_START_OFFSET UNITYSDK_OFFSET(0xB031550)
#define MIHOYO_SDK_REPORTERUTIL_REPORTERTIMER_MONOTIMER_STOP_OFFSET UNITYSDK_OFFSET(0xB0316C0)
#define MIHOYO_SDK_REPORTERUTIL_REPORTERTIMER_MONOTIMER__CTOR_OFFSET UNITYSDK_OFFSET(0xB031890)

namespace MiHoYo::SDK::ReporterUtil
{
	inline static constexpr unsigned int ReporterTimer_MonoTimer_TypeDefinitionIndex = 46656;

	class ReporterTimer_MonoTimer : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Coroutine* timeoutCoroutine; // 0x18
		::System::Boolean _IsContinuous_k__BackingField; // 0x20
		::MiHoYo::SDK::ReporterUtil::ReporterTimer_MonoTimer_TimeoutHandler* onTimeout; // 0x28
		::System::Int64 _MilliSeconds_k__BackingField; // 0x30

		::System::Void _ctor(::System::Int64 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTERTIMER_MONOTIMER__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsContinuous()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTERTIMER_MONOTIMER_GET_ISCONTINUOUS_OFFSET))(this);
		}

		::System::Void set_IsContinuous(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTERTIMER_MONOTIMER_SET_ISCONTINUOUS_OFFSET))(this, a1);
		}

		::System::Int64 get_MilliSeconds()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTERTIMER_MONOTIMER_GET_MILLISECONDS_OFFSET))(this);
		}

		::System::Void set_MilliSeconds(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTERTIMER_MONOTIMER_SET_MILLISECONDS_OFFSET))(this, a1);
		}

		::System::Void add_Timeout(::MiHoYo::SDK::ReporterUtil::ReporterTimer_MonoTimer_TimeoutHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::ReporterUtil::ReporterTimer_MonoTimer_TimeoutHandler*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTERTIMER_MONOTIMER_ADD_TIMEOUT_OFFSET))(this, a1);
		}

		::System::Void remove_Timeout(::MiHoYo::SDK::ReporterUtil::ReporterTimer_MonoTimer_TimeoutHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::ReporterUtil::ReporterTimer_MonoTimer_TimeoutHandler*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTERTIMER_MONOTIMER_REMOVE_TIMEOUT_OFFSET))(this, a1);
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
