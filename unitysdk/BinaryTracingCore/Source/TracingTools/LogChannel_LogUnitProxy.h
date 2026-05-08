#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace BinaryTracingCore::Source::TracingTools { class LogChannel; }
namespace BinaryTracingCore::Source::TracingTools { class LogUnit; }
namespace System { class String; }

#define BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGCHANNEL_LOGUNITPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9BB040)
#define BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGCHANNEL_LOGUNITPROXY_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x2E7930)
#define BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGCHANNEL_LOGUNITPROXY_INITUNIT_OFFSET UNITYSDK_OFFSET(0x9BB030)
#define BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGCHANNEL_LOGUNITPROXY_LOG_1_OFFSET UNITYSDK_OFFSET(0x9BB140)
#define BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGCHANNEL_LOGUNITPROXY_LOG_2_OFFSET UNITYSDK_OFFSET(0x9BB1D0)
#define BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGCHANNEL_LOGUNITPROXY_LOG_3_OFFSET UNITYSDK_OFFSET(0x9BB250)
#define BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGCHANNEL_LOGUNITPROXY_LOG_OFFSET UNITYSDK_OFFSET(0x9BB0C0)
#define BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGCHANNEL_LOGUNITPROXY_SET_ISVALID_OFFSET UNITYSDK_OFFSET(0x2E7740)

namespace BinaryTracingCore::Source::TracingTools
{
	inline static constexpr unsigned int LogChannel_LogUnitProxy_TypeDefinitionIndex = 32397;

	struct alignas(8) LogChannel_LogUnitProxy
	{
		::System::Boolean _IsValid_k__BackingField; // 0x10
		::BinaryTracingCore::Source::TracingTools::LogUnit* Unit; // 0x18
		::BinaryTracingCore::Source::TracingTools::LogChannel* Channel; // 0x20

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGCHANNEL_LOGUNITPROXY_GET_ISVALID_OFFSET))(this);
		}

		::System::Void set_IsValid(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGCHANNEL_LOGUNITPROXY_SET_ISVALID_OFFSET))(this, value);
		}

		::System::Void InitUnit(::BinaryTracingCore::Source::TracingTools::LogChannel* channel, ::System::String* archeTypeName, ::System::Int32 Tag)
		{
			return ((::System::Void(*)(::PVOID, ::BinaryTracingCore::Source::TracingTools::LogChannel*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGCHANNEL_LOGUNITPROXY_INITUNIT_OFFSET))(this, channel, archeTypeName, Tag);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGCHANNEL_LOGUNITPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void Log(::System::String* propertyKey, ::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGCHANNEL_LOGUNITPROXY_LOG_OFFSET))(this, propertyKey, value);
		}

		::System::Void Log_1(::System::String* propertyKey, ::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGCHANNEL_LOGUNITPROXY_LOG_1_OFFSET))(this, propertyKey, value);
		}

		::System::Void Log_2(::System::String* propertyKey, ::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGCHANNEL_LOGUNITPROXY_LOG_2_OFFSET))(this, propertyKey, value);
		}

		::System::Void Log_3(::System::String* propertyKey, ::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGCHANNEL_LOGUNITPROXY_LOG_3_OFFSET))(this, propertyKey, value);
		}
	};
}
