#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LogType.h"

namespace ParadoxNotion::Services { class Logger_LogHandler; }
namespace System { class Exception; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PARADOXNOTION_SERVICES_LOGGER_ADDLISTENER_OFFSET UNITYSDK_OFFSET(0x1ADC2E40)
#define PARADOXNOTION_SERVICES_LOGGER_FORWARDTOUNITY_OFFSET UNITYSDK_OFFSET(0x1ADC3610)
#define PARADOXNOTION_SERVICES_LOGGER_INTERNAL_LOG_OFFSET UNITYSDK_OFFSET(0x1ADC2FD0)
#define PARADOXNOTION_SERVICES_LOGGER_LOGERROR_OFFSET UNITYSDK_OFFSET(0x1ADB28D0)
#define PARADOXNOTION_SERVICES_LOGGER_LOGEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1ADAECE0)
#define PARADOXNOTION_SERVICES_LOGGER_LOGWARNING_OFFSET UNITYSDK_OFFSET(0x1ADC3500)
#define PARADOXNOTION_SERVICES_LOGGER_LOG_OFFSET UNITYSDK_OFFSET(0x1ADC2F60)
#define PARADOXNOTION_SERVICES_LOGGER_REMOVELISTENER_OFFSET UNITYSDK_OFFSET(0x1ADC2ED0)
#define PARADOXNOTION_SERVICES_LOGGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1ADC3870)

namespace ParadoxNotion::Services
{
	inline static constexpr unsigned int Logger_TypeDefinitionIndex = 26730;

	class Logger : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::ParadoxNotion::Services::Logger_LogHandler*>** StaticGet_subscribers()
		{
			return (::System::Collections::Generic::List_1<::ParadoxNotion::Services::Logger_LogHandler*>**)Il2CppClass::FromTypeDefinitionIndex(Logger_TypeDefinitionIndex)->GetStaticField(0x20CB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_LOGGER__CCTOR_OFFSET))();
		}

		static ::System::Void AddListener(::ParadoxNotion::Services::Logger_LogHandler* callback)
		{
			return ((::System::Void(*)(::ParadoxNotion::Services::Logger_LogHandler*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_LOGGER_ADDLISTENER_OFFSET))(callback);
		}

		static ::System::Void RemoveListener(::ParadoxNotion::Services::Logger_LogHandler* callback)
		{
			return ((::System::Void(*)(::ParadoxNotion::Services::Logger_LogHandler*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_LOGGER_REMOVELISTENER_OFFSET))(callback);
		}

		static ::System::Void Log(::System::Object* message, ::System::String* tag, ::System::Object* context)
		{
			return ((::System::Void(*)(::System::Object*, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_LOGGER_LOG_OFFSET))(message, tag, context);
		}

		static ::System::Void LogWarning(::System::Object* message, ::System::String* tag, ::System::Object* context)
		{
			return ((::System::Void(*)(::System::Object*, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_LOGGER_LOGWARNING_OFFSET))(message, tag, context);
		}

		static ::System::Void LogError(::System::Object* message, ::System::String* tag, ::System::Object* context)
		{
			return ((::System::Void(*)(::System::Object*, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_LOGGER_LOGERROR_OFFSET))(message, tag, context);
		}

		static ::System::Void LogException(::System::Exception* exception, ::System::String* tag, ::System::Object* context)
		{
			return ((::System::Void(*)(::System::Exception*, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_LOGGER_LOGEXCEPTION_OFFSET))(exception, tag, context);
		}

		static ::System::Void Internal_Log(::UnityEngine::LogType type, ::System::Object* message, ::System::String* tag, ::System::Object* context)
		{
			return ((::System::Void(*)(::UnityEngine::LogType, ::System::Object*, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_LOGGER_INTERNAL_LOG_OFFSET))(type, message, tag, context);
		}

		static ::System::Void ForwardToUnity(::UnityEngine::LogType type, ::System::Object* message, ::System::String* tag, ::System::Object* context)
		{
			return ((::System::Void(*)(::UnityEngine::LogType, ::System::Object*, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERVICES_LOGGER_FORWARDTOUNITY_OFFSET))(type, message, tag, context);
		}
	};
}
