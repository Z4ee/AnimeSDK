#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Object.h"

namespace BinaryTracingCore::Source::TracingTools { class LogBlock; }
namespace BinaryTracingCore::Source::TracingTools { class LogChannel; }
namespace BinaryTracingCore::Source::TracingTools { class LogMeta; }
namespace BinaryTracingCore::Source::TracingTools { class LogMetaContainer; }
namespace BinaryTracingCore::Source::TracingTools { class LogUnit; }
namespace BinaryTracingFramework::Serialize { class WriteLinker; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Diagnostics { class Stopwatch; }
namespace System::IO { class Stream; }

#define BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_TRACINGSYSTEM_DEFINELOGCHANNEL_OFFSET UNITYSDK_OFFSET(0x1E22F640)
#define BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_TRACINGSYSTEM_FLUSHWRITE_OFFSET UNITYSDK_OFFSET(0x1E22F4E0)
#define BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_TRACINGSYSTEM_GETFRAMECOUNT_OFFSET UNITYSDK_OFFSET(0x1E22F050)
#define BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_TRACINGSYSTEM_GETTIME_OFFSET UNITYSDK_OFFSET(0x1E22F060)
#define BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_TRACINGSYSTEM_INIT_OFFSET UNITYSDK_OFFSET(0x1E22EC80)
#define BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_TRACINGSYSTEM_PUSHCURBLOCK_OFFSET UNITYSDK_OFFSET(0x1E22F810)
#define BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_TRACINGSYSTEM_REGISTERLOGMETA_OFFSET UNITYSDK_OFFSET(0x1E22E7D0)
#define BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_TRACINGSYSTEM_REGISTERTRACINGSYSTEM_OFFSET UNITYSDK_OFFSET(0x1E22EC40)
#define BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_TRACINGSYSTEM_TRYGETMETA_OFFSET UNITYSDK_OFFSET(0x1E22E700)
#define BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_TRACINGSYSTEM_UPDATEBLOCK_OFFSET UNITYSDK_OFFSET(0x1E22EFB0)
#define BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_TRACINGSYSTEM_UPDATESATE_OFFSET UNITYSDK_OFFSET(0x1E22F130)
#define BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_TRACINGSYSTEM_UPDATE_OFFSET UNITYSDK_OFFSET(0x1E22F100)
#define BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_TRACINGSYSTEM_WRITELOG_OFFSET UNITYSDK_OFFSET(0x1E22C7A0)
#define BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_TRACINGSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1E22FA00)

namespace BinaryTracingCore::Source::TracingTools
{
	inline static constexpr unsigned int TracingSystem_TypeDefinitionIndex = 33964;

	class TracingSystem : public ::System::Object
	{
	public:
		// static const ::System::String* TracingCondition; // 0x0
		::BinaryTracingCore::Source::TracingTools::LogBlock* _curLogBlock; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Guid, ::BinaryTracingCore::Source::TracingTools::LogChannel*>* Channels; // 0x18
		::BinaryTracingFramework::Serialize::WriteLinker* Linker; // 0x20
		::System::Diagnostics::Stopwatch* TimeStopwatch; // 0x28
		::BinaryTracingCore::Source::TracingTools::LogMetaContainer* MetaContainer; // 0x30
		::System::Int64 FrameCount; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_TRACINGSYSTEM__CTOR_OFFSET))(this);
		}

		static ::System::Void RegisterTracingSystem()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_TRACINGSYSTEM_REGISTERTRACINGSYSTEM_OFFSET))();
		}

		::System::Void Init(::System::IO::Stream* stream)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_TRACINGSYSTEM_INIT_OFFSET))(this, stream);
		}

		::System::Int64 GetFrameCount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_TRACINGSYSTEM_GETFRAMECOUNT_OFFSET))(this);
		}

		::System::Int64 GetTime()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_TRACINGSYSTEM_GETTIME_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_TRACINGSYSTEM_UPDATE_OFFSET))(this);
		}

		::System::Void FlushWrite()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_TRACINGSYSTEM_FLUSHWRITE_OFFSET))(this);
		}

		::System::Void UpdateSate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_TRACINGSYSTEM_UPDATESATE_OFFSET))(this);
		}

		::System::Void RegisterLogMeta(::BinaryTracingCore::Source::TracingTools::LogMeta* meta)
		{
			return ((::System::Void(*)(::PVOID, ::BinaryTracingCore::Source::TracingTools::LogMeta*))((::PBYTE)hIl2Cpp + BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_TRACINGSYSTEM_REGISTERLOGMETA_OFFSET))(this, meta);
		}

		::System::Boolean TryGetMeta(::System::String* metaName, ::BinaryTracingCore::Source::TracingTools::LogMeta*& meta)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::BinaryTracingCore::Source::TracingTools::LogMeta*&))((::PBYTE)hIl2Cpp + BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_TRACINGSYSTEM_TRYGETMETA_OFFSET))(this, metaName, meta);
		}

		::BinaryTracingCore::Source::TracingTools::LogChannel* DefineLogChannel(::System::String* channelKey)
		{
			return ((::BinaryTracingCore::Source::TracingTools::LogChannel*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_TRACINGSYSTEM_DEFINELOGCHANNEL_OFFSET))(this, channelKey);
		}

		::System::Void WriteLog(::BinaryTracingCore::Source::TracingTools::LogUnit* unit)
		{
			return ((::System::Void(*)(::PVOID, ::BinaryTracingCore::Source::TracingTools::LogUnit*))((::PBYTE)hIl2Cpp + BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_TRACINGSYSTEM_WRITELOG_OFFSET))(this, unit);
		}

		::System::Void UpdateBlock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_TRACINGSYSTEM_UPDATEBLOCK_OFFSET))(this);
		}

		::System::Void PushCurBlock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_TRACINGSYSTEM_PUSHCURBLOCK_OFFSET))(this);
		}
	};
}
