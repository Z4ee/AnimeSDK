#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DigitalOpus/MB/Core/MB2_LogLevel.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define DIGITALOPUS_MB_CORE_OBJECTLOG_DUMP_OFFSET UNITYSDK_OFFSET(0x1BEC8C40)
#define DIGITALOPUS_MB_CORE_OBJECTLOG_ERROR_OFFSET UNITYSDK_OFFSET(0x1BEC8A10)
#define DIGITALOPUS_MB_CORE_OBJECTLOG_INFO_OFFSET UNITYSDK_OFFSET(0x1BEC8AF0)
#define DIGITALOPUS_MB_CORE_OBJECTLOG_LOGDEBUG_OFFSET UNITYSDK_OFFSET(0x1BEC8B60)
#define DIGITALOPUS_MB_CORE_OBJECTLOG_LOG_OFFSET UNITYSDK_OFFSET(0x1BEC8990)
#define DIGITALOPUS_MB_CORE_OBJECTLOG_TRACE_OFFSET UNITYSDK_OFFSET(0x1BEC8BD0)
#define DIGITALOPUS_MB_CORE_OBJECTLOG_WARN_OFFSET UNITYSDK_OFFSET(0x1BEC8A80)
#define DIGITALOPUS_MB_CORE_OBJECTLOG__CACHELOGMESSAGE_OFFSET UNITYSDK_OFFSET(0x1BEC88E0)
#define DIGITALOPUS_MB_CORE_OBJECTLOG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BEC8940)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int ObjectLog_TypeDefinitionIndex = 85035;

	class ObjectLog : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* logMessages; // 0x10
		::System::Int32 pos; // 0x18

		::System::Void _ctor(::System::Int16 bufferSize)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_OBJECTLOG__CTOR_OFFSET))(this, bufferSize);
		}

		::System::Void _CacheLogMessage(::System::String* msg)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_OBJECTLOG__CACHELOGMESSAGE_OFFSET))(this, msg);
		}

		::System::Void Log(::DigitalOpus::MB::Core::MB2_LogLevel l, ::System::String* msg, ::DigitalOpus::MB::Core::MB2_LogLevel currentThreshold)
		{
			return ((::System::Void(*)(::PVOID, ::DigitalOpus::MB::Core::MB2_LogLevel, ::System::String*, ::DigitalOpus::MB::Core::MB2_LogLevel))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_OBJECTLOG_LOG_OFFSET))(this, l, msg, currentThreshold);
		}

		::System::Void Error(::System::String* msg, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_OBJECTLOG_ERROR_OFFSET))(this, msg, args);
		}

		::System::Void Warn(::System::String* msg, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_OBJECTLOG_WARN_OFFSET))(this, msg, args);
		}

		::System::Void Info(::System::String* msg, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_OBJECTLOG_INFO_OFFSET))(this, msg, args);
		}

		::System::Void LogDebug(::System::String* msg, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_OBJECTLOG_LOGDEBUG_OFFSET))(this, msg, args);
		}

		::System::Void Trace(::System::String* msg, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_OBJECTLOG_TRACE_OFFSET))(this, msg, args);
		}

		::System::String* Dump()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_OBJECTLOG_DUMP_OFFSET))(this);
		}
	};
}
