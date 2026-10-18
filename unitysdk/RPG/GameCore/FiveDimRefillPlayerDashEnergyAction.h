#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMREFILLPLAYERDASHENERGYACTION_METHOD_4_1DC186785ED9C6A6_OFFSET UNITYSDK_OFFSET(0x1D6D7130)
#define RPG_GAMECORE_FIVEDIMREFILLPLAYERDASHENERGYACTION_METHOD_4_B88E6AB990535417_OFFSET UNITYSDK_OFFSET(0x1D6D70B0)
#define RPG_GAMECORE_FIVEDIMREFILLPLAYERDASHENERGYACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6D7120)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimRefillPlayerDashEnergyAction_TypeDefinitionIndex = 18765;

	class FiveDimRefillPlayerDashEnergyAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMREFILLPLAYERDASHENERGYACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_B88E6AB990535417(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimRefillPlayerDashEnergyAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimRefillPlayerDashEnergyAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMREFILLPLAYERDASHENERGYACTION_METHOD_4_B88E6AB990535417_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1DC186785ED9C6A6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimRefillPlayerDashEnergyAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimRefillPlayerDashEnergyAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMREFILLPLAYERDASHENERGYACTION_METHOD_4_1DC186785ED9C6A6_OFFSET))(a1, a2);
		}
	};
}
