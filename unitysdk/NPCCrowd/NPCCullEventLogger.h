#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/ECullReason.h"
#include "unitysdk/NPCCrowd/EDynamicUnloadPriority.h"
#include "unitysdk/NPCCrowd/NPCRegistryEntry.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::IO { class StreamWriter; }
namespace System::Text { class StringBuilder; }

#define NPCCROWD_NPCCULLEVENTLOGGER_APPENDDISTANCE_OFFSET UNITYSDK_OFFSET(0xFDF4330)
#define NPCCROWD_NPCCULLEVENTLOGGER_APPENDFARTHESTDISTANCE_OFFSET UNITYSDK_OFFSET(0xFDF4ED0)
#define NPCCROWD_NPCCULLEVENTLOGGER_APPENDHEADER_OFFSET UNITYSDK_OFFSET(0xFDF4020)
#define NPCCROWD_NPCCULLEVENTLOGGER_CLOSEWRITER_OFFSET UNITYSDK_OFFSET(0xFDF37F0)
#define NPCCROWD_NPCCULLEVENTLOGGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xFDF5100)
#define NPCCROWD_NPCCULLEVENTLOGGER_ENSUREWRITER_OFFSET UNITYSDK_OFFSET(0xFDF34C0)
#define NPCCROWD_NPCCULLEVENTLOGGER_FLUSH_OFFSET UNITYSDK_OFFSET(0xFDF4FF0)
#define NPCCROWD_NPCCULLEVENTLOGGER_GETLOGDIR_OFFSET UNITYSDK_OFFSET(0xFDF5080)
#define NPCCROWD_NPCCULLEVENTLOGGER_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0xFDF3350)
#define NPCCROWD_NPCCULLEVENTLOGGER_GET_FILEPATH_OFFSET UNITYSDK_OFFSET(0xFDF3360)
#define NPCCROWD_NPCCULLEVENTLOGGER_LOGCROWDCULL_OFFSET UNITYSDK_OFFSET(0xFDF4B60)
#define NPCCROWD_NPCCULLEVENTLOGGER_LOGSERVERNPCCULL_OFFSET UNITYSDK_OFFSET(0xFDF38E0)
#define NPCCROWD_NPCCULLEVENTLOGGER_LOGSERVERNPCRESTORE_OFFSET UNITYSDK_OFFSET(0xFDF4510)
#define NPCCROWD_NPCCULLEVENTLOGGER_PRIORITYTOCHINESE_OFFSET UNITYSDK_OFFSET(0xFDF4290)
#define NPCCROWD_NPCCULLEVENTLOGGER_REASONTOCHINESE_OFFSET UNITYSDK_OFFSET(0xFDF41D0)
#define NPCCROWD_NPCCULLEVENTLOGGER_SETENABLED_OFFSET UNITYSDK_OFFSET(0xFDF3370)
#define NPCCROWD_NPCCULLEVENTLOGGER_WRITELINE_OFFSET UNITYSDK_OFFSET(0xFDF4450)
#define NPCCROWD_NPCCULLEVENTLOGGER__CTOR_OFFSET UNITYSDK_OFFSET(0xFDF5210)

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCCullEventLogger_TypeDefinitionIndex = 54164;

	class NPCCullEventLogger : public ::System::Object
	{
	public:
		// static const ::System::Int32 MAX_WRITE_FAILURES = 0x3; // 0x0
		::System::Text::StringBuilder* _sb; // 0x10
		::System::String* _filePath; // 0x18
		::System::IO::StreamWriter* _writer; // 0x20
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
