#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/AntiCheatCommon/AntiCheatCommonPlayerMovementState.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices::AntiCheatCommon { class Quat; }
namespace Epic::OnlineServices::AntiCheatCommon { class Vec3f; }

#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTICKOPTIONS_GET_ISPLAYERVIEWZOOMED_OFFSET UNITYSDK_OFFSET(0x838A040)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTICKOPTIONS_GET_PLAYERHANDLE_OFFSET UNITYSDK_OFFSET(0x8389FE0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTICKOPTIONS_GET_PLAYERHEALTH_OFFSET UNITYSDK_OFFSET(0x838A060)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTICKOPTIONS_GET_PLAYERMOVEMENTSTATE_OFFSET UNITYSDK_OFFSET(0x838A080)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTICKOPTIONS_GET_PLAYERPOSITION_OFFSET UNITYSDK_OFFSET(0x838A000)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTICKOPTIONS_GET_PLAYERVIEWROTATION_OFFSET UNITYSDK_OFFSET(0x838A020)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTICKOPTIONS_SET_ISPLAYERVIEWZOOMED_OFFSET UNITYSDK_OFFSET(0x838A050)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTICKOPTIONS_SET_PLAYERHANDLE_OFFSET UNITYSDK_OFFSET(0x8389FF0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTICKOPTIONS_SET_PLAYERHEALTH_OFFSET UNITYSDK_OFFSET(0x838A070)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTICKOPTIONS_SET_PLAYERMOVEMENTSTATE_OFFSET UNITYSDK_OFFSET(0x838A090)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTICKOPTIONS_SET_PLAYERPOSITION_OFFSET UNITYSDK_OFFSET(0x838A010)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTICKOPTIONS_SET_PLAYERVIEWROTATION_OFFSET UNITYSDK_OFFSET(0x838A030)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTICKOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x838A0A0)

namespace Epic::OnlineServices::AntiCheatCommon
{
	inline static constexpr unsigned int LogPlayerTickOptions_TypeDefinitionIndex = 36662;

	class LogPlayerTickOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::AntiCheatCommon::Quat* _PlayerViewRotation_k__BackingField; // 0x10
		::Epic::OnlineServices::AntiCheatCommon::Vec3f* _PlayerPosition_k__BackingField; // 0x18
		::System::Single _PlayerHealth_k__BackingField; // 0x20
		::System::Boolean _IsPlayerViewZoomed_k__BackingField; // 0x24
		::System::IntPtr _PlayerHandle_k__BackingField; // 0x28
		::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerMovementState _PlayerMovementState_k__BackingField; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTICKOPTIONS__CTOR_OFFSET))(this);
		}

		::System::IntPtr get_PlayerHandle()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTICKOPTIONS_GET_PLAYERHANDLE_OFFSET))(this);
		}

		::System::Void set_PlayerHandle(::System::IntPtr value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTICKOPTIONS_SET_PLAYERHANDLE_OFFSET))(this, value);
		}

		::Epic::OnlineServices::AntiCheatCommon::Vec3f* get_PlayerPosition()
		{
			return ((::Epic::OnlineServices::AntiCheatCommon::Vec3f*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTICKOPTIONS_GET_PLAYERPOSITION_OFFSET))(this);
		}

		::System::Void set_PlayerPosition(::Epic::OnlineServices::AntiCheatCommon::Vec3f* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::AntiCheatCommon::Vec3f*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTICKOPTIONS_SET_PLAYERPOSITION_OFFSET))(this, value);
		}

		::Epic::OnlineServices::AntiCheatCommon::Quat* get_PlayerViewRotation()
		{
			return ((::Epic::OnlineServices::AntiCheatCommon::Quat*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTICKOPTIONS_GET_PLAYERVIEWROTATION_OFFSET))(this);
		}

		::System::Void set_PlayerViewRotation(::Epic::OnlineServices::AntiCheatCommon::Quat* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::AntiCheatCommon::Quat*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTICKOPTIONS_SET_PLAYERVIEWROTATION_OFFSET))(this, value);
		}

		::System::Boolean get_IsPlayerViewZoomed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTICKOPTIONS_GET_ISPLAYERVIEWZOOMED_OFFSET))(this);
		}

		::System::Void set_IsPlayerViewZoomed(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTICKOPTIONS_SET_ISPLAYERVIEWZOOMED_OFFSET))(this, value);
		}

		::System::Single get_PlayerHealth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTICKOPTIONS_GET_PLAYERHEALTH_OFFSET))(this);
		}

		::System::Void set_PlayerHealth(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTICKOPTIONS_SET_PLAYERHEALTH_OFFSET))(this, value);
		}

		::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerMovementState get_PlayerMovementState()
		{
			return ((::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerMovementState(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTICKOPTIONS_GET_PLAYERMOVEMENTSTATE_OFFSET))(this);
		}

		::System::Void set_PlayerMovementState(::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerMovementState value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerMovementState))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGPLAYERTICKOPTIONS_SET_PLAYERMOVEMENTSTATE_OFFSET))(this, value);
		}
	};
}
