#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/TimeSpan.h"

#define FOUNDATION_TIMESPANX_GETFORTNIGHTS_OFFSET UNITYSDK_OFFSET(0x1DE3C8B0)
#define FOUNDATION_TIMESPANX_GETWEEKS_OFFSET UNITYSDK_OFFSET(0x1DE3C830)
#define FOUNDATION_TIMESPANX_MINUTESTOTIMESPAN_OFFSET UNITYSDK_OFFSET(0x1DE3C9B0)
#define FOUNDATION_TIMESPANX_SECONDSTOTIMESPAN_OFFSET UNITYSDK_OFFSET(0x1DE3C960)

namespace Foundation
{
	inline static constexpr unsigned int TimeSpanX_TypeDefinitionIndex = 8286;

	class TimeSpanX : public ::System::Object
	{
	public:
		static ::System::Int32 GetWeeks(::System::TimeSpan span)
		{
			return ((::System::Int32(*)(::System::TimeSpan))((::PBYTE)hIl2Cpp + FOUNDATION_TIMESPANX_GETWEEKS_OFFSET))(span);
		}

		static ::System::Int32 GetFortnights(::System::TimeSpan span)
		{
			return ((::System::Int32(*)(::System::TimeSpan))((::PBYTE)hIl2Cpp + FOUNDATION_TIMESPANX_GETFORTNIGHTS_OFFSET))(span);
		}

		static ::System::TimeSpan SecondsToTimeSpan(::System::Int32 seconds)
		{
			return ((::System::TimeSpan(*)(::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_TIMESPANX_SECONDSTOTIMESPAN_OFFSET))(seconds);
		}

		static ::System::TimeSpan MinutesToTimeSpan(::System::Int32 minutes)
		{
			return ((::System::TimeSpan(*)(::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_TIMESPANX_MINUTESTOTIMESPAN_OFFSET))(minutes);
		}
	};
}
