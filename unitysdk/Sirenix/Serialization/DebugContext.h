#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/ErrorHandlingPolicy.h"
#include "unitysdk/Sirenix/Serialization/LoggingPolicy.h"
#include "unitysdk/System/Object.h"

namespace Sirenix::Serialization { class ILogger; }
namespace System { class Exception; }
namespace System { class String; }

#define SIRENIX_SERIALIZATION_DEBUGCONTEXT_GET_ERRORHANDLINGPOLICY_OFFSET UNITYSDK_OFFSET(0x1FB09CA0)
#define SIRENIX_SERIALIZATION_DEBUGCONTEXT_GET_LOGGER_OFFSET UNITYSDK_OFFSET(0x1FB09AA0)
#define SIRENIX_SERIALIZATION_DEBUGCONTEXT_GET_LOGGINGPOLICY_OFFSET UNITYSDK_OFFSET(0x1FB09C80)
#define SIRENIX_SERIALIZATION_DEBUGCONTEXT_LOGERROR_OFFSET UNITYSDK_OFFSET(0x1FB09DD0)
#define SIRENIX_SERIALIZATION_DEBUGCONTEXT_LOGEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1FB09ED0)
#define SIRENIX_SERIALIZATION_DEBUGCONTEXT_LOGWARNING_OFFSET UNITYSDK_OFFSET(0x1FB09CC0)
#define SIRENIX_SERIALIZATION_DEBUGCONTEXT_RESETTODEFAULT_OFFSET UNITYSDK_OFFSET(0x1FB0A060)
#define SIRENIX_SERIALIZATION_DEBUGCONTEXT_SET_ERRORHANDLINGPOLICY_OFFSET UNITYSDK_OFFSET(0x1FB09CB0)
#define SIRENIX_SERIALIZATION_DEBUGCONTEXT_SET_LOGGER_OFFSET UNITYSDK_OFFSET(0x1FB09BD0)
#define SIRENIX_SERIALIZATION_DEBUGCONTEXT_SET_LOGGINGPOLICY_OFFSET UNITYSDK_OFFSET(0x1FB09C90)
#define SIRENIX_SERIALIZATION_DEBUGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB0A130)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int DebugContext_TypeDefinitionIndex = 7534;

	class DebugContext : public ::System::Object
	{
	public:
		::System::Object* LOCK; // 0x10
		::Sirenix::Serialization::ILogger* logger; // 0x18
		::Sirenix::Serialization::ErrorHandlingPolicy errorHandlingPolicy; // 0x20
		::Sirenix::Serialization::LoggingPolicy loggingPolicy; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_DEBUGCONTEXT__CTOR_OFFSET))(this);
		}

		::Sirenix::Serialization::ILogger* get_Logger()
		{
			return ((::Sirenix::Serialization::ILogger*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_DEBUGCONTEXT_GET_LOGGER_OFFSET))(this);
		}

		::System::Void set_Logger(::Sirenix::Serialization::ILogger* value)
		{
			return ((::System::Void(*)(::PVOID, ::Sirenix::Serialization::ILogger*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_DEBUGCONTEXT_SET_LOGGER_OFFSET))(this, value);
		}

		::Sirenix::Serialization::LoggingPolicy get_LoggingPolicy()
		{
			return ((::Sirenix::Serialization::LoggingPolicy(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_DEBUGCONTEXT_GET_LOGGINGPOLICY_OFFSET))(this);
		}

		::System::Void set_LoggingPolicy(::Sirenix::Serialization::LoggingPolicy value)
		{
			return ((::System::Void(*)(::PVOID, ::Sirenix::Serialization::LoggingPolicy))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_DEBUGCONTEXT_SET_LOGGINGPOLICY_OFFSET))(this, value);
		}

		::Sirenix::Serialization::ErrorHandlingPolicy get_ErrorHandlingPolicy()
		{
			return ((::Sirenix::Serialization::ErrorHandlingPolicy(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_DEBUGCONTEXT_GET_ERRORHANDLINGPOLICY_OFFSET))(this);
		}

		::System::Void set_ErrorHandlingPolicy(::Sirenix::Serialization::ErrorHandlingPolicy value)
		{
			return ((::System::Void(*)(::PVOID, ::Sirenix::Serialization::ErrorHandlingPolicy))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_DEBUGCONTEXT_SET_ERRORHANDLINGPOLICY_OFFSET))(this, value);
		}

		::System::Void LogWarning(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_DEBUGCONTEXT_LOGWARNING_OFFSET))(this, message);
		}

		::System::Void LogError(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_DEBUGCONTEXT_LOGERROR_OFFSET))(this, message);
		}

		::System::Void LogException(::System::Exception* exception)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_DEBUGCONTEXT_LOGEXCEPTION_OFFSET))(this, exception);
		}

		::System::Void ResetToDefault()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_DEBUGCONTEXT_RESETTODEFAULT_OFFSET))(this);
		}
	};
}
