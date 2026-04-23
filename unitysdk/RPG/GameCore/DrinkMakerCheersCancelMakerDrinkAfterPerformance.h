#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DRINKMAKERCHEERSCANCELMAKERDRINKAFTERPERFORMANCE_METHOD_3_2EC992618E27A9BB_OFFSET UNITYSDK_OFFSET(0x188833B0)
#define RPG_GAMECORE_DRINKMAKERCHEERSCANCELMAKERDRINKAFTERPERFORMANCE_METHOD_3_84E1278563400B47_OFFSET UNITYSDK_OFFSET(0x188832A0)
#define RPG_GAMECORE_DRINKMAKERCHEERSCANCELMAKERDRINKAFTERPERFORMANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x18883380)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DrinkMakerCheersCancelMakerDrinkAfterPerformance_TypeDefinitionIndex = 20806;

	class DrinkMakerCheersCancelMakerDrinkAfterPerformance : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERCHEERSCANCELMAKERDRINKAFTERPERFORMANCE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_84E1278563400B47(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DrinkMakerCheersCancelMakerDrinkAfterPerformance*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DrinkMakerCheersCancelMakerDrinkAfterPerformance*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERCHEERSCANCELMAKERDRINKAFTERPERFORMANCE_METHOD_3_84E1278563400B47_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2EC992618E27A9BB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DrinkMakerCheersCancelMakerDrinkAfterPerformance* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DrinkMakerCheersCancelMakerDrinkAfterPerformance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERCHEERSCANCELMAKERDRINKAFTERPERFORMANCE_METHOD_3_2EC992618E27A9BB_OFFSET))(a1, a2);
		}
	};
}
