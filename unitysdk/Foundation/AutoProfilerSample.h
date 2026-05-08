#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define FOUNDATION_AUTOPROFILERSAMPLE_CREATE_OFFSET UNITYSDK_OFFSET(0x19FF9540)
#define FOUNDATION_AUTOPROFILERSAMPLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8B5CF0)

namespace Foundation
{
	inline static constexpr unsigned int AutoProfilerSample_TypeDefinitionIndex = 7810;

	struct alignas(1) AutoProfilerSample
	{
		static ::Foundation::AutoProfilerSample Create(::System::String* profilerName)
		{
			return ((::Foundation::AutoProfilerSample(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_AUTOPROFILERSAMPLE_CREATE_OFFSET))(profilerName);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_AUTOPROFILERSAMPLE_DISPOSE_OFFSET))(this);
		}
	};
}
