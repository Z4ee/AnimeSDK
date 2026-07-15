#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityHipplen { class ActivityHipplenGameInstance; }
namespace RPG::Client::ActivityHipplen { class ActivityHipplenPerformanceGameState; }

#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENPERFORMANCEGAMESTATE___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19BC7220)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENPERFORMANCEGAMESTATE___C__DISPLAYCLASS3_0__ONREALENTER_B__0_OFFSET UNITYSDK_OFFSET(0x19BC7600)

namespace RPG::Client::ActivityHipplen
{
	inline static constexpr unsigned int ActivityHipplenPerformanceGameState___c__DisplayClass3_0_TypeDefinitionIndex = 71915;

	class ActivityHipplenPerformanceGameState___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::RPG::Client::ActivityHipplen::ActivityHipplenPerformanceGameState* __4__this; // 0x10
		::RPG::Client::ActivityHipplen::ActivityHipplenGameInstance* game; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENPERFORMANCEGAMESTATE___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnRealEnter_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENPERFORMANCEGAMESTATE___C__DISPLAYCLASS3_0__ONREALENTER_B__0_OFFSET))(this);
		}
	};
}
