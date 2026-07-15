#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/TimeVal.h"
#include "unitysdk/System/ValueType.h"

namespace RPGTools
{
	inline static constexpr unsigned int RUsage_TypeDefinitionIndex = 45154;

	struct alignas(8) RUsage
	{
		::RPGTools::TimeVal ru_utime; // 0x10
		::RPGTools::TimeVal ru_stime; // 0x20
		::System::Int64 ru_maxrss; // 0x30
		::System::Int64 ru_ixrss; // 0x38
		::System::Int64 ru_idrss; // 0x40
		::System::Int64 ru_isrss; // 0x48
		::System::Int64 ru_minflt; // 0x50
		::System::Int64 ru_majflt; // 0x58
		::System::Int64 ru_nswap; // 0x60
		::System::Int64 ru_inblock; // 0x68
		::System::Int64 ru_oublock; // 0x70
		::System::Int64 ru_msgsnd; // 0x78
		::System::Int64 ru_msgrcv; // 0x80
		::System::Int64 ru_nsignals; // 0x88
		::System::Int64 ru_nvcsw; // 0x90
		::System::Int64 ru_nivcsw; // 0x98
	};
}
