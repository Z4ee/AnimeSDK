#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityMarble { class MarbleMatchContext; }
namespace RPG::Client::ActivityMarble { class MarblePVPMatchContext; }

#define RPG_CLIENT_ACTIVITYMARBLEUTILS___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x8F6F970)
#define RPG_CLIENT_ACTIVITYMARBLEUTILS___C__DISPLAYCLASS3_0__OPENMARBLEMATCHPAGE_B__0_OFFSET UNITYSDK_OFFSET(0x8F71570)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityMarbleUtils___c__DisplayClass3_0_TypeDefinitionIndex = 53434;

	class ActivityMarbleUtils___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::RPG::Client::ActivityMarble::MarbleMatchContext* context; // 0x10
		::RPG::Client::ActivityMarble::MarblePVPMatchContext* pvpContext; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLEUTILS___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Void _OpenMarbleMatchPage_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLEUTILS___C__DISPLAYCLASS3_0__OPENMARBLEMATCHPAGE_B__0_OFFSET))(this);
		}
	};
}
