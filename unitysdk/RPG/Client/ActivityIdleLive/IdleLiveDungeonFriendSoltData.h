#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class IdleLiveDungeonAssistData; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONFRIENDSOLTDATA_CLEAR_OFFSET UNITYSDK_OFFSET(0x9B443F0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONFRIENDSOLTDATA_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x9B45710)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONFRIENDSOLTDATA_GET_PROGRESS_OFFSET UNITYSDK_OFFSET(0x9B45920)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONFRIENDSOLTDATA_GET_UID_OFFSET UNITYSDK_OFFSET(0x9B45900)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONFRIENDSOLTDATA_SETASSISTDATA_OFFSET UNITYSDK_OFFSET(0x9B44780)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONFRIENDSOLTDATA_SET_PROGRESS_OFFSET UNITYSDK_OFFSET(0x9B45930)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONFRIENDSOLTDATA_SET_UID_OFFSET UNITYSDK_OFFSET(0x9B45910)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONFRIENDSOLTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9B44090)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveDungeonFriendSoltData_TypeDefinitionIndex = 69263;

	class IdleLiveDungeonFriendSoltData : public ::System::Object
	{
	public:
		::RPG::Client::ActivityIdleLive::IdleLiveDungeonAssistData* _AssistData; // 0x10
		::System::UInt32 _UID_k__BackingField; // 0x18
		::System::UInt32 _Progress_k__BackingField; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONFRIENDSOLTDATA__CTOR_OFFSET))(this);
		}

		::System::Void SetAssistData(::RPG::Client::ActivityIdleLive::IdleLiveDungeonAssistData* assistData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveDungeonAssistData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONFRIENDSOLTDATA_SETASSISTDATA_OFFSET))(this, assistData);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONFRIENDSOLTDATA_CLEAR_OFFSET))(this);
		}

		::System::UInt32 get_UID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONFRIENDSOLTDATA_GET_UID_OFFSET))(this);
		}

		::System::Void set_UID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONFRIENDSOLTDATA_SET_UID_OFFSET))(this, value);
		}

		::System::UInt32 get_Progress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONFRIENDSOLTDATA_GET_PROGRESS_OFFSET))(this);
		}

		::System::Void set_Progress(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONFRIENDSOLTDATA_SET_PROGRESS_OFFSET))(this, value);
		}

		::System::Boolean get_IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONFRIENDSOLTDATA_GET_ISEMPTY_OFFSET))(this);
		}
	};
}
