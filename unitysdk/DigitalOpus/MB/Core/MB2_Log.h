#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DigitalOpus/MB/Core/MB2_LogLevel.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define DIGITALOPUS_MB_CORE_MB2_LOG_ERROR_OFFSET UNITYSDK_OFFSET(0x1E454D60)
#define DIGITALOPUS_MB_CORE_MB2_LOG_INFO_OFFSET UNITYSDK_OFFSET(0x1E454EE0)
#define DIGITALOPUS_MB_CORE_MB2_LOG_LOGDEBUG_OFFSET UNITYSDK_OFFSET(0x1E454FA0)
#define DIGITALOPUS_MB_CORE_MB2_LOG_LOG_OFFSET UNITYSDK_OFFSET(0x1E454B70)
#define DIGITALOPUS_MB_CORE_MB2_LOG_TRACE_OFFSET UNITYSDK_OFFSET(0x1E455060)
#define DIGITALOPUS_MB_CORE_MB2_LOG_WARN_OFFSET UNITYSDK_OFFSET(0x1E454E20)
#define DIGITALOPUS_MB_CORE_MB2_LOG__CTOR_OFFSET UNITYSDK_OFFSET(0x1E455120)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MB2_Log_TypeDefinitionIndex = 90608;

	class MB2_Log : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB2_LOG__CTOR_OFFSET))(this);
		}

		static ::System::Void Log(::DigitalOpus::MB::Core::MB2_LogLevel l, ::System::String* msg, ::DigitalOpus::MB::Core::MB2_LogLevel currentThreshold)
		{
			return ((::System::Void(*)(::DigitalOpus::MB::Core::MB2_LogLevel, ::System::String*, ::DigitalOpus::MB::Core::MB2_LogLevel))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB2_LOG_LOG_OFFSET))(l, msg, currentThreshold);
		}

		static ::System::String* Error(::System::String* msg, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::String*(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB2_LOG_ERROR_OFFSET))(msg, args);
		}

		static ::System::String* Warn(::System::String* msg, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::String*(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB2_LOG_WARN_OFFSET))(msg, args);
		}

		static ::System::String* Info(::System::String* msg, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::String*(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB2_LOG_INFO_OFFSET))(msg, args);
		}

		static ::System::String* LogDebug(::System::String* msg, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::String*(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB2_LOG_LOGDEBUG_OFFSET))(msg, args);
		}

		static ::System::String* Trace(::System::String* msg, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::String*(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB2_LOG_TRACE_OFFSET))(msg, args);
		}
	};
}
