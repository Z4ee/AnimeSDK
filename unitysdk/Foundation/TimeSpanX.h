#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/TimeSpan.h"

#define FOUNDATION_TIMESPANX_GETFORTNIGHTS_OFFSET UNITYSDK_OFFSET(0x1F021A50)
#define FOUNDATION_TIMESPANX_GETWEEKS_OFFSET UNITYSDK_OFFSET(0x1F0219D0)
#define FOUNDATION_TIMESPANX_MINUTESTOTIMESPAN_OFFSET UNITYSDK_OFFSET(0x1F021B50)
#define FOUNDATION_TIMESPANX_SECONDSTOTIMESPAN_OFFSET UNITYSDK_OFFSET(0x1F021B00)

namespace Foundation
{
	inline static constexpr unsigned int TimeSpanX_TypeDefinitionIndex = 8127;

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
