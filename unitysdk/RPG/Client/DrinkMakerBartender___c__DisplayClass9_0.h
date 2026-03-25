#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class DrinkMakerBartender_Ingredient; }

#define RPG_CLIENT_DRINKMAKERBARTENDER___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9502700)
#define RPG_CLIENT_DRINKMAKERBARTENDER___C__DISPLAYCLASS9_0__GETINGREDIENT_B__0_OFFSET UNITYSDK_OFFSET(0x9502D90)

namespace RPG::Client
{
	inline static constexpr unsigned int DrinkMakerBartender___c__DisplayClass9_0_TypeDefinitionIndex = 51656;

	class DrinkMakerBartender___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::System::UInt32 ingredientID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDER___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetIngredient_b__0(::RPG::Client::DrinkMakerBartender_Ingredient* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::DrinkMakerBartender_Ingredient*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDER___C__DISPLAYCLASS9_0__GETINGREDIENT_B__0_OFFSET))(this, x);
		}
	};
}
