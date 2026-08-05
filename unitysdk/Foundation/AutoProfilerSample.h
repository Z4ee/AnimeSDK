#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace UnityEngine { class Object; }

#define FOUNDATION_AUTOPROFILERSAMPLE_CREATE_OFFSET UNITYSDK_OFFSET(0x1D95B500)
#define FOUNDATION_AUTOPROFILERSAMPLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9B9380)

namespace Foundation
{
	inline static constexpr unsigned int AutoProfilerSample_TypeDefinitionIndex = 7992;

	struct alignas(1) AutoProfilerSample
	{
		static ::Foundation::AutoProfilerSample Create(::System::String* profilerName, ::UnityEngine::Object* targetObject)
		{
			return ((::Foundation::AutoProfilerSample(*)(::System::String*, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + FOUNDATION_AUTOPROFILERSAMPLE_CREATE_OFFSET))(profilerName, targetObject);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_AUTOPROFILERSAMPLE_DISPOSE_OFFSET))(this);
		}
	};
}
