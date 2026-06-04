#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DailyLoginRewardActivityData.h"

#define RPG_CLIENT_STORYTOKEN_STORYTOKENACTIVITYDATA_GET_CANGETREWARD_OFFSET UNITYSDK_OFFSET(0xC93B080)
#define RPG_CLIENT_STORYTOKEN_STORYTOKENACTIVITYDATA_GET_ISREWARDTOKEN_OFFSET UNITYSDK_OFFSET(0xC93B010)
#define RPG_CLIENT_STORYTOKEN_STORYTOKENACTIVITYDATA_GET_REWARDID_OFFSET UNITYSDK_OFFSET(0xC93B0F0)
#define RPG_CLIENT_STORYTOKEN_STORYTOKENACTIVITYDATA_ONSYNCDATA_OFFSET UNITYSDK_OFFSET(0xC93AF40)
#define RPG_CLIENT_STORYTOKEN_STORYTOKENACTIVITYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC93AF30)
#define RPG_CLIENT_STORYTOKEN_STORYTOKENACTIVITYDATA___IFIXBASEPROXY_ONSYNCDATA_OFFSET UNITYSDK_OFFSET(0xC93B170)

namespace RPG::Client::StoryToken
{
	inline static constexpr unsigned int StoryTokenActivityData_TypeDefinitionIndex = 69469;

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

		::System::Void __iFixBaseProxy_OnSyncData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYTOKEN_STORYTOKENACTIVITYDATA___IFIXBASEPROXY_ONSYNCDATA_OFFSET))(this);
		}
	};
}
