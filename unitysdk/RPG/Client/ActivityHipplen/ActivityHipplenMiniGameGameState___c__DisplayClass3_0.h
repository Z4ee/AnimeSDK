#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityHipplen { class ActivityHipplenGameInstance; }
namespace RPG::Client::ActivityHipplen { class ActivityHipplenMiniGameGameState; }
namespace System { class Action; }

#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEGAMESTATE___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7B28C0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEGAMESTATE___C__DISPLAYCLASS3_0__ONREALENTER_B__0_OFFSET UNITYSDK_OFFSET(0x1B7B2B30)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEGAMESTATE___C__DISPLAYCLASS3_0__ONREALENTER_B__1_OFFSET UNITYSDK_OFFSET(0x1B7B2CA0)

namespace RPG::Client::ActivityHipplen
{
	inline static constexpr unsigned int ActivityHipplenMiniGameGameState___c__DisplayClass3_0_TypeDefinitionIndex = 75219;

	class ActivityHipplenMiniGameGameState___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::System::Action* __9__1; // 0x10
		::RPG::Client::ActivityHipplen::ActivityHipplenGameInstance* game; // 0x18
		::RPG::Client::ActivityHipplen::ActivityHipplenMiniGameGameState* __4__this; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEGAMESTATE___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnRealEnter_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEGAMESTATE___C__DISPLAYCLASS3_0__ONREALENTER_B__0_OFFSET))(this);
		}

		::System::Void _OnRealEnter_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEGAMESTATE___C__DISPLAYCLASS3_0__ONREALENTER_B__1_OFFSET))(this);
		}
	};
}
