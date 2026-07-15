#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Logging/LogCategory.h"
#include "unitysdk/Epic/OnlineServices/Logging/LogLevel.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices::Logging { class LogMessageFunc; }

#define EPIC_ONLINESERVICES_LOGGING_LOGGINGINTERFACE_LOGMESSAGEFUNCINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x1BF983C0)
#define EPIC_ONLINESERVICES_LOGGING_LOGGINGINTERFACE_SETCALLBACK_OFFSET UNITYSDK_OFFSET(0x1BF98490)
#define EPIC_ONLINESERVICES_LOGGING_LOGGINGINTERFACE_SETLOGLEVEL_OFFSET UNITYSDK_OFFSET(0x1BF985B0)

namespace Epic::OnlineServices::Logging
{
	inline static constexpr unsigned int LoggingInterface_TypeDefinitionIndex = 43474;

	class LoggingInterface : public ::System::Object
	{
	public:
		static ::Epic::OnlineServices::Result SetCallback(::Epic::OnlineServices::Logging::LogMessageFunc* a1)
		{
			return ((::Epic::OnlineServices::Result(*)(::Epic::OnlineServices::Logging::LogMessageFunc*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOGGING_LOGGINGINTERFACE_SETCALLBACK_OFFSET))(a1);
		}

		static ::Epic::OnlineServices::Result SetLogLevel(::Epic::OnlineServices::Logging::LogCategory a1, ::Epic::OnlineServices::Logging::LogLevel a2)
		{
			return ((::Epic::OnlineServices::Result(*)(::Epic::OnlineServices::Logging::LogCategory, ::Epic::OnlineServices::Logging::LogLevel))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOGGING_LOGGINGINTERFACE_SETLOGLEVEL_OFFSET))(a1, a2);
		}

		static ::System::Void LogMessageFuncInternalImplementation(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOGGING_LOGGINGINTERFACE_LOGMESSAGEFUNCINTERNALIMPLEMENTATION_OFFSET))(a1);
		}
	};
}
