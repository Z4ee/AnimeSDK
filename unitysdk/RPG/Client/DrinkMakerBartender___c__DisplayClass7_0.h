#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class DrinkMakerBartender_Cup; }

#define RPG_CLIENT_DRINKMAKERBARTENDER___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0xCD8CD40)
#define RPG_CLIENT_DRINKMAKERBARTENDER___C__DISPLAYCLASS7_0__GETCUP_B__0_OFFSET UNITYSDK_OFFSET(0xCD8D5B0)

namespace RPG::Client
{
	inline static constexpr unsigned int DrinkMakerBartender___c__DisplayClass7_0_TypeDefinitionIndex = 63669;

	class DrinkMakerBartender___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::System::UInt32 cupID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDER___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetCup_b__0(::RPG::Client::DrinkMakerBartender_Cup* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::DrinkMakerBartender_Cup*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDER___C__DISPLAYCLASS7_0__GETCUP_B__0_OFFSET))(this, a1);
		}
	};
}
