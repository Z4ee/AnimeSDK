#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DRINKMAKERCHEERSCANCELMAKERDRINKAFTERPERFORMANCE_METHOD_3_2EC992618E27A9BB_OFFSET UNITYSDK_OFFSET(0x1D03E180)
#define RPG_GAMECORE_DRINKMAKERCHEERSCANCELMAKERDRINKAFTERPERFORMANCE_METHOD_3_5A8F9B3625143FBE_OFFSET UNITYSDK_OFFSET(0x1D03E0B0)
#define RPG_GAMECORE_DRINKMAKERCHEERSCANCELMAKERDRINKAFTERPERFORMANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D03E170)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DrinkMakerCheersCancelMakerDrinkAfterPerformance_TypeDefinitionIndex = 21704;

	class DrinkMakerCheersCancelMakerDrinkAfterPerformance : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERCHEERSCANCELMAKERDRINKAFTERPERFORMANCE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5A8F9B3625143FBE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DrinkMakerCheersCancelMakerDrinkAfterPerformance*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DrinkMakerCheersCancelMakerDrinkAfterPerformance*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERCHEERSCANCELMAKERDRINKAFTERPERFORMANCE_METHOD_3_5A8F9B3625143FBE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2EC992618E27A9BB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DrinkMakerCheersCancelMakerDrinkAfterPerformance* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DrinkMakerCheersCancelMakerDrinkAfterPerformance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERCHEERSCANCELMAKERDRINKAFTERPERFORMANCE_METHOD_3_2EC992618E27A9BB_OFFSET))(a1, a2);
		}
	};
}
