#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_STAMINAEXCHANGECALCULATORRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0xB1C3D90)

namespace RPG::Client
{
	inline static constexpr unsigned int StaminaExchangeCalculatorResult_TypeDefinitionIndex = 60526;

	class StaminaExchangeCalculatorResult : public ::System::Object
	{
	public:
		::System::UInt32 FuelItemID; // 0x10
		::System::UInt32 FuelItemNum; // 0x14
		::System::UInt32 ReserveStaminaNum; // 0x18
		::System::UInt32 StaminaNum; // 0x1C
		::System::Boolean IsEnough; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAMINAEXCHANGECALCULATORRESULT__CTOR_OFFSET))(this);
		}
	};
}
