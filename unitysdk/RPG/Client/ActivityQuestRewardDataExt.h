#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IActivityQuestRewardData; }
namespace RPG::Client { class IActivityQuestRewardTabGroupInfo; }

#define RPG_CLIENT_ACTIVITYQUESTREWARDDATAEXT_ISBGVARIABLE_1_OFFSET UNITYSDK_OFFSET(0x1B872890)
#define RPG_CLIENT_ACTIVITYQUESTREWARDDATAEXT_ISBGVARIABLE_OFFSET UNITYSDK_OFFSET(0x1B872830)
#define RPG_CLIENT_ACTIVITYQUESTREWARDDATAEXT_ISTABITEMVARIABLE_1_OFFSET UNITYSDK_OFFSET(0x1B872AB0)
#define RPG_CLIENT_ACTIVITYQUESTREWARDDATAEXT_ISTABITEMVARIABLE_OFFSET UNITYSDK_OFFSET(0x1B872A50)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityQuestRewardDataExt_TypeDefinitionIndex = 61822;

	class ActivityQuestRewardDataExt : public ::System::Object
	{
	public:
		static ::System::Boolean IsBgVariable(::RPG::Client::IActivityQuestRewardTabGroupInfo* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::IActivityQuestRewardTabGroupInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYQUESTREWARDDATAEXT_ISBGVARIABLE_OFFSET))(a1);
		}

		static ::System::Boolean IsBgVariable_1(::RPG::Client::IActivityQuestRewardData* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::IActivityQuestRewardData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYQUESTREWARDDATAEXT_ISBGVARIABLE_1_OFFSET))(a1);
		}

		static ::System::Boolean IsTabItemVariable(::RPG::Client::IActivityQuestRewardTabGroupInfo* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::IActivityQuestRewardTabGroupInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYQUESTREWARDDATAEXT_ISTABITEMVARIABLE_OFFSET))(a1);
		}

		static ::System::Boolean IsTabItemVariable_1(::RPG::Client::IActivityQuestRewardData* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::IActivityQuestRewardData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYQUESTREWARDDATAEXT_ISTABITEMVARIABLE_1_OFFSET))(a1);
		}
	};
}
