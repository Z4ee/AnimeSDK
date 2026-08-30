#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ActivityRewardUtils_MultiIDCheckerFunc; }
namespace RPG::Client { class ActivityRewardUtils_QuestCheckerFunc; }

#define RPG_CLIENT_ACTIVITYREWARDUTILS___C__DISPLAYCLASS19_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC685060)
#define RPG_CLIENT_ACTIVITYREWARDUTILS___C__DISPLAYCLASS19_0___ISACTIVITYREWARDQUESTPASS_B__0_OFFSET UNITYSDK_OFFSET(0xC6851F0)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityRewardUtils___c__DisplayClass19_0_TypeDefinitionIndex = 61839;

	class ActivityRewardUtils___c__DisplayClass19_0 : public ::System::Object
	{
	public:
		::RPG::Client::ActivityRewardUtils_MultiIDCheckerFunc* multiChecker; // 0x10
		::RPG::Client::ActivityRewardUtils_QuestCheckerFunc* questChecker; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREWARDUTILS___C__DISPLAYCLASS19_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __IsActivityRewardQuestPass_b__0(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREWARDUTILS___C__DISPLAYCLASS19_0___ISACTIVITYREWARDQUESTPASS_B__0_OFFSET))(this, a1);
		}
	};
}
