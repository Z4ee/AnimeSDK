#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class StaminaExchangeCalculatorResult; }

#define RPG_CLIENT_STAMINAEXCHANGECALCULATOR_CALCULATE_OFFSET UNITYSDK_OFFSET(0xC91C4C0)
#define RPG_CLIENT_STAMINAEXCHANGECALCULATOR__GETFUELITEMID_OFFSET UNITYSDK_OFFSET(0xC91C770)
#define RPG_CLIENT_STAMINAEXCHANGECALCULATOR__GETFUELTOSTAMINANUM_OFFSET UNITYSDK_OFFSET(0xC91C7B0)

namespace RPG::Client
{
	inline static constexpr unsigned int StaminaExchangeCalculator_TypeDefinitionIndex = 61461;

	class StaminaExchangeCalculator : public ::System::Object
	{
	public:
		// static const ::System::UInt32 _FuelItemID = 0xC9; // 0x0
		// static const ::System::UInt32 _FuelToStaminaNum = 0x3C; // 0x0

		static ::RPG::Client::StaminaExchangeCalculatorResult* Calculate(::System::UInt32 a1)
		{
			return ((::RPG::Client::StaminaExchangeCalculatorResult*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAMINAEXCHANGECALCULATOR_CALCULATE_OFFSET))(a1);
		}

		static ::System::UInt32 _GetFuelItemID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_STAMINAEXCHANGECALCULATOR__GETFUELITEMID_OFFSET))();
		}

		static ::System::UInt32 _GetFuelToStaminaNum()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_STAMINAEXCHANGECALCULATOR__GETFUELTOSTAMINANUM_OFFSET))();
		}
	};
}
