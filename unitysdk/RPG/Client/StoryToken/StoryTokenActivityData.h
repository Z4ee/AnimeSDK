#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DailyLoginRewardActivityData.h"

#define RPG_CLIENT_STORYTOKEN_STORYTOKENACTIVITYDATA_GET_CANGETREWARD_OFFSET UNITYSDK_OFFSET(0xA4EF1B0)
#define RPG_CLIENT_STORYTOKEN_STORYTOKENACTIVITYDATA_GET_ISREWARDTOKEN_OFFSET UNITYSDK_OFFSET(0xA4EF140)
#define RPG_CLIENT_STORYTOKEN_STORYTOKENACTIVITYDATA_GET_REWARDID_OFFSET UNITYSDK_OFFSET(0xA4EF220)
#define RPG_CLIENT_STORYTOKEN_STORYTOKENACTIVITYDATA_ONSYNCDATA_OFFSET UNITYSDK_OFFSET(0xA4EF070)
#define RPG_CLIENT_STORYTOKEN_STORYTOKENACTIVITYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA4EF060)
#define RPG_CLIENT_STORYTOKEN_STORYTOKENACTIVITYDATA___IFIXBASEPROXY_ONSYNCDATA_OFFSET UNITYSDK_OFFSET(0xA4EF2A0)

namespace RPG::Client::StoryToken
{
	inline static constexpr unsigned int StoryTokenActivityData_TypeDefinitionIndex = 61157;

	class StoryTokenActivityData : public ::RPG::Client::DailyLoginRewardActivityData
	{
	public:
		::System::Void _ctor(::System::UInt32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYTOKEN_STORYTOKENACTIVITYDATA__CTOR_OFFSET))(this, id);
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

		::System::Void __iFixBaseProxy_OnSyncData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYTOKEN_STORYTOKENACTIVITYDATA___IFIXBASEPROXY_ONSYNCDATA_OFFSET))(this);
		}
	};
}
