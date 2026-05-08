#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define FOUNDATION_TICKCONTEXT_GET_TICKINGTIME_OFFSET UNITYSDK_OFFSET(0x73D0E0)
#define FOUNDATION_TICKCONTEXT_GET_TIME_OFFSET UNITYSDK_OFFSET(0x3B0F30)
#define FOUNDATION_TICKCONTEXT_PASS_OFFSET UNITYSDK_OFFSET(0x1BE2C520)
#define FOUNDATION_TICKCONTEXT_SET_TICKINGTIME_OFFSET UNITYSDK_OFFSET(0x9B5770)
#define FOUNDATION_TICKCONTEXT_SET_TIME_OFFSET UNITYSDK_OFFSET(0x9B5750)

namespace Foundation
{
	inline static constexpr unsigned int TickContext_TypeDefinitionIndex = 9120;

	struct alignas(8) TickContext
	{
		::System::Single DeltaTime; // 0x10
		::System::Int32 TickGroup; // 0x14
		::System::Double _time; // 0x18
		::System::Int64 _timeHash; // 0x20
		::System::Double _tickingTime; // 0x28
		::System::Int64 _tickingTimeHash; // 0x30

		::System::Double get_Time()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_TICKCONTEXT_GET_TIME_OFFSET))(this);
		}

		::System::Void set_Time(::System::Double value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + FOUNDATION_TICKCONTEXT_SET_TIME_OFFSET))(this, value);
		}

		::System::Double get_TickingTime()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_TICKCONTEXT_GET_TICKINGTIME_OFFSET))(this);
		}

		::System::Void set_TickingTime(::System::Double value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + FOUNDATION_TICKCONTEXT_SET_TICKINGTIME_OFFSET))(this, value);
		}

		/*
		static ::System::Boolean Pass(::Foundation::TickContext& context, ::System::Int32 tickingGroup, ::Foundation::TickTime time)
		{
			return ((::System::Boolean(*)(::Foundation::TickContext&, ::System::Int32, ::Foundation::TickTime))((::PBYTE)hIl2Cpp + FOUNDATION_TICKCONTEXT_PASS_OFFSET))(context, tickingGroup, time);
		}
		*/
	};
}
