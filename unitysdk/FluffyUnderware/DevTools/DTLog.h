#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Exception; }
namespace System { class String; }
namespace UnityEngine { class Object; }

#define FLUFFYUNDERWARE_DEVTOOLS_DTLOG_LOGERRORFORMAT_1_OFFSET UNITYSDK_OFFSET(0x1B2C9E50)
#define FLUFFYUNDERWARE_DEVTOOLS_DTLOG_LOGERRORFORMAT_OFFSET UNITYSDK_OFFSET(0x1B2C9DF0)
#define FLUFFYUNDERWARE_DEVTOOLS_DTLOG_LOGERROR_1_OFFSET UNITYSDK_OFFSET(0x1B2C9D90)
#define FLUFFYUNDERWARE_DEVTOOLS_DTLOG_LOGERROR_OFFSET UNITYSDK_OFFSET(0x1B2C9D30)
#define FLUFFYUNDERWARE_DEVTOOLS_DTLOG_LOGEXCEPTION_1_OFFSET UNITYSDK_OFFSET(0x1B2C9F20)
#define FLUFFYUNDERWARE_DEVTOOLS_DTLOG_LOGEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1B2C9EC0)
#define FLUFFYUNDERWARE_DEVTOOLS_DTLOG_LOGFORMAT_1_OFFSET UNITYSDK_OFFSET(0x1B2C9FE0)
#define FLUFFYUNDERWARE_DEVTOOLS_DTLOG_LOGFORMAT_OFFSET UNITYSDK_OFFSET(0x1B2C9F80)
#define FLUFFYUNDERWARE_DEVTOOLS_DTLOG_LOGWARNINGFORMAT_1_OFFSET UNITYSDK_OFFSET(0x1B2CA110)
#define FLUFFYUNDERWARE_DEVTOOLS_DTLOG_LOGWARNINGFORMAT_OFFSET UNITYSDK_OFFSET(0x1B2CA0B0)
#define FLUFFYUNDERWARE_DEVTOOLS_DTLOG_LOGWARNING_1_OFFSET UNITYSDK_OFFSET(0x1B2C8290)
#define FLUFFYUNDERWARE_DEVTOOLS_DTLOG_LOGWARNING_OFFSET UNITYSDK_OFFSET(0x1B2CA050)
#define FLUFFYUNDERWARE_DEVTOOLS_DTLOG_LOG_1_OFFSET UNITYSDK_OFFSET(0x1B2C9CD0)
#define FLUFFYUNDERWARE_DEVTOOLS_DTLOG_LOG_OFFSET UNITYSDK_OFFSET(0x1B2C9C70)

namespace FluffyUnderware::DevTools
{
	inline static constexpr unsigned int DTLog_TypeDefinitionIndex = 25846;

	class DTLog : public ::System::Object
	{
	public:
		static ::System::Void Log(::System::Object* message)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTLOG_LOG_OFFSET))(message);
		}

		static ::System::Void Log_1(::System::Object* message, ::UnityEngine::Object* context)
		{
			return ((::System::Void(*)(::System::Object*, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTLOG_LOG_1_OFFSET))(message, context);
		}

		static ::System::Void LogError(::System::Object* message)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTLOG_LOGERROR_OFFSET))(message);
		}

		static ::System::Void LogError_1(::System::Object* message, ::UnityEngine::Object* context)
		{
			return ((::System::Void(*)(::System::Object*, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTLOG_LOGERROR_1_OFFSET))(message, context);
		}

		static ::System::Void LogErrorFormat(::System::String* format, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTLOG_LOGERRORFORMAT_OFFSET))(format, args);
		}

		static ::System::Void LogErrorFormat_1(::UnityEngine::Object* context, ::System::String* format, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::UnityEngine::Object*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTLOG_LOGERRORFORMAT_1_OFFSET))(context, format, args);
		}

		static ::System::Void LogException(::System::Exception* exception)
		{
			return ((::System::Void(*)(::System::Exception*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTLOG_LOGEXCEPTION_OFFSET))(exception);
		}

		static ::System::Void LogException_1(::System::Exception* exception, ::UnityEngine::Object* context)
		{
			return ((::System::Void(*)(::System::Exception*, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTLOG_LOGEXCEPTION_1_OFFSET))(exception, context);
		}

		static ::System::Void LogFormat(::System::String* format, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTLOG_LOGFORMAT_OFFSET))(format, args);
		}

		static ::System::Void LogFormat_1(::UnityEngine::Object* context, ::System::String* format, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::UnityEngine::Object*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTLOG_LOGFORMAT_1_OFFSET))(context, format, args);
		}

		static ::System::Void LogWarning(::System::Object* message)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTLOG_LOGWARNING_OFFSET))(message);
		}

		static ::System::Void LogWarning_1(::System::Object* message, ::UnityEngine::Object* context)
		{
			return ((::System::Void(*)(::System::Object*, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTLOG_LOGWARNING_1_OFFSET))(message, context);
		}

		static ::System::Void LogWarningFormat(::System::String* format, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTLOG_LOGWARNINGFORMAT_OFFSET))(format, args);
		}

		static ::System::Void LogWarningFormat_1(::UnityEngine::Object* context, ::System::String* format, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::UnityEngine::Object*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTLOG_LOGWARNINGFORMAT_1_OFFSET))(context, format, args);
		}
	};
}
