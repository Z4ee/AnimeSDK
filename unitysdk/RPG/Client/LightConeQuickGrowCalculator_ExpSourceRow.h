#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_LIGHTCONEQUICKGROWCALCULATOR_EXPSOURCEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16C715D0)

namespace RPG::Client
{
	inline static constexpr unsigned int LightConeQuickGrowCalculator_ExpSourceRow_TypeDefinitionIndex = 62800;

	class LightConeQuickGrowCalculator_ExpSourceRow : public ::System::Object
	{
	public:
		::System::UInt32 CoinCost; // 0x10
		::System::UInt32 ExpProvide; // 0x14
		::System::Boolean IsConvertedFromLightCone; // 0x18
		::System::UInt32 ItemID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEQUICKGROWCALCULATOR_EXPSOURCEROW__CTOR_OFFSET))(this);
		}
	};
}
