#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/ECullReason.h"
#include "unitysdk/NPCCrowd/EDynamicUnloadPriority.h"
#include "unitysdk/NPCCrowd/NPCRegistryEntry.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::IO { class StreamWriter; }
namespace System::Text { class StringBuilder; }

#define NPCCROWD_NPCCULLEVENTLOGGER_APPENDDISTANCE_OFFSET UNITYSDK_OFFSET(0x9545AC0)
#define NPCCROWD_NPCCULLEVENTLOGGER_APPENDFARTHESTDISTANCE_OFFSET UNITYSDK_OFFSET(0x95466F0)
#define NPCCROWD_NPCCULLEVENTLOGGER_APPENDHEADER_OFFSET UNITYSDK_OFFSET(0x95457C0)
#define NPCCROWD_NPCCULLEVENTLOGGER_CLOSEWRITER_OFFSET UNITYSDK_OFFSET(0x9544F10)
#define NPCCROWD_NPCCULLEVENTLOGGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9546920)
#define NPCCROWD_NPCCULLEVENTLOGGER_ENSUREWRITER_OFFSET UNITYSDK_OFFSET(0x9544BE0)
#define NPCCROWD_NPCCULLEVENTLOGGER_FLUSH_OFFSET UNITYSDK_OFFSET(0x9546810)
#define NPCCROWD_NPCCULLEVENTLOGGER_GETLOGDIR_OFFSET UNITYSDK_OFFSET(0x95468A0)
#define NPCCROWD_NPCCULLEVENTLOGGER_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x9544A70)
#define NPCCROWD_NPCCULLEVENTLOGGER_GET_FILEPATH_OFFSET UNITYSDK_OFFSET(0x9544A80)
#define NPCCROWD_NPCCULLEVENTLOGGER_LOGCROWDCULL_OFFSET UNITYSDK_OFFSET(0x9546380)
#define NPCCROWD_NPCCULLEVENTLOGGER_LOGSERVERNPCCULL_OFFSET UNITYSDK_OFFSET(0x9545000)
#define NPCCROWD_NPCCULLEVENTLOGGER_LOGSERVERNPCRESTORE_OFFSET UNITYSDK_OFFSET(0x9545CA0)
#define NPCCROWD_NPCCULLEVENTLOGGER_PRIORITYTOCHINESE_OFFSET UNITYSDK_OFFSET(0x9545A20)
#define NPCCROWD_NPCCULLEVENTLOGGER_REASONTOCHINESE_OFFSET UNITYSDK_OFFSET(0x9545970)
#define NPCCROWD_NPCCULLEVENTLOGGER_SETENABLED_OFFSET UNITYSDK_OFFSET(0x9544A90)
#define NPCCROWD_NPCCULLEVENTLOGGER_WRITELINE_OFFSET UNITYSDK_OFFSET(0x9545BE0)
#define NPCCROWD_NPCCULLEVENTLOGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x9546A30)

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCCullEventLogger_TypeDefinitionIndex = 61948;

	class NPCCullEventLogger : public ::System::Object
	{
	public:
		// static const ::System::Int32 MAX_WRITE_FAILURES = 0x3; // 0x0
		::System::String* _filePath; // 0x10
		::System::IO::StreamWriter* _writer; // 0x18
		::System::Text::StringBuilder* _sb; // 0x20
		::System::Int32 _writeFailureCount; // 0x28
		::System::Boolean _enabled; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCULLEVENTLOGGER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_Enabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCULLEVENTLOGGER_GET_ENABLED_OFFSET))(this);
		}

		::System::String* get_FilePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCULLEVENTLOGGER_GET_FILEPATH_OFFSET))(this);
		}

		::System::Void SetEnabled(::System::Boolean enabled)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCULLEVENTLOGGER_SETENABLED_OFFSET))(this, enabled);
		}

		::System::Void LogServerNPCCull(::NPCCrowd::ECullReason reason, ::NPCCrowd::NPCRegistryEntry entry, ::System::Single distToPlayer, ::System::Single score, ::System::Single threshold, ::NPCCrowd::EDynamicUnloadPriority preemptRequestPriority)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::ECullReason, ::NPCCrowd::NPCRegistryEntry, ::System::Single, ::System::Single, ::System::Single, ::NPCCrowd::EDynamicUnloadPriority))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCULLEVENTLOGGER_LOGSERVERNPCCULL_OFFSET))(this, reason, entry, distToPlayer, score, threshold, preemptRequestPriority);
		}

		::System::Void LogServerNPCRestore(::NPCCrowd::NPCRegistryEntry entry, ::System::Single distToPlayer, ::System::Single score, ::System::Single threshold, ::System::Single backStageDuration)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::NPCRegistryEntry, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCULLEVENTLOGGER_LOGSERVERNPCRESTORE_OFFSET))(this, entry, distToPlayer, score, threshold, backStageDuration);
		}

		::System::Void LogCrowdCull(::System::Int32 culledCount, ::System::Single farthestDist, ::System::Int32 currentCount, ::System::Int32 effectiveLimit)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCULLEVENTLOGGER_LOGCROWDCULL_OFFSET))(this, culledCount, farthestDist, currentCount, effectiveLimit);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCULLEVENTLOGGER_FLUSH_OFFSET))(this);
		}

		::System::String* GetLogDir()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCULLEVENTLOGGER_GETLOGDIR_OFFSET))(this);
		}

		::System::Void EnsureWriter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCULLEVENTLOGGER_ENSUREWRITER_OFFSET))(this);
		}

		::System::Void CloseWriter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCULLEVENTLOGGER_CLOSEWRITER_OFFSET))(this);
		}

		::System::Void WriteLine(::System::String* line)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCULLEVENTLOGGER_WRITELINE_OFFSET))(this, line);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCULLEVENTLOGGER_DISPOSE_OFFSET))(this);
		}

		static ::System::Void AppendHeader(::System::Text::StringBuilder* sb)
		{
			return ((::System::Void(*)(::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCULLEVENTLOGGER_APPENDHEADER_OFFSET))(sb);
		}

		static ::System::Void AppendDistance(::System::Text::StringBuilder* sb, ::System::Single dist)
		{
			return ((::System::Void(*)(::System::Text::StringBuilder*, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCULLEVENTLOGGER_APPENDDISTANCE_OFFSET))(sb, dist);
		}

		static ::System::Void AppendFarthestDistance(::System::Text::StringBuilder* sb, ::System::Single dist)
		{
			return ((::System::Void(*)(::System::Text::StringBuilder*, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCULLEVENTLOGGER_APPENDFARTHESTDISTANCE_OFFSET))(sb, dist);
		}

		static ::System::String* ReasonToChinese(::NPCCrowd::ECullReason reason)
		{
			return ((::System::String*(*)(::NPCCrowd::ECullReason))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCULLEVENTLOGGER_REASONTOCHINESE_OFFSET))(reason);
		}

		static ::System::String* PriorityToChinese(::NPCCrowd::EDynamicUnloadPriority priority)
		{
			return ((::System::String*(*)(::NPCCrowd::EDynamicUnloadPriority))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCULLEVENTLOGGER_PRIORITYTOCHINESE_OFFSET))(priority);
		}
	};
}
