#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define DEST_MATH_DEFAULTLOGGER_LOGERROR_OFFSET UNITYSDK_OFFSET(0x1CDC35E0)
#define DEST_MATH_DEFAULTLOGGER_LOGINFO_OFFSET UNITYSDK_OFFSET(0x1CDC3520)
#define DEST_MATH_DEFAULTLOGGER_LOGWARNING_OFFSET UNITYSDK_OFFSET(0x1CDC3580)
#define DEST_MATH_DEFAULTLOGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDC3640)

namespace Dest::Math
{
	inline static constexpr unsigned int DefaultLogger_TypeDefinitionIndex = 34737;

	class DefaultLogger : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_DEFAULTLOGGER__CTOR_OFFSET))(this);
		}

		::System::Void LogInfo(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DEST_MATH_DEFAULTLOGGER_LOGINFO_OFFSET))(this, value);
		}

		::System::Void LogWarning(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DEST_MATH_DEFAULTLOGGER_LOGWARNING_OFFSET))(this, value);
		}

		::System::Void LogError(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DEST_MATH_DEFAULTLOGGER_LOGERROR_OFFSET))(this, value);
		}
	};
}
