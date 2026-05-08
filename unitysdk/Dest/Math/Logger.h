#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Dest::Math { class ILogger; }

#define DEST_MATH_LOGGER_LOGERROR_OFFSET UNITYSDK_OFFSET(0x1C08E3B0)
#define DEST_MATH_LOGGER_LOGINFO_OFFSET UNITYSDK_OFFSET(0x1C08FC90)
#define DEST_MATH_LOGGER_LOGWARNING_OFFSET UNITYSDK_OFFSET(0x1C08E4E0)
#define DEST_MATH_LOGGER_SETLOGGER_OFFSET UNITYSDK_OFFSET(0x1C08FDB0)
#define DEST_MATH_LOGGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C08FC50)
#define DEST_MATH_LOGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C08FE30)

namespace Dest::Math
{
	inline static constexpr unsigned int Logger_TypeDefinitionIndex = 33173;

	class Logger : public ::System::Object
	{
	public:
		static ::Dest::Math::ILogger** StaticGet__instance()
		{
			return (::Dest::Math::ILogger**)Il2CppClass::FromTypeDefinitionIndex(Logger_TypeDefinitionIndex)->GetStaticField(0x26100);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DEST_MATH_LOGGER__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_LOGGER__CTOR_OFFSET))(this);
		}

		static ::System::Void LogInfo(::System::Object* value)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + DEST_MATH_LOGGER_LOGINFO_OFFSET))(value);
		}

		static ::System::Void LogWarning(::System::Object* value)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + DEST_MATH_LOGGER_LOGWARNING_OFFSET))(value);
		}

		static ::System::Void LogError(::System::Object* value)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + DEST_MATH_LOGGER_LOGERROR_OFFSET))(value);
		}

		static ::System::Void SetLogger(::Dest::Math::ILogger* logger)
		{
			return ((::System::Void(*)(::Dest::Math::ILogger*))((::PBYTE)hIl2Cpp + DEST_MATH_LOGGER_SETLOGGER_OFFSET))(logger);
		}
	};
}
