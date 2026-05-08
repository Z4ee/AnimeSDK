#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace QWER { class CSkipListTimerMgr; }
namespace QWER { class CTimer; }
namespace QWER { class CWheelTimerMgr; }
namespace QWER { class DOnTimer; }

#define QWER_CTIMERMGR_GETNEXTPOLLTIME_OFFSET UNITYSDK_OFFSET(0x1C3E5D10)
#define QWER_CTIMERMGR_GET_CURTIME_OFFSET UNITYSDK_OFFSET(0x1C3E5530)
#define QWER_CTIMERMGR_POLL_OFFSET UNITYSDK_OFFSET(0x1C3E5610)
#define QWER_CTIMERMGR_STARTTIMER_1_OFFSET UNITYSDK_OFFSET(0x1C3E5BB0)
#define QWER_CTIMERMGR_STARTTIMER_2_OFFSET UNITYSDK_OFFSET(0x1C3E5AE0)
#define QWER_CTIMERMGR_STARTTIMER_OFFSET UNITYSDK_OFFSET(0x1C3E5A20)
#define QWER_CTIMERMGR__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3E5570)

namespace QWER
{
	inline static constexpr unsigned int CTimerMgr_TypeDefinitionIndex = 84244;

	class CTimerMgr : public ::System::Object
	{
	public:
		::QWER::CWheelTimerMgr* m_oWheelTimerMgr; // 0x10
		::QWER::CSkipListTimerMgr* m_oSkipListTimerMgr; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + QWER_CTIMERMGR__CTOR_OFFSET))(this);
		}

		::System::UInt64 get_CurTime()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + QWER_CTIMERMGR_GET_CURTIME_OFFSET))(this);
		}

		::System::Int32 Poll(::System::UInt64 qwDeltaMilliSeconds, ::System::Int32 dwMaxCount)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt64, ::System::Int32))((::PBYTE)hIl2Cpp + QWER_CTIMERMGR_POLL_OFFSET))(this, qwDeltaMilliSeconds, dwMaxCount);
		}

		::QWER::CTimer* StartTimer(::System::UInt64 dwMilliSeconds, ::QWER::DOnTimer* ronTimer, ::System::Boolean bAutoFix)
		{
			return ((::QWER::CTimer*(*)(::PVOID, ::System::UInt64, ::QWER::DOnTimer*, ::System::Boolean))((::PBYTE)hIl2Cpp + QWER_CTIMERMGR_STARTTIMER_OFFSET))(this, dwMilliSeconds, ronTimer, bAutoFix);
		}

		::QWER::CTimer* StartTimer_1(::System::UInt64 dwMilliSeconds, ::System::UInt32 dwCount, ::QWER::DOnTimer* ronTimer, ::System::Boolean bAutoFix)
		{
			return ((::QWER::CTimer*(*)(::PVOID, ::System::UInt64, ::System::UInt32, ::QWER::DOnTimer*, ::System::Boolean))((::PBYTE)hIl2Cpp + QWER_CTIMERMGR_STARTTIMER_1_OFFSET))(this, dwMilliSeconds, dwCount, ronTimer, bAutoFix);
		}

		::QWER::CTimer* StartTimer_2(::System::UInt64 dwMilliSeconds, ::System::UInt32 dwCount, ::System::UInt64 dwFirstTimeoutMilliSeconds, ::QWER::DOnTimer* ronTimer, ::System::Boolean bAutoFix)
		{
			return ((::QWER::CTimer*(*)(::PVOID, ::System::UInt64, ::System::UInt32, ::System::UInt64, ::QWER::DOnTimer*, ::System::Boolean))((::PBYTE)hIl2Cpp + QWER_CTIMERMGR_STARTTIMER_2_OFFSET))(this, dwMilliSeconds, dwCount, dwFirstTimeoutMilliSeconds, ronTimer, bAutoFix);
		}

		::System::UInt64 GetNextPollTime()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + QWER_CTIMERMGR_GETNEXTPOLLTIME_OFFSET))(this);
		}
	};
}
