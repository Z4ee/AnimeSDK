#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityHipplen { class ActivityHipplenGameInstance; }
namespace RPG::Client::ActivityHipplen { class ActivityHipplenSettleTrialGameState; }

#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENSETTLETRIALGAMESTATE___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9B00010)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENSETTLETRIALGAMESTATE___C__DISPLAYCLASS3_0__RPG_CLIENT_ACTIVITYHIPPLEN_IACTIVITYHIPPLENGAMESTATE_ONENTER_B__0_OFFSET UNITYSDK_OFFSET(0x9B00380)

namespace RPG::Client::ActivityHipplen
{
	inline static constexpr unsigned int ActivityHipplenSettleTrialGameState___c__DisplayClass3_0_TypeDefinitionIndex = 69586;

	class ActivityHipplenSettleTrialGameState___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::RPG::Client::ActivityHipplen::ActivityHipplenGameInstance* game; // 0x10
		::RPG::Client::ActivityHipplen::ActivityHipplenSettleTrialGameState* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENSETTLETRIALGAMESTATE___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Void _RPG_Client_ActivityHipplen_IActivityHipplenGameState_OnEnter_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENSETTLETRIALGAMESTATE___C__DISPLAYCLASS3_0__RPG_CLIENT_ACTIVITYHIPPLEN_IACTIVITYHIPPLENGAMESTATE_ONENTER_B__0_OFFSET))(this);
		}
	};
}
