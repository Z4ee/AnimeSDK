#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BinaryTracingCore/Source/TracingTools/LogChannel_LogUnitProxy.h"
#include "unitysdk/System/Object.h"

namespace BinaryTracingCore::Source::TracingTools { class LogMetaHandle; }
namespace BinaryTracingCore::Source::TracingTools { class TracingSystem; }
namespace System { class String; }

#define BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGCHANNEL_BEGINLOG_OFFSET UNITYSDK_OFFSET(0x1F6504E0)
#define BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGCHANNEL_GET_CHANNELMETA_OFFSET UNITYSDK_OFFSET(0x1F650490)
#define BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGCHANNEL_GET_SYSTEM_OFFSET UNITYSDK_OFFSET(0x1F6504B0)
#define BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGCHANNEL_SET_CHANNELMETA_OFFSET UNITYSDK_OFFSET(0x1F6504A0)
#define BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGCHANNEL_SET_SYSTEM_OFFSET UNITYSDK_OFFSET(0x1F6504C0)
#define BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGCHANNEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1F6504D0)

namespace BinaryTracingCore::Source::TracingTools
{
	inline static constexpr unsigned int LogChannel_TypeDefinitionIndex = 34583;

	class LogChannel : public ::System::Object
	{
	public:
		::BinaryTracingCore::Source::TracingTools::LogMetaHandle* _ChannelMeta_k__BackingField; // 0x10
		::BinaryTracingCore::Source::TracingTools::TracingSystem* _System_k__BackingField; // 0x18

		::System::Void _ctor(::BinaryTracingCore::Source::TracingTools::TracingSystem* system, ::BinaryTracingCore::Source::TracingTools::LogMetaHandle* metaHandle)
		{
			return ((::System::Void(*)(::PVOID, ::BinaryTracingCore::Source::TracingTools::TracingSystem*, ::BinaryTracingCore::Source::TracingTools::LogMetaHandle*))((::PBYTE)hIl2Cpp + BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGCHANNEL__CTOR_OFFSET))(this, system, metaHandle);
		}

		::BinaryTracingCore::Source::TracingTools::LogMetaHandle* get_ChannelMeta()
		{
			return ((::BinaryTracingCore::Source::TracingTools::LogMetaHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGCHANNEL_GET_CHANNELMETA_OFFSET))(this);
		}

		::System::Void set_ChannelMeta(::BinaryTracingCore::Source::TracingTools::LogMetaHandle* value)
		{
			return ((::System::Void(*)(::PVOID, ::BinaryTracingCore::Source::TracingTools::LogMetaHandle*))((::PBYTE)hIl2Cpp + BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGCHANNEL_SET_CHANNELMETA_OFFSET))(this, value);
		}

		::BinaryTracingCore::Source::TracingTools::TracingSystem* get_System()
		{
			return ((::BinaryTracingCore::Source::TracingTools::TracingSystem*(*)(::PVOID))((::PBYTE)hIl2Cpp + BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGCHANNEL_GET_SYSTEM_OFFSET))(this);
		}

		::System::Void set_System(::BinaryTracingCore::Source::TracingTools::TracingSystem* value)
		{
			return ((::System::Void(*)(::PVOID, ::BinaryTracingCore::Source::TracingTools::TracingSystem*))((::PBYTE)hIl2Cpp + BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGCHANNEL_SET_SYSTEM_OFFSET))(this, value);
		}

		::BinaryTracingCore::Source::TracingTools::LogChannel_LogUnitProxy BeginLog(::System::String* archeTypeName, ::System::Int32 tag)
		{
			return ((::BinaryTracingCore::Source::TracingTools::LogChannel_LogUnitProxy(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGCHANNEL_BEGINLOG_OFFSET))(this, archeTypeName, tag);
		}
	};
}
