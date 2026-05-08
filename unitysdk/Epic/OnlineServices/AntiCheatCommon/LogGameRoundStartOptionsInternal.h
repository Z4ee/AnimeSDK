#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::AntiCheatCommon { class LogGameRoundStartOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGGAMEROUNDSTARTOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8CFF40)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGGAMEROUNDSTARTOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x8CFED0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGGAMEROUNDSTARTOPTIONSINTERNAL_SET_LEVELNAME_OFFSET UNITYSDK_OFFSET(0x8CFD60)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGGAMEROUNDSTARTOPTIONSINTERNAL_SET_MODENAME_OFFSET UNITYSDK_OFFSET(0x8CFE10)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGGAMEROUNDSTARTOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x8CFEC0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGGAMEROUNDSTARTOPTIONSINTERNAL_SET_ROUNDTIMESECONDS_OFFSET UNITYSDK_OFFSET(0x6FDE10)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGGAMEROUNDSTARTOPTIONSINTERNAL_SET_SESSIONIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x8CFCB0)

namespace Epic::OnlineServices::AntiCheatCommon
{
	inline static constexpr unsigned int LogGameRoundStartOptionsInternal_TypeDefinitionIndex = 34698;

	struct alignas(8) LogGameRoundStartOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_SessionIdentifier; // 0x18
		::System::IntPtr m_LevelName; // 0x20
		::System::IntPtr m_ModeName; // 0x28
		::System::UInt32 m_RoundTimeSeconds; // 0x30

		::System::Void set_SessionIdentifier(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGGAMEROUNDSTARTOPTIONSINTERNAL_SET_SESSIONIDENTIFIER_OFFSET))(this, value);
		}

		::System::Void set_LevelName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGGAMEROUNDSTARTOPTIONSINTERNAL_SET_LEVELNAME_OFFSET))(this, value);
		}

		::System::Void set_ModeName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGGAMEROUNDSTARTOPTIONSINTERNAL_SET_MODENAME_OFFSET))(this, value);
		}

		::System::Void set_RoundTimeSeconds(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGGAMEROUNDSTARTOPTIONSINTERNAL_SET_ROUNDTIMESECONDS_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::AntiCheatCommon::LogGameRoundStartOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::AntiCheatCommon::LogGameRoundStartOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGGAMEROUNDSTARTOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGGAMEROUNDSTARTOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGGAMEROUNDSTARTOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
