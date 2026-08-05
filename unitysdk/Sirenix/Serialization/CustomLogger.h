#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Exception; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define SIRENIX_SERIALIZATION_CUSTOMLOGGER_LOGERROR_OFFSET UNITYSDK_OFFSET(0x1FC685D0)
#define SIRENIX_SERIALIZATION_CUSTOMLOGGER_LOGEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1FC68630)
#define SIRENIX_SERIALIZATION_CUSTOMLOGGER_LOGWARNING_OFFSET UNITYSDK_OFFSET(0x1FC68570)
#define SIRENIX_SERIALIZATION_CUSTOMLOGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC68480)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int CustomLogger_TypeDefinitionIndex = 6541;

	class CustomLogger : public ::System::Object
	{
	public:
		::System::Action_1<::System::String*>* logErrorDelegate; // 0x10
		::System::Action_1<::System::String*>* logWarningDelegate; // 0x18
		::System::Action_1<::System::Exception*>* logExceptionDelegate; // 0x20

		::System::Void _ctor(::System::Action_1<::System::String*>* logWarningDelegate, ::System::Action_1<::System::String*>* logErrorDelegate, ::System::Action_1<::System::Exception*>* logExceptionDelegate)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*, ::System::Action_1<::System::String*>*, ::System::Action_1<::System::Exception*>*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_CUSTOMLOGGER__CTOR_OFFSET))(this, logWarningDelegate, logErrorDelegate, logExceptionDelegate);
		}

		::System::Void LogWarning(::System::String* warning)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_CUSTOMLOGGER_LOGWARNING_OFFSET))(this, warning);
		}

		::System::Void LogError(::System::String* error)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_CUSTOMLOGGER_LOGERROR_OFFSET))(this, error);
		}

		::System::Void LogException(::System::Exception* exception)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_CUSTOMLOGGER_LOGEXCEPTION_OFFSET))(this, exception);
		}
	};
}
