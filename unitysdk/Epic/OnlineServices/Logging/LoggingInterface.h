#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Logging/LogCategory.h"
#include "unitysdk/Epic/OnlineServices/Logging/LogLevel.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices::Logging { class LogMessageFunc; }

#define EPIC_ONLINESERVICES_LOGGING_LOGGINGINTERFACE_LOGMESSAGEFUNCINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x1CC3E420)
#define EPIC_ONLINESERVICES_LOGGING_LOGGINGINTERFACE_SETCALLBACK_OFFSET UNITYSDK_OFFSET(0x1CC3E4E0)
#define EPIC_ONLINESERVICES_LOGGING_LOGGINGINTERFACE_SETLOGLEVEL_OFFSET UNITYSDK_OFFSET(0x1CC3E5E0)

namespace Epic::OnlineServices::Logging
{
	inline static constexpr unsigned int LoggingInterface_TypeDefinitionIndex = 36251;

	class LoggingInterface : public ::System::Object
	{
	public:
		static ::Epic::OnlineServices::Result SetCallback(::Epic::OnlineServices::Logging::LogMessageFunc* callback)
		{
			return ((::Epic::OnlineServices::Result(*)(::Epic::OnlineServices::Logging::LogMessageFunc*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOGGING_LOGGINGINTERFACE_SETCALLBACK_OFFSET))(callback);
		}

		static ::Epic::OnlineServices::Result SetLogLevel(::Epic::OnlineServices::Logging::LogCategory logCategory, ::Epic::OnlineServices::Logging::LogLevel logLevel)
		{
			return ((::Epic::OnlineServices::Result(*)(::Epic::OnlineServices::Logging::LogCategory, ::Epic::OnlineServices::Logging::LogLevel))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOGGING_LOGGINGINTERFACE_SETLOGLEVEL_OFFSET))(logCategory, logLevel);
		}

		static ::System::Void LogMessageFuncInternalImplementation(::System::IntPtr message)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOGGING_LOGGINGINTERFACE_LOGMESSAGEFUNCINTERNALIMPLEMENTATION_OFFSET))(message);
		}
	};
}
