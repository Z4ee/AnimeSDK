#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_FATERIN_AUXILIARY_SUPERDEBUGLOGGER_ASSERT_1_OFFSET UNITYSDK_OFFSET(0x1A5BAD40)
#define RPG_CLIENT_FATERIN_AUXILIARY_SUPERDEBUGLOGGER_ASSERT_OFFSET UNITYSDK_OFFSET(0x1A5BACF0)
#define RPG_CLIENT_FATERIN_AUXILIARY_SUPERDEBUGLOGGER_LOGERROR_OFFSET UNITYSDK_OFFSET(0x1A5BABC0)
#define RPG_CLIENT_FATERIN_AUXILIARY_SUPERDEBUGLOGGER_LOGINFO_OFFSET UNITYSDK_OFFSET(0x1A5BAB20)
#define RPG_CLIENT_FATERIN_AUXILIARY_SUPERDEBUGLOGGER_LOGWARNING_OFFSET UNITYSDK_OFFSET(0x1A5BAB70)
#define RPG_CLIENT_FATERIN_AUXILIARY_SUPERDEBUGLOGGER__BUILDLOGMESSAGE_OFFSET UNITYSDK_OFFSET(0x1A5BAC70)
#define RPG_CLIENT_FATERIN_AUXILIARY_SUPERDEBUGLOGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5BAB10)

namespace RPG::Client::FateRin::Auxiliary
{
	inline static constexpr unsigned int SuperDebugLogger_TypeDefinitionIndex = 76103;

	class SuperDebugLogger : public ::System::Object
	{
	public:
		::System::String* _Name; // 0x10

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_AUXILIARY_SUPERDEBUGLOGGER__CTOR_OFFSET))(this, a1);
		}

		::System::Void LogInfo(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_AUXILIARY_SUPERDEBUGLOGGER_LOGINFO_OFFSET))(this, a1);
		}

		::System::Void LogWarning(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_AUXILIARY_SUPERDEBUGLOGGER_LOGWARNING_OFFSET))(this, a1);
		}

		::System::Void LogError(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_AUXILIARY_SUPERDEBUGLOGGER_LOGERROR_OFFSET))(this, a1);
		}

		::System::Void Assert(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_AUXILIARY_SUPERDEBUGLOGGER_ASSERT_OFFSET))(this, a1);
		}

		::System::Void Assert_1(::System::Boolean a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_AUXILIARY_SUPERDEBUGLOGGER_ASSERT_1_OFFSET))(this, a1, a2);
		}

		::System::String* _BuildLogMessage(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_AUXILIARY_SUPERDEBUGLOGGER__BUILDLOGMESSAGE_OFFSET))(this, a1);
		}
	};
}
