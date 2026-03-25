#pragma once
#include "unitysdk/unitysdk.h"

namespace Microsoft::Win32
{
	inline static constexpr unsigned int UnsafeNativeMethods_ManifestEtw_TRACE_QUERY_INFO_CLASS_TypeDefinitionIndex = 97;

	enum class UnsafeNativeMethods_ManifestEtw_TRACE_QUERY_INFO_CLASS : ::System::Int32
	{
		TraceGuidQueryList = 0,
		TraceGuidQueryInfo = 1,
		TraceGuidQueryProcess = 2,
		TraceStackTracingInfo = 3,
		MaxTraceSetInfoClass = 4,
	};
}
