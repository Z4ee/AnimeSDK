#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define CINEMACHINE_TARGETPOSITIONCACHE_TIMERANGE_CONTAINS_OFFSET UNITYSDK_OFFSET(0x16214D0)
#define CINEMACHINE_TARGETPOSITIONCACHE_TIMERANGE_GET_EMPTY_OFFSET UNITYSDK_OFFSET(0x12BA8650)
#define CINEMACHINE_TARGETPOSITIONCACHE_TIMERANGE_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x16214C0)
#define CINEMACHINE_TARGETPOSITIONCACHE_TIMERANGE_INCLUDE_OFFSET UNITYSDK_OFFSET(0x16214F0)

namespace Cinemachine
{
	inline static constexpr unsigned int TargetPositionCache_TimeRange_TypeDefinitionIndex = 36614;

	struct alignas(4) TargetPositionCache_TimeRange
	{
		::System::Single Start; // 0x10
		::System::Single End; // 0x14

		::System::Boolean get_IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_TARGETPOSITIONCACHE_TIMERANGE_GET_ISEMPTY_OFFSET))(this);
		}

		::System::Boolean Contains(::System::Single time)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_TARGETPOSITIONCACHE_TIMERANGE_CONTAINS_OFFSET))(this, time);
		}

		static ::Cinemachine::TargetPositionCache_TimeRange get_Empty()
		{
			return ((::Cinemachine::TargetPositionCache_TimeRange(*)())((::PBYTE)hIl2Cpp + CINEMACHINE_TARGETPOSITIONCACHE_TIMERANGE_GET_EMPTY_OFFSET))();
		}

		::System::Void Include(::System::Single time)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_TARGETPOSITIONCACHE_TIMERANGE_INCLUDE_OFFSET))(this, time);
		}
	};
}
