#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class DrinkMakerBartender_Ice; }

#define RPG_CLIENT_DRINKMAKERBARTENDER___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA1844C0)
#define RPG_CLIENT_DRINKMAKERBARTENDER___C__DISPLAYCLASS8_0__GETICE_B__0_OFFSET UNITYSDK_OFFSET(0xA184A40)

namespace RPG::Client
{
	inline static constexpr unsigned int DrinkMakerBartender___c__DisplayClass8_0_TypeDefinitionIndex = 58603;

	class DrinkMakerBartender___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::System::UInt32 iceID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDER___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetIce_b__0(::RPG::Client::DrinkMakerBartender_Ice* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::DrinkMakerBartender_Ice*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDER___C__DISPLAYCLASS8_0__GETICE_B__0_OFFSET))(this, x);
		}
	};
}
