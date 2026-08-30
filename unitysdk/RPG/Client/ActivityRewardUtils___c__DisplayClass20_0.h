#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ActivityRewardUtils_MultiIDCheckerFunc; }
namespace RPG::Client { class ActivityRewardUtils_QuestCheckerFunc; }

#define RPG_CLIENT_ACTIVITYREWARDUTILS___C__DISPLAYCLASS20_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B879600)
#define RPG_CLIENT_ACTIVITYREWARDUTILS___C__DISPLAYCLASS20_0___ISTABGROUPQUESTPASS_B__0_OFFSET UNITYSDK_OFFSET(0x1B8797B0)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityRewardUtils___c__DisplayClass20_0_TypeDefinitionIndex = 61840;

	class ActivityRewardUtils___c__DisplayClass20_0 : public ::System::Object
	{
	public:
		::RPG::Client::ActivityRewardUtils_QuestCheckerFunc* questChecker; // 0x10
		::RPG::Client::ActivityRewardUtils_MultiIDCheckerFunc* multiChecker; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREWARDUTILS___C__DISPLAYCLASS20_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __IsTabGroupQuestPass_b__0(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREWARDUTILS___C__DISPLAYCLASS20_0___ISTABGROUPQUESTPASS_B__0_OFFSET))(this, a1);
		}
	};
}
