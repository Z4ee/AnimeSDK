#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LogType.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Text { class StringBuilder; }
namespace UnityEngine { class Object; }

#define COFFEE_UIPARTICLEINTERNAL_LOGGING_APPENDREADABLECODE_OFFSET UNITYSDK_OFFSET(0x12BBF270)
#define COFFEE_UIPARTICLEINTERNAL_LOGGING_APPENDTAG_OFFSET UNITYSDK_OFFSET(0x12BBF250)
#define COFFEE_UIPARTICLEINTERNAL_LOGGING_APPENDTYPE_OFFSET UNITYSDK_OFFSET(0x12BBF260)
#define COFFEE_UIPARTICLEINTERNAL_LOGGING_LOGERROR_OFFSET UNITYSDK_OFFSET(0x12BBF1C0)
#define COFFEE_UIPARTICLEINTERNAL_LOGGING_LOGIF_OFFSET UNITYSDK_OFFSET(0x12BBF190)
#define COFFEE_UIPARTICLEINTERNAL_LOGGING_LOGMULTICAST_OFFSET UNITYSDK_OFFSET(0x12BBF240)
#define COFFEE_UIPARTICLEINTERNAL_LOGGING_LOGWARNING_OFFSET UNITYSDK_OFFSET(0x12BBF1B0)
#define COFFEE_UIPARTICLEINTERNAL_LOGGING_LOG_INTERNAL_OFFSET UNITYSDK_OFFSET(0x12BBF180)
#define COFFEE_UIPARTICLEINTERNAL_LOGGING_LOG_OFFSET UNITYSDK_OFFSET(0x12BBF1A0)

namespace Coffee::UIParticleInternal
{
	inline static constexpr unsigned int Logging_TypeDefinitionIndex = 40688;

	class Logging : public ::System::Object
	{
	public:
		// static const ::System::String* k_DisableSymbol; // 0x0

		static ::System::Void Log_Internal(::UnityEngine::LogType type, ::System::Object* tag, ::System::Object* message, ::UnityEngine::Object* context)
		{
			return ((::System::Void(*)(::UnityEngine::LogType, ::System::Object*, ::System::Object*, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_LOGGING_LOG_INTERNAL_OFFSET))(type, tag, message, context);
		}

		static ::System::Void LogIf(::System::Boolean enable, ::System::Object* tag, ::System::Object* message, ::UnityEngine::Object* context)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::Object*, ::System::Object*, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_LOGGING_LOGIF_OFFSET))(enable, tag, message, context);
		}

		static ::System::Void Log(::System::Object* tag, ::System::Object* message, ::UnityEngine::Object* context)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Object*, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_LOGGING_LOG_OFFSET))(tag, message, context);
		}

		static ::System::Void LogWarning(::System::Object* tag, ::System::Object* message, ::UnityEngine::Object* context)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Object*, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_LOGGING_LOGWARNING_OFFSET))(tag, message, context);
		}

		static ::System::Void LogError(::System::Object* tag, ::System::Object* message, ::UnityEngine::Object* context)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Object*, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_LOGGING_LOGERROR_OFFSET))(tag, message, context);
		}

		static ::System::Void LogMulticast(::System::Type* type, ::System::String* fieldName, ::System::Object* instance, ::System::String* message)
		{
			return ((::System::Void(*)(::System::Type*, ::System::String*, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_LOGGING_LOGMULTICAST_OFFSET))(type, fieldName, instance, message);
		}

		static ::System::Void AppendTag(::System::Text::StringBuilder* sb, ::System::Object* tag)
		{
			return ((::System::Void(*)(::System::Text::StringBuilder*, ::System::Object*))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_LOGGING_APPENDTAG_OFFSET))(sb, tag);
		}

		static ::System::Void AppendType(::System::Text::StringBuilder* sb, ::System::Type* type)
		{
			return ((::System::Void(*)(::System::Text::StringBuilder*, ::System::Type*))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_LOGGING_APPENDTYPE_OFFSET))(sb, type);
		}

		static ::System::Void AppendReadableCode(::System::Text::StringBuilder* sb, ::System::Object* tag)
		{
			return ((::System::Void(*)(::System::Text::StringBuilder*, ::System::Object*))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_LOGGING_APPENDREADABLECODE_OFFSET))(sb, tag);
		}
	};
}
