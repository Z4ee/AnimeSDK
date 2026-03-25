#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IActivityQuestRewardData; }
namespace RPG::Client { class IActivityQuestRewardTabGroupInfo; }

#define RPG_CLIENT_ACTIVITYQUESTREWARDDATAEXT_ISBGVARIABLE_1_OFFSET UNITYSDK_OFFSET(0x8FA6300)
#define RPG_CLIENT_ACTIVITYQUESTREWARDDATAEXT_ISBGVARIABLE_OFFSET UNITYSDK_OFFSET(0x8FA62A0)
#define RPG_CLIENT_ACTIVITYQUESTREWARDDATAEXT_ISTABITEMVARIABLE_1_OFFSET UNITYSDK_OFFSET(0x8FA6510)
#define RPG_CLIENT_ACTIVITYQUESTREWARDDATAEXT_ISTABITEMVARIABLE_OFFSET UNITYSDK_OFFSET(0x8FA64B0)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityQuestRewardDataExt_TypeDefinitionIndex = 50090;

	class ActivityQuestRewardDataExt : public ::System::Object
	{
	public:
		static ::System::Boolean IsBgVariable(::RPG::Client::IActivityQuestRewardTabGroupInfo* tabGroupInfo)
		{
			return ((::System::Boolean(*)(::RPG::Client::IActivityQuestRewardTabGroupInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYQUESTREWARDDATAEXT_ISBGVARIABLE_OFFSET))(tabGroupInfo);
		}

		static ::System::Boolean IsBgVariable_1(::RPG::Client::IActivityQuestRewardData* rewardData)
		{
			return ((::System::Boolean(*)(::RPG::Client::IActivityQuestRewardData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYQUESTREWARDDATAEXT_ISBGVARIABLE_1_OFFSET))(rewardData);
		}

		static ::System::Boolean IsTabItemVariable(::RPG::Client::IActivityQuestRewardTabGroupInfo* tabGroupInfo)
		{
			return ((::System::Boolean(*)(::RPG::Client::IActivityQuestRewardTabGroupInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYQUESTREWARDDATAEXT_ISTABITEMVARIABLE_OFFSET))(tabGroupInfo);
		}

		static ::System::Boolean IsTabItemVariable_1(::RPG::Client::IActivityQuestRewardData* rewardData)
		{
			return ((::System::Boolean(*)(::RPG::Client::IActivityQuestRewardData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYQUESTREWARDDATAEXT_ISTABITEMVARIABLE_1_OFFSET))(rewardData);
		}
	};
}
