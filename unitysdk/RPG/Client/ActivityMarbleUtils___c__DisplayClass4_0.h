#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityMarble { class MarblePVPManager; }

#define RPG_CLIENT_ACTIVITYMARBLEUTILS___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC559770)
#define RPG_CLIENT_ACTIVITYMARBLEUTILS___C__DISPLAYCLASS4_0__OPENMARBLEMATCHPAGE_B__0_OFFSET UNITYSDK_OFFSET(0xC55B830)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityMarbleUtils___c__DisplayClass4_0_TypeDefinitionIndex = 65798;

	class ActivityMarbleUtils___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::RPG::Client::ActivityMarble::MarblePVPManager* pvpMgr; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLEUTILS___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Void _OpenMarbleMatchPage_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLEUTILS___C__DISPLAYCLASS4_0__OPENMARBLEMATCHPAGE_B__0_OFFSET))(this);
		}
	};
}
