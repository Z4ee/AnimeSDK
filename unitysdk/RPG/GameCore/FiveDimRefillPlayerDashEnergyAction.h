#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMREFILLPLAYERDASHENERGYACTION_METHOD_3_C204DC8BF895BD64_OFFSET UNITYSDK_OFFSET(0x19751F00)
#define RPG_GAMECORE_FIVEDIMREFILLPLAYERDASHENERGYACTION_METHOD_3_F6A1E888162FA621_OFFSET UNITYSDK_OFFSET(0x19751FC0)
#define RPG_GAMECORE_FIVEDIMREFILLPLAYERDASHENERGYACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x19751FA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimRefillPlayerDashEnergyAction_TypeDefinitionIndex = 17855;

	class FiveDimRefillPlayerDashEnergyAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMREFILLPLAYERDASHENERGYACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C204DC8BF895BD64(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimRefillPlayerDashEnergyAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimRefillPlayerDashEnergyAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMREFILLPLAYERDASHENERGYACTION_METHOD_3_C204DC8BF895BD64_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F6A1E888162FA621(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimRefillPlayerDashEnergyAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimRefillPlayerDashEnergyAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMREFILLPLAYERDASHENERGYACTION_METHOD_3_F6A1E888162FA621_OFFSET))(a1, a2);
		}
	};
}
