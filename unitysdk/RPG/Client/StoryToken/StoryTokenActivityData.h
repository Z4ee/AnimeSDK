#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DailyLoginRewardActivityData.h"

#define RPG_CLIENT_STORYTOKEN_STORYTOKENACTIVITYDATA_GET_CANGETREWARD_OFFSET UNITYSDK_OFFSET(0xE1059E0)
#define RPG_CLIENT_STORYTOKEN_STORYTOKENACTIVITYDATA_GET_ISREWARDTOKEN_OFFSET UNITYSDK_OFFSET(0xE105980)
#define RPG_CLIENT_STORYTOKEN_STORYTOKENACTIVITYDATA_GET_REWARDID_OFFSET UNITYSDK_OFFSET(0xE105A40)
#define RPG_CLIENT_STORYTOKEN_STORYTOKENACTIVITYDATA_ONSYNCDATA_OFFSET UNITYSDK_OFFSET(0xE105880)
#define RPG_CLIENT_STORYTOKEN_STORYTOKENACTIVITYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xE105870)

namespace RPG::Client::StoryToken
{
	inline static constexpr unsigned int StoryTokenActivityData_TypeDefinitionIndex = 74290;

	class StoryTokenActivityData : public ::RPG::Client::DailyLoginRewardActivityData
	{
	public:
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYTOKEN_STORYTOKENACTIVITYDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Void OnSyncData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYTOKEN_STORYTOKENACTIVITYDATA_ONSYNCDATA_OFFSET))(this);
		}

		::System::Boolean get_IsRewardToken()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYTOKEN_STORYTOKENACTIVITYDATA_GET_ISREWARDTOKEN_OFFSET))(this);
		}

		::System::Boolean get_CanGetReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYTOKEN_STORYTOKENACTIVITYDATA_GET_CANGETREWARD_OFFSET))(this);
		}

		::System::UInt32 get_RewardID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYTOKEN_STORYTOKENACTIVITYDATA_GET_REWARDID_OFFSET))(this);
		}
	};
}
