#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ActivityRewardUtils_QuestCheckerFunc; }

#define RPG_CLIENT_ACTIVITYREWARDUTILS___C__DISPLAYCLASS21_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC685090)
#define RPG_CLIENT_ACTIVITYREWARDUTILS___C__DISPLAYCLASS21_0___ISTABQUESTPASS_B__0_OFFSET UNITYSDK_OFFSET(0xC685270)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityRewardUtils___c__DisplayClass21_0_TypeDefinitionIndex = 61841;

	class ActivityRewardUtils___c__DisplayClass21_0 : public ::System::Object
	{
	public:
		::RPG::Client::ActivityRewardUtils_QuestCheckerFunc* questChecker; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREWARDUTILS___C__DISPLAYCLASS21_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __IsTabQuestPass_b__0(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREWARDUTILS___C__DISPLAYCLASS21_0___ISTABQUESTPASS_B__0_OFFSET))(this, a1);
		}
	};
}
