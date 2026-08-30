#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DrinkMakerQuantifyTagType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class DrinkMakerTag; }

#define RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA___C__DISPLAYCLASS17_0__CTOR_OFFSET UNITYSDK_OFFSET(0xCD897A0)
#define RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA___C__DISPLAYCLASS17_0__GETQUANTIFYTAGBYTYPE_B__0_OFFSET UNITYSDK_OFFSET(0xCD897B0)

namespace RPG::Client
{
	inline static constexpr unsigned int DrinkMakerBartendDrinkData___c__DisplayClass17_0_TypeDefinitionIndex = 63660;

	class DrinkMakerBartendDrinkData___c__DisplayClass17_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::DrinkMakerQuantifyTagType type; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA___C__DISPLAYCLASS17_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetQuantifyTagByType_b__0(::RPG::Client::DrinkMakerTag* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::DrinkMakerTag*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA___C__DISPLAYCLASS17_0__GETQUANTIFYTAGBYTYPE_B__0_OFFSET))(this, a1);
		}
	};
}
