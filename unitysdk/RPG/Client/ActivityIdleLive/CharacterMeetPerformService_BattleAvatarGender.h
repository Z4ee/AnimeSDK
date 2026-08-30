#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_ACTIVITYIDLELIVE_CHARACTERMEETPERFORMSERVICE_BATTLEAVATARGENDER_GETREALAVATARID_OFFSET UNITYSDK_OFFSET(0x1B905440)
#define RPG_CLIENT_ACTIVITYIDLELIVE_CHARACTERMEETPERFORMSERVICE_BATTLEAVATARGENDER_NEEDGETREALAVATARIDBYGENDER_OFFSET UNITYSDK_OFFSET(0x1B9053E0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_CHARACTERMEETPERFORMSERVICE_BATTLEAVATARGENDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9053D0)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int CharacterMeetPerformService_BattleAvatarGender_TypeDefinitionIndex = 74866;

	class CharacterMeetPerformService_BattleAvatarGender : public ::System::Object
	{
	public:
		::System::UInt32 BoyAvatarId; // 0x10
		::System::UInt32 GirlAvatarId; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_CHARACTERMEETPERFORMSERVICE_BATTLEAVATARGENDER__CTOR_OFFSET))(this);
		}

		::System::Boolean NeedGetRealAvatarIdByGender(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_CHARACTERMEETPERFORMSERVICE_BATTLEAVATARGENDER_NEEDGETREALAVATARIDBYGENDER_OFFSET))(this, a1);
		}

		::System::UInt32 GetRealAvatarId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_CHARACTERMEETPERFORMSERVICE_BATTLEAVATARGENDER_GETREALAVATARID_OFFSET))(this);
		}
	};
}
