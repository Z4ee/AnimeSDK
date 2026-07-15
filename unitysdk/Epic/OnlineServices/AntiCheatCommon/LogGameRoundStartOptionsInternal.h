#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::AntiCheatCommon { class LogGameRoundStartOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGGAMEROUNDSTARTOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3AA3B90)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGGAMEROUNDSTARTOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x3AA3B10)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGGAMEROUNDSTARTOPTIONSINTERNAL_SET_LEVELNAME_OFFSET UNITYSDK_OFFSET(0x3AA39A0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGGAMEROUNDSTARTOPTIONSINTERNAL_SET_MODENAME_OFFSET UNITYSDK_OFFSET(0x3AA3A50)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGGAMEROUNDSTARTOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x3AA3B00)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGGAMEROUNDSTARTOPTIONSINTERNAL_SET_ROUNDTIMESECONDS_OFFSET UNITYSDK_OFFSET(0x395BE80)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGGAMEROUNDSTARTOPTIONSINTERNAL_SET_SESSIONIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x3AA38F0)

namespace Epic::OnlineServices::AntiCheatCommon
{
	inline static constexpr unsigned int LogGameRoundStartOptionsInternal_TypeDefinitionIndex = 44143;

	struct alignas(8) LogGameRoundStartOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_SessionIdentifier; // 0x18
		::System::IntPtr m_LevelName; // 0x20
		::System::IntPtr m_ModeName; // 0x28
		::System::UInt32 m_RoundTimeSeconds; // 0x30

		::System::Void set_SessionIdentifier(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGGAMEROUNDSTARTOPTIONSINTERNAL_SET_SESSIONIDENTIFIER_OFFSET))(this, a1);
		}

		::System::Void set_LevelName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGGAMEROUNDSTARTOPTIONSINTERNAL_SET_LEVELNAME_OFFSET))(this, a1);
		}

		::System::Void set_ModeName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGGAMEROUNDSTARTOPTIONSINTERNAL_SET_MODENAME_OFFSET))(this, a1);
		}

		::System::Void set_RoundTimeSeconds(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGGAMEROUNDSTARTOPTIONSINTERNAL_SET_ROUNDTIMESECONDS_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::AntiCheatCommon::LogGameRoundStartOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::AntiCheatCommon::LogGameRoundStartOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGGAMEROUNDSTARTOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGGAMEROUNDSTARTOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGGAMEROUNDSTARTOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
