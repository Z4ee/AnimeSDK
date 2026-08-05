#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/AntiCheatCommon/AntiCheatCommonPlayerMovementState.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::AntiCheatCommon { class LogPlayerTickOptions; }
namespace Epic::OnlineServices::AntiCheatCommon { class Quat; }
namespace Epic::OnlineServices::AntiCheatCommon { class Vec3f; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTICKOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9024C0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTICKOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x902450)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTICKOPTIONSINTERNAL_SET_ISPLAYERVIEWZOOMED_OFFSET UNITYSDK_OFFSET(0x902390)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTICKOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x902440)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTICKOPTIONSINTERNAL_SET_PLAYERHANDLE_OFFSET UNITYSDK_OFFSET(0x462A80)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTICKOPTIONSINTERNAL_SET_PLAYERHEALTH_OFFSET UNITYSDK_OFFSET(0x5ED180)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTICKOPTIONSINTERNAL_SET_PLAYERMOVEMENTSTATE_OFFSET UNITYSDK_OFFSET(0x59E640)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTICKOPTIONSINTERNAL_SET_PLAYERPOSITION_OFFSET UNITYSDK_OFFSET(0x9022B0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTICKOPTIONSINTERNAL_SET_PLAYERVIEWROTATION_OFFSET UNITYSDK_OFFSET(0x902320)

namespace Epic::OnlineServices::AntiCheatCommon
{
	inline static constexpr unsigned int LogPlayerTickOptionsInternal_TypeDefinitionIndex = 36930;

	struct alignas(8) LogPlayerTickOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_PlayerHandle; // 0x18
		::System::IntPtr m_PlayerPosition; // 0x20
		::System::IntPtr m_PlayerViewRotation; // 0x28
		::System::Int32 m_IsPlayerViewZoomed; // 0x30
		::System::Single m_PlayerHealth; // 0x34
		::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerMovementState m_PlayerMovementState; // 0x38

		::System::Void set_PlayerHandle(::System::IntPtr value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTICKOPTIONSINTERNAL_SET_PLAYERHANDLE_OFFSET))(this, value);
		}

		::System::Void set_PlayerPosition(::Epic::OnlineServices::AntiCheatCommon::Vec3f* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::AntiCheatCommon::Vec3f*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTICKOPTIONSINTERNAL_SET_PLAYERPOSITION_OFFSET))(this, value);
		}

		::System::Void set_PlayerViewRotation(::Epic::OnlineServices::AntiCheatCommon::Quat* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::AntiCheatCommon::Quat*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTICKOPTIONSINTERNAL_SET_PLAYERVIEWROTATION_OFFSET))(this, value);
		}

		::System::Void set_IsPlayerViewZoomed(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTICKOPTIONSINTERNAL_SET_ISPLAYERVIEWZOOMED_OFFSET))(this, value);
		}

		::System::Void set_PlayerHealth(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTICKOPTIONSINTERNAL_SET_PLAYERHEALTH_OFFSET))(this, value);
		}

		::System::Void set_PlayerMovementState(::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerMovementState value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerMovementState))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTICKOPTIONSINTERNAL_SET_PLAYERMOVEMENTSTATE_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::AntiCheatCommon::LogPlayerTickOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::AntiCheatCommon::LogPlayerTickOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTICKOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTICKOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTICKOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
