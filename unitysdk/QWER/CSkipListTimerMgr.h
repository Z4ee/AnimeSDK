#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace QWER { class CTimer; }
namespace QWER { class CTimerMgr; }
namespace QWER { class DOnTimer; }
namespace QWER { template <typename T1, typename T2> class CSkipList_2; }
namespace System::Collections::Generic { template <typename T> class LinkedListNode_1; }
namespace System::Collections::Generic { template <typename T> class LinkedList_1; }

#define QWER_CSKIPLISTTIMERMGR_GETNEXTPOLLTIME_OFFSET UNITYSDK_OFFSET(0x1C3E53E0)
#define QWER_CSKIPLISTTIMERMGR_GET_CURTIME_OFFSET UNITYSDK_OFFSET(0x1C3E4860)
#define QWER_CSKIPLISTTIMERMGR_GET_TIMESCALE_OFFSET UNITYSDK_OFFSET(0x1C3E4880)
#define QWER_CSKIPLISTTIMERMGR_POLL_OFFSET UNITYSDK_OFFSET(0x1C3E4900)
#define QWER_CSKIPLISTTIMERMGR_SET_CURTIME_OFFSET UNITYSDK_OFFSET(0x1C3E4870)
#define QWER_CSKIPLISTTIMERMGR_STARTTIMER_OFFSET UNITYSDK_OFFSET(0x1C3E4BF0)
#define QWER_CSKIPLISTTIMERMGR__ADDTIMER_1_OFFSET UNITYSDK_OFFSET(0x1C3E5280)
#define QWER_CSKIPLISTTIMERMGR__ADDTIMER_OFFSET UNITYSDK_OFFSET(0x1C3E4CF0)
#define QWER_CSKIPLISTTIMERMGR__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3E4890)
#define QWER_CSKIPLISTTIMERMGR__EXECTIMER_OFFSET UNITYSDK_OFFSET(0x1C3E49A0)

namespace QWER
{
	inline static constexpr unsigned int CSkipListTimerMgr_TypeDefinitionIndex = 84242;

	class CSkipListTimerMgr : public ::System::Object
	{
	public:
		::QWER::CTimerMgr* m_oTimerMgr; // 0x10
		::QWER::CSkipList_2<::System::UInt64, ::System::Collections::Generic::LinkedList_1<::QWER::CTimer*>*>* m_oTimers; // 0x18
		::System::Double _TimeScale_k__BackingField; // 0x20
		::System::Double m_dDeltaTime; // 0x28
		::System::UInt64 _CurTime_k__BackingField; // 0x30

		::System::Void _ctor(::QWER::CTimerMgr* oTimerMgr)
		{
			return ((::System::Void(*)(::PVOID, ::QWER::CTimerMgr*))((::PBYTE)hIl2Cpp + QWER_CSKIPLISTTIMERMGR__CTOR_OFFSET))(this, oTimerMgr);
		}

		::System::UInt64 get_CurTime()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + QWER_CSKIPLISTTIMERMGR_GET_CURTIME_OFFSET))(this);
		}

		::System::Void set_CurTime(::System::UInt64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + QWER_CSKIPLISTTIMERMGR_SET_CURTIME_OFFSET))(this, value);
		}

		::System::Double get_TimeScale()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + QWER_CSKIPLISTTIMERMGR_GET_TIMESCALE_OFFSET))(this);
		}

		::System::Int32 Poll(::System::UInt64 qwDeltaMilliSeconds, ::System::Int32 dwMaxCount)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt64, ::System::Int32))((::PBYTE)hIl2Cpp + QWER_CSKIPLISTTIMERMGR_POLL_OFFSET))(this, qwDeltaMilliSeconds, dwMaxCount);
		}

		::QWER::CTimer* StartTimer(::System::UInt64 dwMilliSeconds, ::System::UInt32 dwCount, ::System::UInt64 dwFirstTimeoutMilliSeconds, ::QWER::DOnTimer* ronTimer, ::System::Boolean bAutoFix)
		{
			return ((::QWER::CTimer*(*)(::PVOID, ::System::UInt64, ::System::UInt32, ::System::UInt64, ::QWER::DOnTimer*, ::System::Boolean))((::PBYTE)hIl2Cpp + QWER_CSKIPLISTTIMERMGR_STARTTIMER_OFFSET))(this, dwMilliSeconds, dwCount, dwFirstTimeoutMilliSeconds, ronTimer, bAutoFix);
		}

		::System::Int32 _ExecTimer(::System::Int32 dwMaxCount)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + QWER_CSKIPLISTTIMERMGR__EXECTIMER_OFFSET))(this, dwMaxCount);
		}

		::System::Void _AddTimer(::QWER::CTimer* poTimer)
		{
			return ((::System::Void(*)(::PVOID, ::QWER::CTimer*))((::PBYTE)hIl2Cpp + QWER_CSKIPLISTTIMERMGR__ADDTIMER_OFFSET))(this, poTimer);
		}

		::System::Void _AddTimer_1(::System::Collections::Generic::LinkedListNode_1<::QWER::CTimer*>* oNode)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::LinkedListNode_1<::QWER::CTimer*>*))((::PBYTE)hIl2Cpp + QWER_CSKIPLISTTIMERMGR__ADDTIMER_1_OFFSET))(this, oNode);
		}

		::System::UInt64 GetNextPollTime()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + QWER_CSKIPLISTTIMERMGR_GETNEXTPOLLTIME_OFFSET))(this);
		}
	};
}
