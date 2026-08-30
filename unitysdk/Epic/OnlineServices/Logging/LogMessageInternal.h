#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Logging/LogLevel.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define EPIC_ONLINESERVICES_LOGGING_LOGMESSAGEINTERNAL_GET_CATEGORY_OFFSET UNITYSDK_OFFSET(0x3C07FC0)
#define EPIC_ONLINESERVICES_LOGGING_LOGMESSAGEINTERNAL_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x7845E0)
#define EPIC_ONLINESERVICES_LOGGING_LOGMESSAGEINTERNAL_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x3C08070)

namespace Epic::OnlineServices::Logging
{
	inline static constexpr unsigned int LogMessageInternal_TypeDefinitionIndex = 45653;

	struct alignas(8) LogMessageInternal
	{
		::System::IntPtr m_Category; // 0x10
		::System::IntPtr m_Message; // 0x18
		::Epic::OnlineServices::Logging::LogLevel m_Level; // 0x20

		::System::String* get_Category()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOGGING_LOGMESSAGEINTERNAL_GET_CATEGORY_OFFSET))(this);
		}

		::System::String* get_Message()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOGGING_LOGMESSAGEINTERNAL_GET_MESSAGE_OFFSET))(this);
		}

		::Epic::OnlineServices::Logging::LogLevel get_Level()
		{
			return ((::Epic::OnlineServices::Logging::LogLevel(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOGGING_LOGMESSAGEINTERNAL_GET_LEVEL_OFFSET))(this);
		}
	};
}
