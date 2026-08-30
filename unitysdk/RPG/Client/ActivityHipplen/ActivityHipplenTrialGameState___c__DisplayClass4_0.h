#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityHipplen { class ActivityHipplenGameInstance; }
namespace RPG::Client::ActivityHipplen { class ActivityHipplenTrialGameState; }
namespace System { class Action; }

#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENTRIALGAMESTATE___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7BD880)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENTRIALGAMESTATE___C__DISPLAYCLASS4_0__RPG_CLIENT_ACTIVITYHIPPLEN_IACTIVITYHIPPLENGAMESTATE_ONENTER_B__0_OFFSET UNITYSDK_OFFSET(0x1B7BDD90)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENTRIALGAMESTATE___C__DISPLAYCLASS4_0__RPG_CLIENT_ACTIVITYHIPPLEN_IACTIVITYHIPPLENGAMESTATE_ONENTER_B__1_OFFSET UNITYSDK_OFFSET(0x1B7BDF80)

namespace RPG::Client::ActivityHipplen
{
	inline static constexpr unsigned int ActivityHipplenTrialGameState___c__DisplayClass4_0_TypeDefinitionIndex = 75230;

	class ActivityHipplenTrialGameState___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::System::Action* __9__1; // 0x10
		::RPG::Client::ActivityHipplen::ActivityHipplenTrialGameState* __4__this; // 0x18
		::RPG::Client::ActivityHipplen::ActivityHipplenGameInstance* game; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENTRIALGAMESTATE___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Void _RPG_Client_ActivityHipplen_IActivityHipplenGameState_OnEnter_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENTRIALGAMESTATE___C__DISPLAYCLASS4_0__RPG_CLIENT_ACTIVITYHIPPLEN_IACTIVITYHIPPLENGAMESTATE_ONENTER_B__0_OFFSET))(this);
		}

		::System::Void _RPG_Client_ActivityHipplen_IActivityHipplenGameState_OnEnter_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENTRIALGAMESTATE___C__DISPLAYCLASS4_0__RPG_CLIENT_ACTIVITYHIPPLEN_IACTIVITYHIPPLENGAMESTATE_ONENTER_B__1_OFFSET))(this);
		}
	};
}
