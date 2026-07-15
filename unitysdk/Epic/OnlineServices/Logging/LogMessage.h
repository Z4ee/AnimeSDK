#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Logging/LogLevel.h"
#include "unitysdk/Epic/OnlineServices/Logging/LogMessageInternal.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define EPIC_ONLINESERVICES_LOGGING_LOGMESSAGE_GET_CATEGORY_OFFSET UNITYSDK_OFFSET(0x1BF97BC0)
#define EPIC_ONLINESERVICES_LOGGING_LOGMESSAGE_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1BF97C00)
#define EPIC_ONLINESERVICES_LOGGING_LOGMESSAGE_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x1BF97BE0)
#define EPIC_ONLINESERVICES_LOGGING_LOGMESSAGE_SET_1_OFFSET UNITYSDK_OFFSET(0x1BF98060)
#define EPIC_ONLINESERVICES_LOGGING_LOGMESSAGE_SET_CATEGORY_OFFSET UNITYSDK_OFFSET(0x1BF97BD0)
#define EPIC_ONLINESERVICES_LOGGING_LOGMESSAGE_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1BF97C10)
#define EPIC_ONLINESERVICES_LOGGING_LOGMESSAGE_SET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x1BF97BF0)
#define EPIC_ONLINESERVICES_LOGGING_LOGMESSAGE_SET_OFFSET UNITYSDK_OFFSET(0x1BF97C20)
#define EPIC_ONLINESERVICES_LOGGING_LOGMESSAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF98180)

namespace Epic::OnlineServices::Logging
{
	inline static constexpr unsigned int LogMessage_TypeDefinitionIndex = 43470;

	class LogMessage : public ::System::Object
	{
	public:
		::System::String* _Category_k__BackingField; // 0x10
		::System::String* _Message_k__BackingField; // 0x18
		::Epic::OnlineServices::Logging::LogLevel _Level_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOGGING_LOGMESSAGE__CTOR_OFFSET))(this);
		}

		::System::String* get_Category()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOGGING_LOGMESSAGE_GET_CATEGORY_OFFSET))(this);
		}

		::System::Void set_Category(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOGGING_LOGMESSAGE_SET_CATEGORY_OFFSET))(this, a1);
		}

		::System::String* get_Message()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOGGING_LOGMESSAGE_GET_MESSAGE_OFFSET))(this);
		}

		::System::Void set_Message(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOGGING_LOGMESSAGE_SET_MESSAGE_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Logging::LogLevel get_Level()
		{
			return ((::Epic::OnlineServices::Logging::LogLevel(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOGGING_LOGMESSAGE_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::Epic::OnlineServices::Logging::LogLevel a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Logging::LogLevel))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOGGING_LOGMESSAGE_SET_LEVEL_OFFSET))(this, a1);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Logging::LogMessageInternal> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Logging::LogMessageInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOGGING_LOGMESSAGE_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOGGING_LOGMESSAGE_SET_1_OFFSET))(this, a1);
		}
	};
}
