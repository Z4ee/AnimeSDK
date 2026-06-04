#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/LogMessage.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define INCONTROL_LOGGER_ADD_ONLOGMESSAGE_OFFSET UNITYSDK_OFFSET(0x17FB2390)
#define INCONTROL_LOGGER_LOGERROR_OFFSET UNITYSDK_OFFSET(0x17FC0950)
#define INCONTROL_LOGGER_LOGINFO_OFFSET UNITYSDK_OFFSET(0x17FB2420)
#define INCONTROL_LOGGER_LOGWARNING_OFFSET UNITYSDK_OFFSET(0x17FBCF50)
#define INCONTROL_LOGGER_REMOVE_ONLOGMESSAGE_OFFSET UNITYSDK_OFFSET(0x17FB2300)
#define INCONTROL_LOGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x17FC4D50)

namespace InControl
{
	inline static constexpr unsigned int Logger_TypeDefinitionIndex = 37870;

	class Logger : public ::System::Object
	{
	public:
		static ::System::Action_1<::InControl::LogMessage>** StaticGet_OnLogMessage()
		{
			return (::System::Action_1<::InControl::LogMessage>**)Il2CppClass::FromTypeDefinitionIndex(Logger_TypeDefinitionIndex)->GetStaticField(0x126C0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_LOGGER__CTOR_OFFSET))(this);
		}

		static ::System::Void add_OnLogMessage(::System::Action_1<::InControl::LogMessage>* a1)
		{
			return ((::System::Void(*)(::System::Action_1<::InControl::LogMessage>*))((::PBYTE)hIl2Cpp + INCONTROL_LOGGER_ADD_ONLOGMESSAGE_OFFSET))(a1);
		}

		static ::System::Void remove_OnLogMessage(::System::Action_1<::InControl::LogMessage>* a1)
		{
			return ((::System::Void(*)(::System::Action_1<::InControl::LogMessage>*))((::PBYTE)hIl2Cpp + INCONTROL_LOGGER_REMOVE_ONLOGMESSAGE_OFFSET))(a1);
		}

		static ::System::Void LogInfo(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + INCONTROL_LOGGER_LOGINFO_OFFSET))(a1);
		}

		static ::System::Void LogWarning(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + INCONTROL_LOGGER_LOGWARNING_OFFSET))(a1);
		}

		static ::System::Void LogError(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + INCONTROL_LOGGER_LOGERROR_OFFSET))(a1);
		}
	};
}
