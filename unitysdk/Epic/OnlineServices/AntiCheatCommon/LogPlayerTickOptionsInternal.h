#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/AntiCheatCommon/AntiCheatCommonPlayerMovementState.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::AntiCheatCommon { class LogPlayerTickOptions; }
namespace Epic::OnlineServices::AntiCheatCommon { class Quat; }
namespace Epic::OnlineServices::AntiCheatCommon { class Vec3f; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTICKOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3C3B500)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTICKOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x3C3B480)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTICKOPTIONSINTERNAL_SET_ISPLAYERVIEWZOOMED_OFFSET UNITYSDK_OFFSET(0x3C3B3B0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTICKOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x3C3B470)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTICKOPTIONSINTERNAL_SET_PLAYERHANDLE_OFFSET UNITYSDK_OFFSET(0x869800)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTICKOPTIONSINTERNAL_SET_PLAYERHEALTH_OFFSET UNITYSDK_OFFSET(0x3C3B460)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTICKOPTIONSINTERNAL_SET_PLAYERMOVEMENTSTATE_OFFSET UNITYSDK_OFFSET(0x3AE8360)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTICKOPTIONSINTERNAL_SET_PLAYERPOSITION_OFFSET UNITYSDK_OFFSET(0x3C3B2D0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTICKOPTIONSINTERNAL_SET_PLAYERVIEWROTATION_OFFSET UNITYSDK_OFFSET(0x3C3B340)

namespace Epic::OnlineServices::AntiCheatCommon
{
	inline static constexpr unsigned int LogPlayerTickOptionsInternal_TypeDefinitionIndex = 46335;

	struct alignas(8) LogPlayerTickOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_PlayerHandle; // 0x18
		::System::IntPtr m_PlayerPosition; // 0x20
		::System::IntPtr m_PlayerViewRotation; // 0x28
		::System::Int32 m_IsPlayerViewZoomed; // 0x30
		::System::Single m_PlayerHealth; // 0x34
		::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerMovementState m_PlayerMovementState; // 0x38

		::System::Void set_PlayerHandle(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTICKOPTIONSINTERNAL_SET_PLAYERHANDLE_OFFSET))(this, a1);
		}

		::System::Void set_PlayerPosition(::Epic::OnlineServices::AntiCheatCommon::Vec3f* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::AntiCheatCommon::Vec3f*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTICKOPTIONSINTERNAL_SET_PLAYERPOSITION_OFFSET))(this, a1);
		}

		::System::Void set_PlayerViewRotation(::Epic::OnlineServices::AntiCheatCommon::Quat* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::AntiCheatCommon::Quat*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTICKOPTIONSINTERNAL_SET_PLAYERVIEWROTATION_OFFSET))(this, a1);
		}

		::System::Void set_IsPlayerViewZoomed(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTICKOPTIONSINTERNAL_SET_ISPLAYERVIEWZOOMED_OFFSET))(this, a1);
		}

		::System::Void set_PlayerHealth(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTICKOPTIONSINTERNAL_SET_PLAYERHEALTH_OFFSET))(this, a1);
		}

		::System::Void set_PlayerMovementState(::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerMovementState a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerMovementState))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTICKOPTIONSINTERNAL_SET_PLAYERMOVEMENTSTATE_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::AntiCheatCommon::LogPlayerTickOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::AntiCheatCommon::LogPlayerTickOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTICKOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTICKOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTICKOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
