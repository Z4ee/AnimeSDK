#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class DrinkMakerCheersBarExtend; }
namespace RPG::Client { class DrinkMakerCheersGuestDrinkRecordData; }

#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND___C__DISPLAYCLASS59_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA18E9F0)
#define RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND___C__DISPLAYCLASS59_0__PLAYPERFORMANCEAFTERINVITEGUESTGIVEDRINK_B__0_OFFSET UNITYSDK_OFFSET(0xA1900B0)

namespace RPG::Client
{
	inline static constexpr unsigned int DrinkMakerCheersBarExtend___c__DisplayClass59_0_TypeDefinitionIndex = 58608;

	class DrinkMakerCheersBarExtend___c__DisplayClass59_0 : public ::System::Object
	{
	public:
		::RPG::Client::DrinkMakerCheersBarExtend* __4__this; // 0x10
		::RPG::Client::DrinkMakerCheersGuestDrinkRecordData* drinkRecordData; // 0x18
		::System::UInt32 needPlayPerformanceIndex; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND___C__DISPLAYCLASS59_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayPerformanceAfterInviteGuestGiveDrink_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSBAREXTEND___C__DISPLAYCLASS59_0__PLAYPERFORMANCEAFTERINVITEGUESTGIVEDRINK_B__0_OFFSET))(this);
		}
	};
}
