#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace QWER { class CExecTimerInfoList; }
namespace QWER { class CTimer; }
namespace QWER { class CTimerMgr; }
namespace QWER { class DOnTimer; }
namespace System::Collections::Generic { template <typename T> class LinkedList_1; }

#define QWER_CWHEELTIMERMGR_GETNEXTPOLLTIME_OFFSET UNITYSDK_OFFSET(0x1C3E5DE0)
#define QWER_CWHEELTIMERMGR_GET_CURTIME_OFFSET UNITYSDK_OFFSET(0x1C3E5DF0)
#define QWER_CWHEELTIMERMGR_GET_TIMESCALE_OFFSET UNITYSDK_OFFSET(0x1C3E5E10)
#define QWER_CWHEELTIMERMGR_POLL_OFFSET UNITYSDK_OFFSET(0x1C3E56E0)
#define QWER_CWHEELTIMERMGR_SET_CURTIME_OFFSET UNITYSDK_OFFSET(0x1C3E5E00)
#define QWER_CWHEELTIMERMGR_STARTTIMER_OFFSET UNITYSDK_OFFSET(0x1C3E5C70)
#define QWER_CWHEELTIMERMGR__ADDTIMERINFO_OFFSET UNITYSDK_OFFSET(0x1C3E6DB0)
#define QWER_CWHEELTIMERMGR__ADDTIMER_OFFSET UNITYSDK_OFFSET(0x1C3E6040)
#define QWER_CWHEELTIMERMGR__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C3E6FD0)
#define QWER_CWHEELTIMERMGR__EXECTIMER_OFFSET UNITYSDK_OFFSET(0x1C3E5E20)
#define QWER_CWHEELTIMERMGR__TICK_OFFSET UNITYSDK_OFFSET(0x1C3E6A60)

namespace QWER
{
	inline static constexpr unsigned int CWheelTimerMgr_TypeDefinitionIndex = 84245;

	class CWheelTimerMgr : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::UInt64>** StaticGet_m_aTimeOffsets()
		{
			return (::Il2CppArray<::System::UInt64>**)Il2CppClass::FromTypeDefinitionIndex(CWheelTimerMgr_TypeDefinitionIndex)->GetStaticField(0x49B30);
		}
		::System::Collections::Generic::LinkedList_1<::QWER::CTimer*>* m_poExtTimers; // 0x10
		::QWER::CTimerMgr* m_oTimerMgr; // 0x18
		::Il2CppArray<::QWER::CExecTimerInfoList*>* m_aTimers; // 0x20
		::System::UInt64 _CurTime_k__BackingField; // 0x28
		::System::Double _TimeScale_k__BackingField; // 0x30
		::System::Double m_dDeltaTime; // 0x38

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + QWER_CWHEELTIMERMGR__CCTOR_OFFSET))();
		}

		::System::UInt64 get_CurTime()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + QWER_CWHEELTIMERMGR_GET_CURTIME_OFFSET))(this);
		}

		::System::Void set_CurTime(::System::UInt64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + QWER_CWHEELTIMERMGR_SET_CURTIME_OFFSET))(this, value);
		}

		::System::Double get_TimeScale()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + QWER_CWHEELTIMERMGR_GET_TIMESCALE_OFFSET))(this);
		}

		::System::Int32 Poll(::System::UInt64 qwDeltaMilliSeconds, ::System::Int32 dwMaxCount)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt64, ::System::Int32))((::PBYTE)hIl2Cpp + QWER_CWHEELTIMERMGR_POLL_OFFSET))(this, qwDeltaMilliSeconds, dwMaxCount);
		}

		::QWER::CTimer* StartTimer(::System::UInt64 dwMilliSeconds, ::System::UInt32 dwCount, ::System::UInt64 dwFirstTimeoutMilliSeconds, ::QWER::DOnTimer* ronTimer, ::System::Boolean bAutoFix)
		{
			return ((::QWER::CTimer*(*)(::PVOID, ::System::UInt64, ::System::UInt32, ::System::UInt64, ::QWER::DOnTimer*, ::System::Boolean))((::PBYTE)hIl2Cpp + QWER_CWHEELTIMERMGR_STARTTIMER_OFFSET))(this, dwMilliSeconds, dwCount, dwFirstTimeoutMilliSeconds, ronTimer, bAutoFix);
		}

		::System::Int32 _ExecTimer(::System::Int32 dwMaxCount)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + QWER_CWHEELTIMERMGR__EXECTIMER_OFFSET))(this, dwMaxCount);
		}

		::System::Void _Tick(::System::UInt16 wLevel)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + QWER_CWHEELTIMERMGR__TICK_OFFSET))(this, wLevel);
		}

		::System::UInt64 GetNextPollTime()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + QWER_CWHEELTIMERMGR_GETNEXTPOLLTIME_OFFSET))(this);
		}

		::System::Void _AddTimer(::QWER::CTimer* poTimer)
		{
			return ((::System::Void(*)(::PVOID, ::QWER::CTimer*))((::PBYTE)hIl2Cpp + QWER_CWHEELTIMERMGR__ADDTIMER_OFFSET))(this, poTimer);
		}

		::System::Void _AddTimerInfo(::System::UInt16 wLevel, ::QWER::CTimer* poTimer)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::QWER::CTimer*))((::PBYTE)hIl2Cpp + QWER_CWHEELTIMERMGR__ADDTIMERINFO_OFFSET))(this, wLevel, poTimer);
		}
	};
}
