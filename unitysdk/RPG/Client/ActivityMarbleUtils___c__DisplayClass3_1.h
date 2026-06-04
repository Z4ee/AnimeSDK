#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityMarble { class MarblePVPManager; }

#define RPG_CLIENT_ACTIVITYMARBLEUTILS___C__DISPLAYCLASS3_1__CTOR_OFFSET UNITYSDK_OFFSET(0xB1B6CA0)
#define RPG_CLIENT_ACTIVITYMARBLEUTILS___C__DISPLAYCLASS3_1__OPENMARBLEMATCHPAGE_B__1_OFFSET UNITYSDK_OFFSET(0xB1B8C20)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityMarbleUtils___c__DisplayClass3_1_TypeDefinitionIndex = 61513;

	class ActivityMarbleUtils___c__DisplayClass3_1 : public ::System::Object
	{
	public:
		::RPG::Client::ActivityMarble::MarblePVPManager* pvpMgr; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLEUTILS___C__DISPLAYCLASS3_1__CTOR_OFFSET))(this);
		}

		::System::Void _OpenMarbleMatchPage_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLEUTILS___C__DISPLAYCLASS3_1__OPENMARBLEMATCHPAGE_B__1_OFFSET))(this);
		}
	};
}
