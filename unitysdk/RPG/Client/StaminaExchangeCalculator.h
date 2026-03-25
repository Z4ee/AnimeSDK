#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class StaminaExchangeCalculatorResult; }

#define RPG_CLIENT_STAMINAEXCHANGECALCULATOR_CALCULATE_OFFSET UNITYSDK_OFFSET(0xA4D2E30)
#define RPG_CLIENT_STAMINAEXCHANGECALCULATOR__GETFUELITEMID_OFFSET UNITYSDK_OFFSET(0xA4D30E0)
#define RPG_CLIENT_STAMINAEXCHANGECALCULATOR__GETFUELTOSTAMINANUM_OFFSET UNITYSDK_OFFSET(0xA4D3120)

namespace RPG::Client
{
	inline static constexpr unsigned int StaminaExchangeCalculator_TypeDefinitionIndex = 53392;

	class StaminaExchangeCalculator : public ::System::Object
	{
	public:
		// static const ::System::UInt32 _FuelItemID = 0xC9; // 0x0
		// static const ::System::UInt32 _FuelToStaminaNum = 0x3C; // 0x0

		static ::RPG::Client::StaminaExchangeCalculatorResult* Calculate(::System::UInt32 staminaCost)
		{
			return ((::RPG::Client::StaminaExchangeCalculatorResult*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAMINAEXCHANGECALCULATOR_CALCULATE_OFFSET))(staminaCost);
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
