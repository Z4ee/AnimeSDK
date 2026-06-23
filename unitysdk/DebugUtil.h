#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Object; }

#define DEBUGUTIL_LOGERROR_OFFSET UNITYSDK_OFFSET(0x1C421DC0)
#define DEBUGUTIL_LOGWARNING_OFFSET UNITYSDK_OFFSET(0x1C421E10)
#define DEBUGUTIL_LOG_OFFSET UNITYSDK_OFFSET(0x1C421E50)
#define DEBUGUTIL__CTOR_OFFSET UNITYSDK_OFFSET(0x1C421E90)

inline static constexpr unsigned int DebugUtil_TypeDefinitionIndex = 26381;

class DebugUtil : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBUGUTIL__CTOR_OFFSET))(this);
	}

	static ::System::Void LogError(::System::String* log, ::UnityEngine::Object* context)
	{
		return ((::System::Void(*)(::System::String*, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + DEBUGUTIL_LOGERROR_OFFSET))(log, context);
	}

	static ::System::Void LogWarning(::System::String* log)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + DEBUGUTIL_LOGWARNING_OFFSET))(log);
	}

	static ::System::Void Log(::System::String* log)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + DEBUGUTIL_LOG_OFFSET))(log);
	}
};
