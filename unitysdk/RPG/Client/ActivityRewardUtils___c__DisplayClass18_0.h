#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ActivityRewardUtils_MultiIDCheckerFunc; }
namespace RPG::Client { class ActivityRewardUtils_QuestCheckerFunc; }

#define RPG_CLIENT_ACTIVITYREWARDUTILS___C__DISPLAYCLASS18_0__CTOR_OFFSET UNITYSDK_OFFSET(0x8FAC8C0)
#define RPG_CLIENT_ACTIVITYREWARDUTILS___C__DISPLAYCLASS18_0___ISACTIVITYREWARDQUESTPASS_B__0_OFFSET UNITYSDK_OFFSET(0x8FAD020)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityRewardUtils___c__DisplayClass18_0_TypeDefinitionIndex = 50107;

	class ActivityRewardUtils___c__DisplayClass18_0 : public ::System::Object
	{
	public:
		::RPG::Client::ActivityRewardUtils_MultiIDCheckerFunc* multiChecker; // 0x10
		::RPG::Client::ActivityRewardUtils_QuestCheckerFunc* questChecker; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREWARDUTILS___C__DISPLAYCLASS18_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __IsActivityRewardQuestPass_b__0(::System::UInt32 id)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREWARDUTILS___C__DISPLAYCLASS18_0___ISACTIVITYREWARDQUESTPASS_B__0_OFFSET))(this, id);
		}
	};
}
