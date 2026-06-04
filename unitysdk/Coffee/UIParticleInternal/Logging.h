#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LogType.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Text { class StringBuilder; }
namespace UnityEngine { class Object; }

#define COFFEE_UIPARTICLEINTERNAL_LOGGING_APPENDREADABLECODE_OFFSET UNITYSDK_OFFSET(0x1467CC50)
#define COFFEE_UIPARTICLEINTERNAL_LOGGING_APPENDTAG_OFFSET UNITYSDK_OFFSET(0x1467CC30)
#define COFFEE_UIPARTICLEINTERNAL_LOGGING_APPENDTYPE_OFFSET UNITYSDK_OFFSET(0x1467CC40)
#define COFFEE_UIPARTICLEINTERNAL_LOGGING_LOGERROR_OFFSET UNITYSDK_OFFSET(0x1467CBA0)
#define COFFEE_UIPARTICLEINTERNAL_LOGGING_LOGIF_OFFSET UNITYSDK_OFFSET(0x1467CB70)
#define COFFEE_UIPARTICLEINTERNAL_LOGGING_LOGMULTICAST_OFFSET UNITYSDK_OFFSET(0x1467CC20)
#define COFFEE_UIPARTICLEINTERNAL_LOGGING_LOGWARNING_OFFSET UNITYSDK_OFFSET(0x1467CB90)
#define COFFEE_UIPARTICLEINTERNAL_LOGGING_LOG_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1467CB60)
#define COFFEE_UIPARTICLEINTERNAL_LOGGING_LOG_OFFSET UNITYSDK_OFFSET(0x1467CB80)

namespace Coffee::UIParticleInternal
{
	inline static constexpr unsigned int Logging_TypeDefinitionIndex = 41515;

	class Logging : public ::System::Object
	{
	public:
		// static const ::System::String* k_DisableSymbol; // 0x0

		static ::System::Void Log_Internal(::UnityEngine::LogType a1, ::System::Object* a2, ::System::Object* a3, ::UnityEngine::Object* a4)
		{
			return ((::System::Void(*)(::UnityEngine::LogType, ::System::Object*, ::System::Object*, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_LOGGING_LOG_INTERNAL_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void LogIf(::System::Boolean a1, ::System::Object* a2, ::System::Object* a3, ::UnityEngine::Object* a4)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::Object*, ::System::Object*, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_LOGGING_LOGIF_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void Log(::System::Object* a1, ::System::Object* a2, ::UnityEngine::Object* a3)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Object*, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_LOGGING_LOG_OFFSET))(a1, a2, a3);
		}

		static ::System::Void LogWarning(::System::Object* a1, ::System::Object* a2, ::UnityEngine::Object* a3)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Object*, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_LOGGING_LOGWARNING_OFFSET))(a1, a2, a3);
		}

		static ::System::Void LogError(::System::Object* a1, ::System::Object* a2, ::UnityEngine::Object* a3)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Object*, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_LOGGING_LOGERROR_OFFSET))(a1, a2, a3);
		}

		static ::System::Void LogMulticast(::System::Type* a1, ::System::String* a2, ::System::Object* a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::System::Type*, ::System::String*, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_LOGGING_LOGMULTICAST_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void AppendTag(::System::Text::StringBuilder* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::System::Text::StringBuilder*, ::System::Object*))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_LOGGING_APPENDTAG_OFFSET))(a1, a2);
		}

		static ::System::Void AppendType(::System::Text::StringBuilder* a1, ::System::Type* a2)
		{
			return ((::System::Void(*)(::System::Text::StringBuilder*, ::System::Type*))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_LOGGING_APPENDTYPE_OFFSET))(a1, a2);
		}

		static ::System::Void AppendReadableCode(::System::Text::StringBuilder* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::System::Text::StringBuilder*, ::System::Object*))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_LOGGING_APPENDREADABLECODE_OFFSET))(a1, a2);
		}
	};
}
