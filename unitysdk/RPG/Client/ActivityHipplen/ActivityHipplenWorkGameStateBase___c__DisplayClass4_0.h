#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityHipplen { class ActivityHipplenGameInstance; }
namespace RPG::Client::ActivityHipplen { class ActivityHipplenWorkGameStateBase; }

#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENWORKGAMESTATEBASE___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7BE300)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENWORKGAMESTATEBASE___C__DISPLAYCLASS4_0__ONENTER_B__0_OFFSET UNITYSDK_OFFSET(0x1B7BE3C0)

namespace RPG::Client::ActivityHipplen
{
	inline static constexpr unsigned int ActivityHipplenWorkGameStateBase___c__DisplayClass4_0_TypeDefinitionIndex = 75236;

	class ActivityHipplenWorkGameStateBase___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::RPG::Client::ActivityHipplen::ActivityHipplenGameInstance* game; // 0x10
		::RPG::Client::ActivityHipplen::ActivityHipplenWorkGameStateBase* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENWORKGAMESTATEBASE___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnEnter_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENWORKGAMESTATEBASE___C__DISPLAYCLASS4_0__ONENTER_B__0_OFFSET))(this);
		}
	};
}
