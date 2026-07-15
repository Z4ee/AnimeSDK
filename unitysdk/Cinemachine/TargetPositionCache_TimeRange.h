#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define CINEMACHINE_TARGETPOSITIONCACHE_TIMERANGE_CONTAINS_OFFSET UNITYSDK_OFFSET(0x38EB160)
#define CINEMACHINE_TARGETPOSITIONCACHE_TIMERANGE_GET_EMPTY_OFFSET UNITYSDK_OFFSET(0x1D2160C0)
#define CINEMACHINE_TARGETPOSITIONCACHE_TIMERANGE_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x3AF81A0)
#define CINEMACHINE_TARGETPOSITIONCACHE_TIMERANGE_INCLUDE_OFFSET UNITYSDK_OFFSET(0x3AF81B0)

namespace Cinemachine
{
	inline static constexpr unsigned int TargetPositionCache_TimeRange_TypeDefinitionIndex = 37696;

	struct alignas(4) TargetPositionCache_TimeRange
	{
		::System::Single Start; // 0x10
		::System::Single End; // 0x14

		::System::Boolean get_IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_TARGETPOSITIONCACHE_TIMERANGE_GET_ISEMPTY_OFFSET))(this);
		}

		::System::Boolean Contains(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_TARGETPOSITIONCACHE_TIMERANGE_CONTAINS_OFFSET))(this, a1);
		}

		static ::Cinemachine::TargetPositionCache_TimeRange get_Empty()
		{
			return ((::Cinemachine::TargetPositionCache_TimeRange(*)())((::PBYTE)hIl2Cpp + CINEMACHINE_TARGETPOSITIONCACHE_TIMERANGE_GET_EMPTY_OFFSET))();
		}

		::System::Void Include(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_TARGETPOSITIONCACHE_TIMERANGE_INCLUDE_OFFSET))(this, a1);
		}
	};
}
