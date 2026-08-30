#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E0B808936AD386AC;
namespace RPG::Client { class LightConeQuickGrowCalculator; }

#define RPG_CLIENT_LIGHTCONEQUICKGROWCALCULATOR___C__DISPLAYCLASS24_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD441A10)
#define RPG_CLIENT_LIGHTCONEQUICKGROWCALCULATOR___C__DISPLAYCLASS24_0___RESOLVEFARMDEMAND_B__0_OFFSET UNITYSDK_OFFSET(0xD443730)
#define RPG_CLIENT_LIGHTCONEQUICKGROWCALCULATOR___C__DISPLAYCLASS24_0___RESOLVEFARMDEMAND_B__1_OFFSET UNITYSDK_OFFSET(0xD443790)

namespace RPG::Client
{
	inline static constexpr unsigned int LightConeQuickGrowCalculator___c__DisplayClass24_0_TypeDefinitionIndex = 65790;

	class LightConeQuickGrowCalculator___c__DisplayClass24_0 : public ::System::Object
	{
	public:
		::Class_1_E0B808936AD386AC* nonPileCosts; // 0x10
		::Class_1_E0B808936AD386AC* promotionCosts; // 0x18
		::RPG::Client::LightConeQuickGrowCalculator* __4__this; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEQUICKGROWCALCULATOR___C__DISPLAYCLASS24_0__CTOR_OFFSET))(this);
		}

		::System::Void __ResolveFarmDemand_b__0(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEQUICKGROWCALCULATOR___C__DISPLAYCLASS24_0___RESOLVEFARMDEMAND_B__0_OFFSET))(this, a1, a2);
		}

		::System::Void __ResolveFarmDemand_b__1(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEQUICKGROWCALCULATOR___C__DISPLAYCLASS24_0___RESOLVEFARMDEMAND_B__1_OFFSET))(this, a1, a2);
		}
	};
}
