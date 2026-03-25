#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class DrinkMakerBartender_Decoration; }

#define RPG_CLIENT_DRINKMAKERBARTENDER___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0x95027E0)
#define RPG_CLIENT_DRINKMAKERBARTENDER___C__DISPLAYCLASS10_0__GETDECORATION_B__0_OFFSET UNITYSDK_OFFSET(0x9502CA0)

namespace RPG::Client
{
	inline static constexpr unsigned int DrinkMakerBartender___c__DisplayClass10_0_TypeDefinitionIndex = 51653;

	class DrinkMakerBartender___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::System::UInt32 decorationID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDER___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetDecoration_b__0(::RPG::Client::DrinkMakerBartender_Decoration* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::DrinkMakerBartender_Decoration*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDER___C__DISPLAYCLASS10_0__GETDECORATION_B__0_OFFSET))(this, x);
		}
	};
}
