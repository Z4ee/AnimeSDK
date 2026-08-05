#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGCHANNEL_LOGUNITPROXYEMPTY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x296F30)
#define BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGCHANNEL_LOGUNITPROXYEMPTY_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x3CADC0)
#define BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGCHANNEL_LOGUNITPROXYEMPTY_LOG_1_OFFSET UNITYSDK_OFFSET(0x296F30)
#define BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGCHANNEL_LOGUNITPROXYEMPTY_LOG_2_OFFSET UNITYSDK_OFFSET(0x296F30)
#define BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGCHANNEL_LOGUNITPROXYEMPTY_LOG_3_OFFSET UNITYSDK_OFFSET(0x296F30)
#define BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGCHANNEL_LOGUNITPROXYEMPTY_LOG_OFFSET UNITYSDK_OFFSET(0x296F30)

namespace BinaryTracingCore::Source::TracingTools
{
	inline static constexpr unsigned int LogChannel_LogUnitProxyEmpty_TypeDefinitionIndex = 34585;

	struct alignas(1) LogChannel_LogUnitProxyEmpty
	{
		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGCHANNEL_LOGUNITPROXYEMPTY_GET_ISVALID_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGCHANNEL_LOGUNITPROXYEMPTY_DISPOSE_OFFSET))(this);
		}

		::System::Void Log(::System::String* propertyKey, ::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGCHANNEL_LOGUNITPROXYEMPTY_LOG_OFFSET))(this, propertyKey, value);
		}

		::System::Void Log_1(::System::String* propertyKey, ::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGCHANNEL_LOGUNITPROXYEMPTY_LOG_1_OFFSET))(this, propertyKey, value);
		}

		::System::Void Log_2(::System::String* propertyKey, ::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGCHANNEL_LOGUNITPROXYEMPTY_LOG_2_OFFSET))(this, propertyKey, value);
		}

		::System::Void Log_3(::System::String* propertyKey, ::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGCHANNEL_LOGUNITPROXYEMPTY_LOG_3_OFFSET))(this, propertyKey, value);
		}
	};
}
