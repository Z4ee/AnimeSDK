#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityHipplen { class ActivityHipplenGameInstance; }
namespace RPG::Client::ActivityHipplen { class ActivityHipplenInteractGameState; }

#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTGAMESTATE___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x8F201C0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTGAMESTATE___C__DISPLAYCLASS3_0__ONREALENTER_B__0_OFFSET UNITYSDK_OFFSET(0x8F20870)

namespace RPG::Client::ActivityHipplen
{
	inline static constexpr unsigned int ActivityHipplenInteractGameState___c__DisplayClass3_0_TypeDefinitionIndex = 61666;

	class ActivityHipplenInteractGameState___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::RPG::Client::ActivityHipplen::ActivityHipplenGameInstance* game; // 0x10
		::RPG::Client::ActivityHipplen::ActivityHipplenInteractGameState* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTGAMESTATE___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnRealEnter_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTGAMESTATE___C__DISPLAYCLASS3_0__ONREALENTER_B__0_OFFSET))(this);
		}
	};
}
