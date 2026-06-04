#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class DrinkMakerCheersBarExtend; }
namespace RPG::Client { class DrinkMakerCheersGuestDrinkRecordData; }

#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND___C__DISPLAYCLASS60_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB80FD90)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND___C__DISPLAYCLASS60_0__PLAYDRINKGIVENAMEPERFORMANCEAFTERINVITEGUESTGIVEDRINK_B__0_OFFSET UNITYSDK_OFFSET(0xB8114E0)

namespace RPG::Client
{
	inline static constexpr unsigned int DrinkMakerCheersBarExtend___c__DisplayClass60_0_TypeDefinitionIndex = 59539;

	class DrinkMakerCheersBarExtend___c__DisplayClass60_0 : public ::System::Object
	{
	public:
		::RPG::Client::DrinkMakerCheersBarExtend* __4__this; // 0x10
		::RPG::Client::DrinkMakerCheersGuestDrinkRecordData* drinkRecordData; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND___C__DISPLAYCLASS60_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayDrinkGiveNamePerformanceAfterInviteGuestGiveDrink_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND___C__DISPLAYCLASS60_0__PLAYDRINKGIVENAMEPERFORMANCEAFTERINVITEGUESTGIVEDRINK_B__0_OFFSET))(this);
		}
	};
}
